/*
 * Temporizador con 1 botón - Seeed Studio XIAO SAMD21 + OLED 0.96" I2C 128x64 (SSD1315/SSD1306)
 *
 * Conexiones:
 *   OLED  VCC -> 3V3     GND -> GND     SDA -> D4     SCL -> D5   (dirección I2C 0x3C)
 *   Botón     -> D1 y GND (usa el pull-up interno)
 *   Buzzer    -> D2 (+)  y GND (-)   (ver nota del transistor en README)
 *   LED       -> D3 -> resistencia 220 ohm -> LED -> GND
 *
 * Funcionamiento:
 *   - Reposo: pantalla apagada. Presionar el botón la enciende y muestra 5.
 *   - Pulsación corta: 5 -> 10 -> 15 -> 20 -> 5 ...
 *   - Mantener 2 s: incrementa +1 por paso (si se eligió 5, 10 o 15) o +5 (si se eligió 20)
 *     hasta soltar el botón.
 *   - Tras 3 s sin tocar el botón, empieza la cuenta regresiva (1 unidad = 1 minuto).
 *   - Durante la cuenta regresiva, mantener 2 s cancela y vuelve a reposo.
 *   - Al llegar a 0: buzzer + LED intermitentes. Se apaga con el botón o a los 5 s.
 *
 * Librerías (Gestor de librerías del Arduino IDE):
 *   - Adafruit SSD1306
 *   - Adafruit GFX Library
 */

#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

// ---------- Pines ----------
const uint8_t PIN_BOTON_TEMP  = 1;   // D1
const uint8_t PIN_BUZZER_TEMP = 2;   // D2
const uint8_t PIN_LED_ALARMA  = 3;   // D3

// ---------- Pantalla ----------
const uint8_t ANCHO = 128;
const uint8_t ALTO  = 64;
const uint8_t OLED_DIRECCION = 0x3C;   // Algunos módulos usan 0x3D
Adafruit_SSD1306 pantalla(ANCHO, ALTO, &Wire, -1);

// ---------- Configuración ----------
const uint8_t  PRESETS[]            = {5, 10, 15, 20};
const uint8_t  NUM_PRESETS          = sizeof(PRESETS) / sizeof(PRESETS[0]);
const uint16_t VALOR_MAXIMO         = 995;     // minutos máximos seleccionables
const uint32_t TIEMPO_ANTIREBOTE    = 30;      // ms
const uint32_t TIEMPO_PULSO_LARGO   = 2000;    // ms para empezar a incrementar
const uint32_t TIEMPO_REPETICION    = 300;     // ms entre incrementos mientras se mantiene
const uint32_t TIEMPO_CONFIRMACION  = 3000;    // ms sin tocar el botón para iniciar la cuenta
const uint32_t DURACION_ALARMA      = 5000;    // ms
const uint32_t PERIODO_PARPADEO     = 250;     // ms encendido / apagado de buzzer y LED
const uint16_t FRECUENCIA_BUZZER    = 2700;    // Hz (para buzzer pasivo)
const uint32_t MS_POR_UNIDAD        = 60000UL; // 1 unidad = 1 minuto

// ---------- Estados ----------
enum Estado { REPOSO, SELECCION, CUENTA_REGRESIVA, ALARMA };
Estado estado = REPOSO;

uint16_t valor       = 5;   // minutos seleccionados
uint8_t  indicePreset = 0;  // último preset elegido con pulsación corta
uint8_t  pasoIncremento = 1;

uint32_t ultimaInteraccion = 0;
uint32_t finCuenta         = 0;
uint32_t inicioAlarma      = 0;
uint32_t ultimoRefresco    = 0;

// ---------- Botón (antirrebote + pulsación larga) ----------
bool     botonEstable      = false;  // true = presionado
bool     botonLecturaPrev  = false;
uint32_t botonCambioMs     = 0;
uint32_t botonPresionadoMs = 0;
bool     pulsoLargoActivo  = false;
uint32_t ultimoIncremento  = 0;
bool     ignorarSoltar     = false;  // la pulsación que despierta no cuenta como "corta"

// ======================================================================

void encenderPantalla(bool encender) {
  pantalla.ssd1306_command(encender ? SSD1306_DISPLAYON : SSD1306_DISPLAYOFF);
}

