# Primeros pasos con la Serie Seeed Studio XIAO SAMD21

URL: https://wiki.seeedstudio.com/es/Seeeduino-XIAO/

| Seeed Studio XIAO SAMD21 | Seeed Studio XIAO SAMD21 Plus |
| --- | --- | 
| ![](https://files.seeedstudio.com/wiki/Seeeduino-XIAO/img/xiao-samd21-pre.jpg) | ![](https://files.seeedstudio.com/wiki/Seeeduino-XIAO/img/xiao-samd21-plus-pre.jpg) | 
| [**Consigue uno ahora ðŸ–±ï¸**](https://www.seeedstudio.com/Seeeduino-XIAO-Arduino-Microcontroller-SAMD21-Cortex-M0+-p-4426.html) | [**Consigue uno ahora ðŸ–±ï¸**](https://www.seeedstudio.com/Seeed-Studio-XIAO-SAMD21-Plus-p-6933.html) | 

## DescripciÃ³n general

El Seeed Studio XIAO SAMD21, que solÃ­a llamarse Seeeduino XIAO, es el primer lanzamiento de la [familia Seeed Studio XIAO, una serie de potentes placas de desarrollo del tamaÃ±o de un pulgar compatibles con Arduino](https://www.seeedstudio.com/xiao-series-page) . Incorpora el potente ATSAMD21G18A-MU, que es un microcontrolador de bajo consumo. Por otro lado, esta pequeÃ±a placa tiene un buen rendimiento de procesamiento pero necesita menos energÃ­a. EstÃ¡ diseÃ±ada en un tamaÃ±o diminuto y puede utilizarse para dispositivos wearables y proyectos pequeÃ±os.

Seeed Studio XIAO SAMD21 tiene 14 pines, que pueden utilizarse para 11 interfaces digitales, 11 interfaces analÃ³gicas, 10 interfaces PWM (d1-d10), 1 pin de salida DAC D0, 1 interfaz de pad SWD, 1 interfaz I2C, 1 interfaz SPI, 1 interfaz UART, indicador de comunicaciÃ³n serie (T/R), luz de parpadeo (L) mediante multiplexaciÃ³n de pines. Los colores de los LED (Power, L, RX, TX) son verde, amarillo, azul y azul. AdemÃ¡s, Seeed Studio XIAO SAMD21 tiene una interfaz Type-C que puede suministrar energÃ­a y descargar cÃ³digo. Hay dos botones de reinicio, puedes cortocircuitarlos para reiniciar la placa.

Impulsado por el procesador ARM Cortex-M0+ de 32 bits SAMD21G18A de Microchip, XIAO SAMD21 Plus aporta mayor flexibilidad y capacidad de expansiÃ³n al diminuto y versÃ¡til XIAO SAMD21. Mientras mantiene todas las potentes funciones, incluida la compatibilidad con Arduino, MicroPython y PlatformIO, la variante Plus incorpora castelaciones rediseÃ±adas y un diseÃ±o de pads en la parte posterior, ofreciendo 16 GPIO adicionales, gestiÃ³n integrada de baterÃ­as de iones de litio, botones dedicados de Reset y Boot, y un LED RGB WS2812 programable a bordo. Es ideal para proyectos avanzados de IoT, wearables alimentados por baterÃ­a, aplicaciones embebidas y diseÃ±os de SoM listos para producciÃ³n.

## DocumentaciÃ³n

Hay dos documentos sobre el uso de **Seeed Studio XIAO SAMD21** que se centran en diferentes Ã¡reas, consulta la siguiente tabla como referencia:

| [**DocumentaciÃ³n de Seeed**](https://wiki.seeedstudio.com/es/Seeeduino-XIAO/) | [**DocumentaciÃ³n de Nanase**](https://wiki.seeedstudio.com/es/Seeeduino-XIAO-by-Nanase/) |
| --- | --- | 
| Diagrama de pines | Interfaz | 
| Primeros pasos con Seeed Studio XIAO SAMD21 | Seeed Studio XIAO SAMD21 con tarjeta MicroSD (SPI) | 
| Uso de GPIO en Seeed Studio XIAO SAMD21 | Seeed Studio XIAO SAMD21 con GPS (UART) | 
| Recursos de Seeed Studio XIAO SAMD21 | IOBUS de ciclo Ãºnico | 

## CaracterÃ­sticas

- Potente MCU: procesador Microchip ATSAMD21G18A ArmÂ® CortexÂ®-M0+ a 48 MHz, con 256 KB de Flash, 32 KB de SRAM y soporte USB nativo.
- E/S ampliadas: XIAO SAMD21 Plus mantiene el diseÃ±o estÃ¡ndar de 14 pines de XIAO y aÃ±ade 16 GPIO mediante castelaciones SMD de 1,27 mm en la parte posterior, con soporte para PWM, DAC, I2C, UART, SPI, I2S y SWD.
- GestiÃ³n de energÃ­a integrada: admite conexiÃ³n directa de baterÃ­a de iones de litio, carga a bordo, protecciÃ³n contra retroceso e indicaciÃ³n del estado de carga.
- Desarrollo flexible: compatible con Arduino IDE, PlatformIO, CircuitPython y TinyGo.
- Compacto y listo para el ecosistema: mantiene el factor de forma XIAO de 21 Ã— 17,8 mm compatible con protoboard, mientras adopta el diseÃ±o estandarizado de la parte posterior XIAO Plus para placas de expansiÃ³n y diseÃ±os de portadoras personalizadas.

## Especificaciones

| Product Name | Seeed Studio XIAO SAMD21 | Seeed Studio XIAO SAMD21 Plus |
| --- | --- | --- | 
| Chipset | [Microchip SAMD21G18](https://www.microchip.com/en-us/product/atsamd21g18) | [Microchip SAMD21G18](https://www.microchip.com/en-us/product/atsamd21g18) | 
| Processor | Procesador ArmÂ® CortexÂ®-M0+ funcionando hasta 48 MHz | Procesador ArmÂ® CortexÂ®-M0+ funcionando hasta 48 MHz | 
| RAM | 32 KB SRAM | 32 KB SRAM | 
| Flash | 256 KB Flash | 256 KB Flash | 
| Interface | Pin GPIO Ã—14
Pin digital Ã—11
Pin analÃ³gico Ã—11
DAC Ã—1
I2C Ã—1
UART Ã—1
SPI Ã—1 | Pin GPIO Ã—30
Pin digital Ã—27
Pin analÃ³gico Ã—11
DAC Ã—1
I2C Ã—2
UART Ã—1
SPI Ã—1
I2S Ã—1 | 
| Onboard | LED de usuario Ã—1
LED de encendido Ã—1
LED de estado TX/RX Ã—2 | LED de usuario Ã—1
BotÃ³n de reinicio Ã—1
BotÃ³n de arranque Ã—1 | 
| Battery Management | Ninguna | PMIC a bordo | 
| Power | TensiÃ³n de entrada (Type-C): 5 V
Entrada BAT: No compatible | TensiÃ³n de entrada (Type-C): 5 V
Entrada BAT: baterÃ­a de iones de litio/LiPo de celda Ãºnica de 3,7 V | 
| BAT-to-3V3 Backflow Protection | No | SÃ­ | 
| Working Temperature | -40Â°C a 85Â°C | -40Â°C a 85Â°C | 
| Dimensions | 21 Ã— 17,8 mm | 21 Ã— 17,8 mm | 
| Software Compatibility | Arduino, PlatformIO, MicroPython, CircuitPython, Zephyr y mÃ¡s | Arduino, PlatformIO, MicroPython, CircuitPython, Zephyr y mÃ¡s | 

## **DescripciÃ³n general del hardware**

- XIAO SAMD21
- XIAO SAMD21 Plus

### Parte frontal de XIAO SAMD21

![](https://files.seeedstudio.com/wiki/Seeeduino-XIAO/img/XIAO_SAMD21_front_pinout.png)

### Parte trasera de XIAO SAMD21

![](https://files.seeedstudio.com/wiki/Seeeduino-XIAO/img/XIAO_SAMD21_back_pinout.png)

### Parte frontal de XIAO SAMD21 Plus

![](https://files.seeedstudio.com/wiki/Seeeduino-XIAO/img/XIAO-SAMD21-Plus-Front.png)

### Parte trasera de XIAO SAMD21 Plus

![](https://files.seeedstudio.com/wiki/Seeeduino-XIAO/img/XIAO-SAMD21-Plus-Back.png)

precauciÃ³n
Para pines de E/S generales: La tensiÃ³n de funcionamiento del MCU es de 3,3 V. Una tensiÃ³n de entrada conectada a los pines de E/S generales puede causar daÃ±os al chip si es superior a 3,3 V.

Para pines de alimentaciÃ³n: El circuito convertidor DC-DC integrado capaz de convertir 5 V en 3,3 V permite alimentar el dispositivo con una fuente de 5 V a travÃ©s de VIN-PIN y 5V-PIN.

Es fundamental entender que los pads VIN y GND en la parte posterior del XIAO SAMD21 no estÃ¡n diseÃ±ados para conectar directamente una baterÃ­a, especialmente una baterÃ­a recargable de litio (LiPo/Li-Ion). La placa carece del circuito esencial de gestiÃ³n de baterÃ­a necesario para un funcionamiento seguro. Estos pads son simplemente un punto de entrada de alimentaciÃ³n alternativo que evita el diodo de protecciÃ³n integrado de la placa. Si deseas alimentar tu proyecto con una baterÃ­a, debes utilizar un mÃ³dulo externo de gestiÃ³n de baterÃ­a dedicado que proporcione carga y protecciÃ³n, y luego conectar la salida regulada de ese mÃ³dulo al pin de 5 V del XIAO.

Por favor, presta atenciÃ³n al uso, no levantes la cubierta de protecciÃ³n.

## Mapa de pines

| XIAO Pin | FunciÃ³n | XIAO SAMD21 | XIAO SAMD21 Plus | DescripciÃ³n |
| --- | --- | --- | --- | --- | 
| 5V | VBUS | VBUS | VBUS | Entrada/salida de alimentaciÃ³n USB de 5 V | 
| GND | GND | GND | GND | Tierra | 
| 3V3 | 3V3_OUT | 3V3_OUT | 3V3_OUT | Salida de alimentaciÃ³n de 3,3 V | 
| D0 | A0 / DAC | PA02 | PA02 | GPIO, ADC AIN0, salida DAC; sin PWM por hardware | 
| D1 | A1 | PA04 | PA04 | GPIO, ADC AIN4 | 
| D2 | A2 | PA10 | PA10 | GPIO, ADC AIN18 | 
| D3 | A3 | PA11 | PA11 | GPIO, ADC AIN19 | 
| D4 | SDA0 | PA08 | PA08 | GPIO, ADC AIN16, datos I2C | 
| D5 | SCL0 | PA09 | PA09 | GPIO, ADC AIN17, reloj I2C | 
| D6 | TX | PB08 | PB08 | GPIO, ADC AIN2, transmisiÃ³n UART | 
| D7 | RX | PB09 | PB09 | GPIO, ADC AIN3, recepciÃ³n UART | 
| D8 | SCK | PA07 | PA07 | GPIO, ADC AIN7, reloj SPI | 
| D9 | MISO | PA05 | PA05 | GPIO, ADC AIN5, datos de entrada SPI | 
| D10 | MOSI | PA06 | PA06 | GPIO, ADC AIN6, datos de salida SPI | 
| D11 | TX_LED | PA19 | - | LED TX interno en XIAO SAMD21; no definido en Plus | 
| D12 | GPIO | PA18 (RX_LED) | PA28 | GPIO de expansiÃ³n Plus | 
| D13 | SCL1 | PA17 (USER_LED) | PA17 | GPIO de expansiÃ³n Plus y reloj I2C1 | 
| D14 | SDA1 | - | PA16 | GPIO de expansiÃ³n Plus y datos I2C1 | 
| D15 | GPIO | - | PA15 | GPIO de expansiÃ³n Plus | 
| D16 | GPIO | - | PA14 | GPIO de expansiÃ³n Plus | 
| D17 | GPIO | - | PA13 | GPIO de expansiÃ³n Plus | 
| D18 | GPIO | - | PA12 | GPIO de expansiÃ³n Plus | 
| D19 | I2S_SD | - | PA19 | GPIO de expansiÃ³n Plus y datos I2S | 
| D20 | I2S_SCK | - | PA20 | GPIO de expansiÃ³n Plus y reloj I2S | 
| D21 | I2S_WS | - | PA21 | GPIO de expansiÃ³n Plus y selecciÃ³n de palabra I2S | 
| D22 | GPIO | - | PB10 | GPIO de expansiÃ³n Plus | 
| D23 | GPIO | - | PB11 | GPIO de expansiÃ³n Plus | 
| D24 | GPIO | - | PB23 | GPIO de expansiÃ³n Plus | 
| D25 | GPIO | - | PA23 | GPIO de expansiÃ³n Plus | 
| D26 | GPIO | - | PB2 | GPIO de expansiÃ³n Plus | 
| D27 | GPIO | - | PA18 | GPIO de expansiÃ³n Plus | 
| VBAT_EN | ActivaciÃ³n de baterÃ­a | - | PB2 | Control de alimentaciÃ³n de baterÃ­a en Plus | 
| AIN11_VBAT | Lectura de voltaje | - | PB3 | Leer el voltaje de la baterÃ­a en Plus | 
| Reset | RESETN | RESETN | RESETN | Entrada de reinicio activa en bajo, pin 40 del encapsulado | 
| TX_LED | LED | PA19 | - | Indicador TX de la placa original, activo en bajo | 
| RX_LED | LED | PA18 | - | Indicador RX de la placa original, activo en bajo | 
| USER_LED | LED | PA17 | - | LED de usuario de la placa original, activo en bajo | 
| POWER_LED | Indicador de alimentaciÃ³n | 3V3 | - | LED verde de alimentaciÃ³n de la placa original; no es un GPIO del MCU | 
| RGB_LED | Datos WS2812B | - | PA27 | Datos del LED RGB direccionable Plus | 
| USER_BUTTON | BotÃ³n | - | PB22 | BotÃ³n de usuario Plus, activo en bajo | 
| VBAT_EN | ActivaciÃ³n ADC de baterÃ­a | - | PB02 | Habilita la mediciÃ³n del voltaje de la baterÃ­a | 
| AIN11_VBAT | ADC de baterÃ­a | - | PB03 / AIN11 | Voltaje de baterÃ­a a travÃ©s de un divisor 1/2 | 
| CHARGE_LED | Indicador de carga | - | - | LED de carga controlado por hardware en Plus; no es un GPIO del MCU | 
| SWDIO | DepuraciÃ³n SWD | PA31 | PA31 | Datos de Serial Wire Debug | 
| SWCLK | DepuraciÃ³n SWD | PA30 | PA30 | Reloj de Serial Wire Debug | 

## Entrar en modo Bootloader

### Para XIAO SAMD21

A veces el puerto de Seeed Studio XIAO SAMD21 puede desaparecer cuando falla el proceso de programaciÃ³n del usuario. Podemos resolver este problema mediante la siguiente operaciÃ³n:

- Conecta el Seeed Studio XIAO SAMD21 a tu ordenador.
- Usa pinzas o cables cortos para puentear los pines RST del diagrama dos veces.
- Los LED naranjas parpadean y se encienden.
En este punto, el chip entra en modo Bootloader y el puerto de grabaciÃ³n vuelve a aparecer. Debido a que el chip samd21 tiene dos particiones, una es el Bootloader y la otra es el programa de usuario. El producto graba un cÃ³digo de bootloader en la memoria del sistema cuando sale de fÃ¡brica. Podemos cambiar de modo realizando los pasos anteriores.

![pir](https://files.seeedstudio.com/wiki/Seeeduino-XIAO/img/XIAO-reset.gif)

### Para XIAO SAMD21 Plus

Conecta el XIAO SAMD21 Plus a tu ordenador. Pulsa el botÃ³n de Reset dos veces consecutivas para entrar en modo Bootloader.

### Reset

Si quieres reiniciar el Seeed Studio XIAO SAMD21, realiza los siguientes pasos:

- Conecta el Seeed Studio XIAO SAMD21 a tu ordenador.
- Usa pinzas o cables cortos para puentear los pines RST **solo una vez**
- Los LED naranjas parpadean y se encienden.
Ten en cuenta: El comportamiento del LED integrado es el inverso al de un Arduino. En el Seeed Studio XIAO SAMD21, el pin debe ponerse en bajo, mientras que en otros microcontroladores debe ponerse en alto.

### InterrupciÃ³n

Todos los pines en Seeed Studio XIAO SAMD21 admiten interrupciones, pero hay dos pines que no se pueden usar al mismo tiempo: el pin 5 y el pin 7. Para mÃ¡s detalles sobre las interrupciones, consulta [aquÃ­](https://github.com/Seeed-Studio/ArduinoCore-samd/blob/master/variants/XIAO_m0/variant.cpp) .

## IntroducciÃ³n

### Hardware

| Seeed Studio XIAO SAMD21 | Seeed Studio XIAO SAMD21 Plus |
| --- | --- | 
| ![](https://files.seeedstudio.com/wiki/Seeeduino-XIAO/img/xiao-samd21-pre.jpg) | ![](https://files.seeedstudio.com/wiki/Seeeduino-XIAO/img/xiao-samd21-plus-pre.jpg) | 
| [**Consigue uno ahora ðŸ–±ï¸**](https://www.seeedstudio.com/Seeeduino-XIAO-Arduino-Microcontroller-SAMD21-Cortex-M0+-p-4426.html) | [**Consigue uno ahora ðŸ–±ï¸**](https://www.seeedstudio.com/Seeed-Studio-XIAO-SAMD21-Plus-p-6933.html) | 

**Materiales necesarios**

- Seeed Studio XIAO SAMD21 x1
- Ordenador x1
- Cable USB tipo C x1
tip
Algunos cables USB solo pueden suministrar energÃ­a y no pueden transferir datos. Si no tienes un cable USB o no sabes si tu cable USB puede transmitir datos, puedes consultar [seeed USB type C support USB 3.1](https://www.seeedstudio.com/USB-Type-C-to-A-Cable-1Meter-p-4085.html) .

- Paso 1. Prepara un Seeed Studio XIAO SAMD21 y un cable tipo C.
- Paso 2. Conecta el Seeed Studio XIAO SAMD21 a tu ordenador. Entonces el LED de alimentaciÃ³n amarillo deberÃ­a encenderse.

### Software

nota
Si es la primera vez que utilizas Arduino, te recomendamos encarecidamente que consultes [Getting Started with Arduino](https://wiki.seeedstudio.com/es/Getting_Started_with_Arduino)

- **Paso 1. Necesitas instalar un software de Arduino.**
[**Download Arduino IDE**](https://www.arduino.cc/en/software)
**Inicia la aplicaciÃ³n de Arduino**

Haz doble clic en la aplicaciÃ³n de Arduino (arduino.exe) que has descargado previamente.

nota
Si el software de Arduino se carga en un idioma diferente, puedes cambiarlo en el cuadro de diÃ¡logo de preferencias. Consulta la pÃ¡gina [Arduino Software (IDE)](https://www.arduino.cc/en/Guide/Environment#languages) para mÃ¡s detalles.

- **Paso 2. Abre el ejemplo Blink**
Abre el sketch de ejemplo de parpadeo del LED: **File > Examples >01.Basics > Blink** .

![pir](https://files.seeedstudio.com/wiki/Seeeduino_GPRS/img/select_blink.png)

- **Paso 3. AÃ±ade Seeeduino a tu Arduino IDE**
Haz clic en **File > Preference** , y rellena Additional Boards Manager URLs con la siguiente URL:

```url
https://files.seeedstudio.com/arduino/package_seeeduino_boards_index.json
```

![pir](https://files.seeedstudio.com/wiki/Wio-Terminal/img/Boardurl.png)

Haz clic en **Tools-> Board-> Boards Manager...** , escribe la palabra clave " **Seeed Studio XIAO SAMD21** " en el cuadro de bÃºsqueda. AparecerÃ¡ **Seeed SAMD Boards** . InstÃ¡lalo.

![pir](https://files.seeedstudio.com/wiki/Seeeduino-XIAO/img/XIAO-board.png)

#### XIAO SAMD21 Blink

- **Paso 4. Selecciona tu placa y puerto**
DespuÃ©s de instalar la placa, haz clic en **Tools-> Board** , busca **Seeed Studio XIAO** y selecciÃ³nala. Ahora ya has configurado la placa Seeed Studio XIAO SAMD21 para Arduino IDE.

![pir](https://files.seeedstudio.com/wiki/Seeeduino_GPRS/img/1.jpg)

Selecciona el dispositivo serie de la placa Arduino en el menÃº Tools | Serial Port. Probablemente serÃ¡ COM3 o superior ( **COM1** y **COM2** suelen estar reservados para puertos serie de hardware). Para averiguarlo, puedes desconectar tu placa Arduino y volver a abrir el menÃº; la entrada que desaparezca deberÃ­a ser la placa Arduino. Vuelve a conectar la placa y selecciona ese puerto serie.

![pir](https://files.seeedstudio.com/wiki/Seeeduino_GPRS/img/2.jpg)

- **Paso 5. Sube el programa**
Ahora, simplemente haz clic en el botÃ³n **Upload** en el entorno. Espera unos segundos y, si la carga se realiza correctamente, aparecerÃ¡ el mensaje "Done uploading." en la barra de estado.

![pir](https://files.seeedstudio.com/wiki/Seeeduino_GPRS/img/upload_image.png)

Unos segundos despuÃ©s de que finalice la carga, deberÃ­as ver que el LED del pin 13 (L) de la placa comienza a parpadear (en naranja). Si es asÃ­, Â¡enhorabuena! Has puesto Arduino en funcionamiento. Si tienes problemas, consulta las sugerencias de resoluciÃ³n de problemas.

nota
The maximum flash size is 8 KB. For more information, refer to the ATSAMD21G18A-MU datasheet in the resources section.

#### XIAO SAMD21 Plus Blink

En el XIAO SAMD21 Plus, el pin L (LED) se ha eliminado. Se ha sustituido por el RGB_LED, que se controla mediante el pin PA27.

â€‘ Cambia la placa de destino a XIAO M0 Plus.

![pir](https://files.seeedstudio.com/wiki/Seeeduino-XIAO/img/gst_1.png)

- Instala la librerÃ­a Adafruit_NeoPixel y actualÃ­zala a la Ãºltima versiÃ³n.
![pir](https://files.seeedstudio.com/wiki/Seeeduino-XIAO/img/gst_2.png)

â€‘ Sustituye el cÃ³digo por el fragmento siguiente. El pin de datos de RGB_LED es PA27 (PIN_NEOPIXEL). El pin de control de alimentaciÃ³n es D11 â€” por favor aÃ±ade '#define NEOPIXEL_POWER 11' a tu sketch.

precauciÃ³n
Los LED RGB pueden causar fatiga ocular o lesiones si se utilizan con un brillo excesivo; se recomienda una protecciÃ³n ocular adecuada.

```cpp
#include <Adafruit_NeoPixel.h>
#define NEOPIXEL_POWER 11

#define NUMPIXELS 1

Adafruit_NeoPixel pixels(NUMPIXELS, PIN_NEOPIXEL, NEO_GRB + NEO_KHZ800);

void setup() {
  pixels.begin();

  pinMode(NEOPIXEL_POWER, OUTPUT);
  digitalWrite(NEOPIXEL_POWER, HIGH);

// Set overall brightness (0~255)
// Recommended eye-friendly range: 10~50
  pixels.setBrightness(50);
}

void loop() {

  pixels.clear();
  pixels.setPixelColor(0, pixels.Color(15, 25, 205));
  pixels.show();
  delay(400);

  pixels.clear();
  pixels.setPixelColor(0, pixels.Color(103, 25, 205));
  pixels.show();
  delay(400);

  pixels.clear();
  pixels.setPixelColor(0, pixels.Color(233, 242, 205));
  pixels.show();
  delay(400);

  pixels.clear();
  pixels.setPixelColor(0, pixels.Color(233, 23, 23));
  pixels.show();
  delay(400);

  pixels.clear();
  pixels.setPixelColor(0, pixels.Color(12, 66, 101));
  pixels.show();
  delay(400);

  pixels.clear();
  pixels.show();
  delay(500);
}
```

â€‘ Haz clic en Upload para flashear el programa. Una vez completado, el LED RGB se encenderÃ¡.

![pir](https://files.seeedstudio.com/wiki/Seeeduino-XIAO/img/gst_3.gif)

nota
The maximum flash size is 8 KB. For more information, refer to the ATSAMD21G18A-MU datasheet in the resources section.

## MultiplexaciÃ³n de pines

No necesitamos configurar los pines nosotros mismos, despuÃ©s de usar los pines, puedes llamar directamente a una funciÃ³n.

### Entrada y salida digital

- Usa el pin 6 como pin digital:

```c
const int buttonPin = 6;     // the number of the pushbutton pin
const int ledPin =  13;      // the number of the LED pin

int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn LED on:
    digitalWrite(ledPin, HIGH);
  } else {
    // turn LED off:
    digitalWrite(ledPin, LOW);
  }
}
```

### AnalogRead

- Usa el pin 6 como pin analÃ³gico:

```c
void setup() {
  // declare the ledPin as an OUTPUT:
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // read the value from the sensor:
  sensorValue = analogRead(sensorPin);
  // turn the ledPin on
  digitalWrite(ledPin, HIGH);
  // stop the program for <sensorValue> milliseconds:
  delay(sensorValue);
  // turn the ledPin off:
  digitalWrite(ledPin, LOW);
  // stop the program for for <sensorValue> milliseconds:
  delay(sensorValue);
}
```

### Serial

- Usa el pin 6 como pin TX de UART (el pin RX de UART es el pin 7):

```c
void setup() {
    Serial1.begin(115200);
    while (!Serial);
}

void loop() {
    Serial1.println("Hello,World");
    delay(1000);
}
```

### I2C

- Usa el pin 5 como pin SCL de IIC (el pin SDA de IIC es el pin 4):

```c
// Wire Master Writer
// by Nicholas Zambetti <http://www.zambetti.com>

// Demonstrates use of the Wire library
// Writes data to an I2C/TWI slave device
// Refer to the "Wire Slave Receiver" example for use with this

// Created 29 March 2006

// This example code is in the public domain.

#include <Wire.h>

void setup()
{
  Wire.begin(); // join i2c bus (address optional for master)
}

byte x = 0;

void loop()
{
  Wire.beginTransmission(4); // transmit to device #4
  Wire.write("x is ");        // sends five bytes
  Wire.write(x);              // sends one byte  
  Wire.endTransmission();    // stop transmitting
  x++;
  delay(500);
}
```

### SPI

- Usa el pin 8 como pin SCK de SPI (el pin MISO de SPI es el pin 9, el pin MOSI de SPI es el pin 10):

```c
#include <SPI.h>
const int CS = 7;
void setup (void) {
   digitalWrite(CS, HIGH); // disable Slave Select
   SPI.begin ();
   SPI.setClockDivider(SPI_CLOCK_DIV8);//divide the clock by 8
}

void loop (void) {
   char c;
   digitalWrite(CS, LOW); // enable Slave Select
   // send test string
   for (const char * p = "Hello, world!\r" ; c = *p; p++) {
      SPI.transfer (c);
   }
   digitalWrite(CS, HIGH); // disable Slave Select
   delay(2000);
}
```

### QTouch

Para saber cÃ³mo usar QTouch, proporcionamos un proyecto de ejemplo: [How to Make a Fruit Piano on Seeed Studio XIAO SAMD21 's Q-Touch Function](https://www.seeedstudio.com/blog/2020/07/20/how-to-make-a-fruit-piano-on-seeeduino-xiaos-q-touch-function-m/) .

### Entrada y salida analÃ³gica

Aunque todavÃ­a tiene "salidas analÃ³gicas" basadas en PWM, el SAMD21 tambiÃ©n incorpora una salida analÃ³gica real en forma de un convertidor digitalâ€‘analÃ³gico (DAC). Este mÃ³dulo puede producir una tensiÃ³n analÃ³gica entre 0 y 3,3 V. Se puede utilizar para producir audio con un sonido mÃ¡s natural, o como una especie de "potenciÃ³metro digital" para controlar dispositivos analÃ³gicos.

El DAC solo estÃ¡ disponible en el pin Arduino A0 y se controla usando analogWrite(A0, `<value>` ). El DAC se puede configurar hasta una resoluciÃ³n de 10 bits (asegÃºrate de llamar a [**analogWriteResolution(10)**](https://www.arduino.cc/reference/en/language/functions/zero-due-mkr-family/analogwriteresolution/) en tu `setup` ), lo que significa que los valores entre 0 y 1023 ajustarÃ¡n la tensiÃ³n a un valor entre 0 y 3,3 V.

AdemÃ¡s del DAC, los canales ADC del SAMD21 tambiÃ©n se diferencian del ATmega328: estÃ¡n equipados con una resoluciÃ³n de hasta 12 bits. Esto significa que los valores de entrada analÃ³gica pueden ir de 0 a 4095, representando una tensiÃ³n entre 0 y 3,3 V. Para usar los ADC en modo de 12 bits, asegÃºrate de llamar a [**analogReadResolution(12)**](https://www.arduino.cc/reference/en/language/functions/zero-due-mkr-family/analogreadresolution/) en tu `setup` .

**Trazado serie del DAC**

AquÃ­ hay un ejemplo que demuestra tanto el DAC como el ADC. Para montar el experimento, conecta A0 a A1: aplicaremos una tensiÃ³n analÃ³gica en A0 y luego la leeremos con A1. Es el circuito mÃ¡s sencillo que hemos puesto nunca en un tutorial:

![](https://files.seeedstudio.com/wiki/Seeeduino-XIAO/img/AO_A1.jpg)
nota
El Seeed Studio XIAO SAMD21 utiliza la [**placa de expansiÃ³n Seeed Studio XIAO SAMD21**](https://www.seeedstudio.com/Seeeduino-XIAO-Expansion-board-p-4746.html)

Este sketch produce una onda sinusoidal en la salida A0, con valores que van de 0 a 3,3 V. Luego usa A1 para leer esa salida con su ADC y convertirla en una tensiÃ³n entre 0 y 3,3 V.

Por supuesto, puedes abrir el monitor serie para ver el flujo de valores de tensiÃ³n. Pero si la onda sinusoidal es difÃ­cil de visualizar en forma de texto, prueba el nuevo Serial Plotter de Arduino, yendo a Tools > Serial Plotter.

![](https://files.seeedstudio.com/wiki/Seeeduino-XIAO/img/Serial%20poltting.png)
![](https://files.seeedstudio.com/wiki/Seeeduino-XIAO/img/XIAO_DAC_wave.gif)
Gracias a [Aleksei Tertychnyi](https://github.com/WeSpeakEnglish) por enviar el cÃ³digo; todas las funcionalidades relacionadas fueron desarrolladas y aportadas por Ã©l.

```cpp
#define DAC_PIN A0 // Make code a bit more legible
float x = 0; // Value to take the sin of
float increment = 0.02;  // Value to increment x by each time
// Frequency of sine wave is about 1.37 Hz

void setup() 
{
  analogWriteResolution(10); // Set analog out resolution to max, 10-bits
  analogReadResolution(12); // Set analog input resolution to max, 12-bits

  Serial.begin(9600);
}

void loop() 
{
  // Generate a voltage value between 0 and 1023. 
  // Let's scale a sin wave between those values:
  // Offset by 511.5, then multiply sin by 511.5.
  int dacVoltage = (int)(511.5 + 511.5 * sin(x));
  x += increment; // Increase value of x

  // Generate a voltage between 0 and 3.3V.
  // 0= 0V, 1023=3.3V, 512=1.65V, etc.
  analogWrite(DAC_PIN, dacVoltage);

  // Now read A1 (connected to A0), and convert that
  // 12-bit ADC value to a voltage between 0 and 3.3.
  float voltage = analogRead(A1) * 3.3 / 4096.0;
  Serial.println(voltage); // Print the voltage.
  delay(1); // Delay 1ms
}
```

**Resultado**

![pir](https://files.seeedstudio.com/wiki/Seeeduino-XIAO/img/THonny_DAC.jpg)

## Uso de la baterÃ­a

nota
Solo el XIAO SAMD21 Plus incorpora un conector de baterÃ­a BAT en su parte posterior, por favor tenlo en cuenta.

El XIAO SAMD21 Plus es capaz de usar una baterÃ­a de litio de 3,7 V como entrada de alimentaciÃ³n. Puedes consultar el siguiente diagrama para ver el mÃ©todo de cableado.

![](https://files.seeedstudio.com/wiki/Seeeduino-XIAO/img/battery.png)

precauciÃ³n
Ten cuidado de no cortocircuitar los terminales positivo y negativo y quemar la baterÃ­a y el equipo al soldar. Si la baterÃ­a tiene carga, nunca la sueldes a la placa, ya que esto puede quemar la placa de circuito. Un cortocircuito mientras el circuito estÃ¡ alimentado supone un riesgo significativo; se recomienda usar un adaptador.

### Ejemplo de lectura de tensiÃ³n de la baterÃ­a

SegÃºn el esquema, el **SGM40567-4.2XG/TR** proporciona carga para una baterÃ­a de litio de una sola celda con una corriente de carga de aproximadamente **200 mA** . El **Charge_LED** parpadea durante la carga.

La mediciÃ³n de la tensiÃ³n de la baterÃ­a estÃ¡ controlada por el interruptor de carga **TPS22916CNYFPR** a travÃ©s de **PB2/VBAT_EN** , lo que reduce el consumo de energÃ­a en espera. La tensiÃ³n de la baterÃ­a se divide por dos y se mide a travÃ©s del pin ADC **PB3/AIN11_VBAT** .

![](https://files.seeedstudio.com/wiki/Seeeduino-XIAO/img/battery_read.png)

La tensiÃ³n de la baterÃ­a se mide utilizando un circuito divisor de resistencias. La tensiÃ³n leÃ­da por el ADC es la mitad de la tensiÃ³n real de la baterÃ­a, por lo que el software debe multiplicar por 2 la mediciÃ³n del ADC para obtener la tensiÃ³n real de la baterÃ­a.

En el nÃºcleo de Arduino, PB02 y PB03 se asignan a los nÃºmeros de pin 31 y 32, respectivamente. DefÃ­nelos de la siguiente manera:

```cpp
// VBAT_EN on PB02
#define PIN_VBAT_EN  (31u)

// AIN11_VBAT on PB03
#define PIN_VBAT_ADC (32u)
```

Ejemplo de lectura de baterÃ­a
```c
constexpr float ADC_VREF = 3.3f;
constexpr float ADC_MAX = 4095.0f;
constexpr float DIVIDER_RATIO = 2.0f;  // R5 = R6 = 10 kÎ©

float readBatteryVoltage() {
  digitalWrite(PIN_VBAT_EN, HIGH);
  delay(10);

  analogRead(PIN_VBAT_ADC);  // Discard a stale reading

  uint32_t sum = 0;
  constexpr int samples = 16;

  for (int i = 0; i < samples; i++) {
    sum += analogRead(PIN_VBAT_ADC);
    delay(2);
  }

  digitalWrite(PIN_VBAT_EN, LOW);

  float adcRaw = sum / static_cast<float>(samples);
  float adcVoltage = adcRaw * ADC_VREF / ADC_MAX;

  return adcVoltage * DIVIDER_RATIO;
}

void setup() {
  Serial.begin(115200);

  pinMode(PIN_VBAT_EN, OUTPUT);
  digitalWrite(PIN_VBAT_EN, LOW);

  analogReadResolution(12);  // SAMD21 ADC: 0â€“4095
}

void loop() {
  float batteryVoltage = readBatteryVoltage();

  Serial.print("Battery: ");
  Serial.print(batteryVoltage, 3);
  Serial.println(" V");

  delay(1000);
}
```

nota
Para aplicaciones de bajo consumo, desactiva **BAT_EN** despuÃ©s de completar la mediciÃ³n de la tensiÃ³n de la baterÃ­a para reducir el consumo de potencia en reposo causado por las resistencias del divisor de tensiÃ³n.

- El **Charge_LED** parpadea mientras la baterÃ­a se estÃ¡ cargando.
![](https://files.seeedstudio.com/wiki/XIAO-RP2040/res/rp2040_plus_detection.gif)

- Resultado de la mediciÃ³n de la tensiÃ³n de la baterÃ­a: la tensiÃ³n medida de una baterÃ­a de iones de litio puede diferir del valor nominal impreso en la baterÃ­a. Consulta siempre el valor realmente medido.
![](https://files.seeedstudio.com/wiki/Seeeduino-XIAO/img/battery_read_1.png)

## La aplicaciÃ³n de ejemplo

- [CÃ³mo usar Seeed Studio XIAO SAMD21 para iniciar sesiÃ³n en tu Raspberry PI](https://wiki.seeedstudio.com/es/How-to-use-Seeeduino-XIAO-to-log-in-to-your-Raspberry-PI)
- [Interfaz de comunicaciÃ³n SPI](https://wiki.seeedstudio.com/es/XIAO-SPI-Communication-Interface)
- [CÃ³mo revivir un XIAO muerto usando Raspberry Pi](https://forum.seeedstudio.com/t/how-to-unbrick-a-dead-xiao-using-raspberry-pi-guide-openocd/253990) . Gracias a John_Doe por compartirlo.

## Recursos

### XIAO SAMD21

**DiseÃ±o de hardware**

- **ðŸ“„[Hoja de datos]**[Atmel SAMD21G18 Datasheet](https://files.seeedstudio.com/wiki/Seeeduino-XIAO/res/ATSAMD21G18A-MU-Datasheet.pdf)
- **ðŸ“„[EsquemÃ¡tico]**[EsquemÃ¡tico de XIAO SAMD21](https://files.seeedstudio.com/wiki/Seeeduino-XIAO/res/Seeeduino-XIAO-v1.0-SCH-191112.pdf)
- **ðŸ—ƒï¸[Archivos de diseÃ±o de PCB]**
- [Proyecto KiCad de XIAO SAMD21](https://files.seeedstudio.com/wiki/Seeeduino-XIAO/res/XIAO_SAMD21_v2.1_SCH&PCB_20260304.zip)
- [Proyecto Eagle de XIAO SAMD21](https://files.seeedstudio.com/wiki/Seeeduino-XIAO/res/Seeeduino-XIAO-v1.0.zip)
- **ðŸ—ƒï¸[LibrerÃ­as de diseÃ±o de PCB]**
- [Huellas de la Serie XIAO](https://files.seeedstudio.com/wiki/XIAO-KiCad-Library/New_XIAO_Series_Footprints.zip)
- [SÃ­mbolos SCH de la Serie XIAO](https://files.seeedstudio.com/wiki/XIAO-KiCad-Library/XIAO_Series_SCH_Symbols.zip)
- **ðŸ“„[Hoja de distribuciÃ³n de pines]**[Hoja de distribuciÃ³n de pines de XIAO SAMD21](https://files.seeedstudio.com/wiki/Seeeduino-XIAO/res/XIAO-SAMD21-pinout_sheet.xlsx)
**DiseÃ±o mecÃ¡nico**

- **ðŸ“„[Dimensiones 2D]**[Dimensiones de XIAO en DXF](https://files.seeedstudio.com/wiki/Seeeduino-XIAO/res/102010328_Seeeduino_XIAO_Dimension.rar)
- **ðŸ“„[Modelo 3D]**[Modelo 3D de XIAO SAMD21](https://files.seeedstudio.com/wiki/Seeeduino-XIAO/res/seeeduino-xiao-samd21-3d-model.zip)
**Software y herramientas**

- **ðŸ“„[Firmware de fÃ¡brica]**[XIAO SAMD21 Factory Firmware](https://files.seeedstudio.com/wiki/Seeeduino-XIAO/res/102010328_Seeeduino_XIAO_final_firmware.zip)

### XIAO SAMD21 Plus

**DiseÃ±o de hardware**

- **ðŸ“„[Hoja de datos]**[Atmel SAMD21G18 Datasheet](https://files.seeedstudio.com/wiki/Seeeduino-XIAO/res/ATSAMD21G18A-MU-Datasheet.pdf)
- **ðŸ“„[EsquemÃ¡tico]**[XIAO SAMD21 Plus Schematic](https://files.seeedstudio.com/wiki/Seeeduino-XIAO/res/202004620_XIAO-SAMD21Plus_260422.pdf)
- **ðŸ—ƒï¸[Archivos de diseÃ±o de PCB]**
- [Proyecto KiCad de XIAO SAMD21 Plus](https://files.seeedstudio.com/wiki/Seeeduino-XIAO/res/202004620_XIAO-SAMD21-Plus_V1.0_SCH&PCB_20260422.zip)
- [Proyecto Eagle de XIAO SAMD21 Plus](https://files.seeedstudio.com/wiki/Seeeduino-XIAO/res/Seeeduino-XIAO-v1.0.zip)
- **ðŸ—ƒï¸[LibrerÃ­as de diseÃ±o de PCB]**
- [Huellas de la Serie XIAO](https://files.seeedstudio.com/wiki/XIAO-KiCad-Library/New_XIAO_Series_Footprints.zip)
- [SÃ­mbolos SCH de la Serie XIAO](https://files.seeedstudio.com/wiki/XIAO-KiCad-Library/XIAO_Series_SCH_Symbols.zip)
- **ðŸ“„[Hoja de distribuciÃ³n de pines]**[XIAO SAMD21 Plus Pinout Sheet](https://files.seeedstudio.com/wiki/Seeeduino-XIAO/res/XIAO-SAMD21-PLUS-pinout_sheet.xlsx)
**DiseÃ±o mecÃ¡nico**

- **ðŸ“„[Dimensiones 2D]**[Dimensiones de XIAO en DXF](https://files.seeedstudio.com/wiki/Seeeduino-XIAO/res/102010328_Seeeduino_XIAO_Dimension.rar)
- **ðŸ“„[Modelo 3D]**[Modelo 3D de XIAO SAMD21 Plus](https://files.seeedstudio.com/wiki/Seeeduino-XIAO/res/seeeduino-xiao-samd21-3d-model.zip)

## Recursos del curso

![](https://mjrovai.github.io/XIAO_Big_Power_Small_Board-ebook/cover.jpg)

- **[Ebook]**[XIAO: Big Power, Small Board Mastering Arduino and TinyML](https://mjrovai.github.io/XIAO_Big_Power_Small_Board-ebook/)

## Soporte tÃ©cnico y debate sobre el producto

Gracias por elegir nuestros productos. Estamos aquÃ­ para ofrecerte diferentes tipos de soporte y garantizar que tu experiencia con nuestros productos sea lo mÃ¡s fluida posible. Ofrecemos varios canales de comunicaciÃ³n para adaptarnos a diferentes preferencias y necesidades.