void salidasAlarma(bool activo) {
  static int8_t ultimo = -1;          // evita reiniciar tone() en cada vuelta del loop
  if (ultimo == (int8_t)activo) return;
  ultimo = activo;
  digitalWrite(PIN_LED_ALARMA, activo ? HIGH : LOW);
  if (activo) tone(PIN_BUZZER_TEMP, FRECUENCIA_BUZZER);
  else        noTone(PIN_BUZZER_TEMP);
}

void dibujarCentrado(const char *texto, uint8_t tamano, int16_t y) {
  int16_t x1, y1;
  uint16_t w, h;
  pantalla.setTextSize(tamano);
  pantalla.getTextBounds(texto, 0, 0, &x1, &y1, &w, &h);
  pantalla.setCursor((ANCHO - w) / 2, y);
  pantalla.print(texto);
}

void dibujarSeleccion() {
  char buf[8];
  pantalla.clearDisplay();
  dibujarCentrado("SELECCIONAR", 1, 0);
  snprintf(buf, sizeof(buf), "%u", valor);
  dibujarCentrado(buf, 4, 16);
  dibujarCentrado(pulsoLargoActivo ? (pasoIncremento == 5 ? "+5 ..." : "+1 ...") : "minutos", 1, 54);
  pantalla.display();
}

void dibujarCuenta() {
  int32_t restanteMs = (int32_t)(finCuenta - millis());
  if (restanteMs < 0) restanteMs = 0;
  uint32_t seg = (restanteMs + 999) / 1000;   // redondeo hacia arriba
  uint32_t h = seg / 3600;
  uint32_t m = (seg % 3600) / 60;
  uint32_t s = seg % 60;

  char buf[24];
  if (h > 0) snprintf(buf, sizeof(buf), "%lu:%02lu:%02lu", h, m, s);
  else       snprintf(buf, sizeof(buf), "%02lu:%02lu", m, s);

  pantalla.clearDisplay();
  dibujarCentrado("CUENTA ATRAS", 1, 0);
  dibujarCentrado(buf, 3, 20);

  // Barra de progreso
  uint32_t totalMs = (uint32_t)valor * MS_POR_UNIDAD;
  uint16_t anchoBarra = (uint64_t)(totalMs - restanteMs) * (ANCHO - 4) / totalMs;
  pantalla.drawRect(0, 54, ANCHO, 10, SSD1306_WHITE);
  pantalla.fillRect(2, 56, anchoBarra, 6, SSD1306_WHITE);
  pantalla.display();
}

// ---------- Transiciones ----------

void irAReposo() {
  estado = REPOSO;
  salidasAlarma(false);
  pantalla.clearDisplay();
  pantalla.display();
  encenderPantalla(false);
}

void irASeleccion() {
  estado = SELECCION;
  indicePreset = 0;
  valor = PRESETS[indicePreset];
  ultimaInteraccion = millis();
  encenderPantalla(true);
  dibujarSeleccion();
}

void irACuenta() {
  estado = CUENTA_REGRESIVA;
  finCuenta = millis() + (uint32_t)valor * MS_POR_UNIDAD;
  ultimoRefresco = 0;
  dibujarCuenta();
}

void irAAlarma() {
  estado = ALARMA;
  inicioAlarma = millis();
  pantalla.clearDisplay();
  pantalla.display();
  encenderPantalla(false);   // la pantalla solo se usa en selección y cuenta atrás
}

// ---------- Eventos del botón ----------

void alPresionar() {
  if (estado == REPOSO) {
    irASeleccion();
    ignorarSoltar = true;          // esta pulsación solo despierta y muestra 5
  } else if (estado == ALARMA) {
    irAReposo();
    ignorarSoltar = true;
  }
}

void alPulsoCorto() {
  if (estado != SELECCION) return;
  // Avanza al siguiente preset mayor que el valor actual (vuelve a 5 tras 20 o más)
  uint8_t siguiente = 0;
  for (uint8_t i = 0; i < NUM_PRESETS; i++) {
    if (PRESETS[i] > valor) { siguiente = i; break; }
  }
  indicePreset = siguiente;
  valor = PRESETS[indicePreset];
  ultimaInteraccion = millis();
  dibujarSeleccion();
}

void alInicioPulsoLargo() {
  if (estado == SELECCION) {
    // El paso depende del preset elegido: 20 -> de a 5, 5/10/15 -> de a 1
    pasoIncremento = (PRESETS[indicePreset] == 20) ? 5 : 1;
  } else if (estado == CUENTA_REGRESIVA) {
    irAReposo();                    // cancelar la cuenta atrás
  }
}

void alRepetirPulsoLargo() {
  if (estado != SELECCION) return;
  if (valor + pasoIncremento <= VALOR_MAXIMO) valor += pasoIncremento;
  ultimaInteraccion = millis();
  dibujarSeleccion();
}

void alSoltar(bool fueLargo) {
  if (ignorarSoltar) { ignorarSoltar = false; return; }
  if (fueLargo) {
    if (estado == SELECCION) dibujarSeleccion();   // quita el "+1 ..." de la pantalla
  } else {
    alPulsoCorto();
  }
  ultimaInteraccion = millis();
}

void leerBoton() {
  uint32_t ahora = millis();
  bool lectura = (digitalRead(PIN_BOTON_TEMP) == LOW);

  if (lectura != botonLecturaPrev) {
    botonLecturaPrev = lectura;
    botonCambioMs = ahora;
  }

  if ((ahora - botonCambioMs) >= TIEMPO_ANTIREBOTE && lectura != botonEstable) {
    botonEstable = lectura;
    if (botonEstable) {
      botonPresionadoMs = ahora;
      pulsoLargoActivo = false;
      alPresionar();
    } else {
      bool fueLargo = pulsoLargoActivo;
      pulsoLargoActivo = false;
      alSoltar(fueLargo);
    }
  }

  // Pulsación larga mientras se mantiene presionado
  if (botonEstable && !ignorarSoltar) {
    if (!pulsoLargoActivo && (ahora - botonPresionadoMs) >= TIEMPO_PULSO_LARGO) {
      pulsoLargoActivo = true;
      alInicioPulsoLargo();
      if (estado == SELECCION) {
        alRepetirPulsoLargo();      // primer incremento inmediato al cumplir 2 s
        ultimoIncremento = ahora;
      } else {
        ignorarSoltar = true;       // p.ej. se canceló la cuenta: ignorar el soltar
      }
    } else if (pulsoLargoActivo && (ahora - ultimoIncremento) >= TIEMPO_REPETICION) {
      ultimoIncremento = ahora;
      alRepetirPulsoLargo();
    }
  }
}

// ======================================================================

void setup() {
  pinMode(PIN_BOTON_TEMP, INPUT_PULLUP);
  pinMode(PIN_BUZZER_TEMP, OUTPUT);
  pinMode(PIN_LED_ALARMA, OUTPUT);
  salidasAlarma(false);

  if (!pantalla.begin(SSD1306_SWITCHCAPVCC, OLED_DIRECCION)) {
    // Sin pantalla: parpadeo rápido del LED como indicación de error
    while (true) {
      digitalWrite(PIN_LED_ALARMA, !digitalRead(PIN_LED_ALARMA));
      delay(100);
    }
  }
  pantalla.setTextColor(SSD1306_WHITE);
  irAReposo();
}

void loop() {
  leerBoton();
  uint32_t ahora = millis();

  switch (estado) {
    case REPOSO:
      break;

    case SELECCION:
      if (!botonEstable && (ahora - ultimaInteraccion) >= TIEMPO_CONFIRMACION) {
        irACuenta();
      }
      break;

    case CUENTA_REGRESIVA:
      if ((int32_t)(finCuenta - ahora) <= 0) {
        irAAlarma();
      } else if (ahora - ultimoRefresco >= 250) {
        ultimoRefresco = ahora;
        dibujarCuenta();
      }
      break;

    case ALARMA: {
      uint32_t transcurrido = ahora - inicioAlarma;
      if (transcurrido >= DURACION_ALARMA) {
        irAReposo();
      } else {
        salidasAlarma(((transcurrido / PERIODO_PARPADEO) % 2) == 0);
      }
      break;
    }
  }
}
