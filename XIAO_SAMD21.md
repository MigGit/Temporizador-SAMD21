# XIAO SAMD21 con MicroBlocks

URL: https://wiki.seeedstudio.com/es/xiao_samd21_microblocks/

## MicroBlocks

MicroBlocks es un lenguaje de bloques que facilita a los principiantes (de 9 aÃ±os a adultos) programar microcontroladores. Sin embargo, a pesar de su aparente simplicidad, MicroBlocks es un lenguaje de programaciÃ³n potente con mejor rendimiento que MicroPython; la capacidad de controlar pines GPIO e interfaz con perifÃ©ricos a travÃ©s de I2C, SPI y serial; y casi 200 librerÃ­as de extensiÃ³n. De hecho, algunos diseÃ±adores de hardware prefieren MicroBlocks para prototipado rÃ¡pido y pruebas debido a su ciclo de desarrollo rÃ¡pido e interactivo.

### Pinout y CaracterÃ­sticas de Hardware del XIAO SAMD21

![](https://files.seeedstudio.com/wiki/microblocks/xiao-pinout-samd21.jpg)
Como todas las placas XIAO, esta placa tiene 11 pines GPIO, pines 0..10. Todos los pines pueden usarse para entrada analÃ³gica y salida digital y analÃ³gica. Los pines 1..10 soportan salida de modulaciÃ³n por ancho de pulso (PWM), como en otras placas Xiao.

A diferencia de otras placas, el pin 0 en esta placa es un **convertidor digital-analÃ³gico de 10 bits** (DAC). Configurar el pin 0 a un nÃºmero entre 0 y 1023 hace que el pin produzca un voltaje constante entre 0 y 3.3 voltios. (En contraste, PWM produce una serie de pulsos digitales donde el nÃºmero determina el ancho del pulso.) El pin DAC puede usarse para generar audio u otras seÃ±ales analÃ³gicas.

Esta placa tiene un LED de usuario amarillo (pin 13) y LEDs RX/TX azules (pines 11 y 12). Todos los LEDs estÃ¡n invertidos: configura el pin asociado en LOW para encender el LED.

Los LEDs RX/TX pueden ser usados por MicroBlocks, con una advertencia. MicroBlocks estÃ¡ constantemente intercambiando datos con la placa, por lo que los LEDs RX/TX parpadearÃ­an intensamente al usar el editor de MicroBlocks. Dado que ese parpadeo es molesto, los LEDs RX/TX estÃ¡n deshabilitados por defecto y solo se habilitan cuando un script configura el pin asociado. Con eso en mente, los LEDs RX/TX pueden ser Ãºtiles cuando el IDE no estÃ¡ conectado.

## Instalando el Firmware de MicroBlocks

Entrar en modo bootloader en esta placa es complicado ya que no hay botÃ³n de arranque. Usa un cable para hacer un cortocircuito en los dos contactos del pin RST a la izquierda del puerto USB dos veces, rÃ¡pidamente:

![](https://files.seeedstudio.com/wiki/Seeeduino-XIAO/img/XIAO-reset.gif)
Cuando sea exitoso, la luz LED amarilla del usuario se desvanecerÃ¡ encendiÃ©ndose y apagÃ¡ndose lentamente, y aparecerÃ¡ una unidad USB virtual llamada **Arduino** .

Descarga el [archivo de firmware](https://microblocks.fun/downloads/latest/vm/vm_xiao_samd21.uf2) , de la [carpeta de firmware](https://microblocks.fun/downloads/latest/vm) de MicroBlocks luego arrastra el archivo a la unidad USB virtual.

El firmware se instalarÃ¡ y, despuÃ©s de unos segundos, la unidad USB virtual desaparecerÃ¡. Puedes ignorar cualquier advertencia de que el disco no fue expulsado correctamente.

## Conectando la placa a MicroBlocks

Conecta la placa a tu computadora con un cable USB de datos ( **no** un cable solo de alimentaciÃ³n).

Ejecuta el [editor de MicroBlocks](https://microblocks.fun/run/microblocks.html) en un navegador Chrome o Edge. Haz clic en el botÃ³n **connect** (Ã­cono de enchufe):

![](https://files.seeedstudio.com/wiki/microblocks/connect-button.png)
Selecciona **connect (USB)** del menÃº:

![](https://files.seeedstudio.com/wiki/microblocks/connect-menu.png)
Selecciona tu placa del diÃ¡logo y haz clic en el botÃ³n **connect** :

![](https://files.seeedstudio.com/wiki/microblocks/connect-dialog-samd21.png)
Un cÃ­rculo verde y el nombre de la placa aparecerÃ¡n cuando la placa estÃ© conectada:

![](https://files.seeedstudio.com/wiki/microblocks/connected-samd21.png)

## Programando en MicroBlocks

MicroBlocks es un entorno de programaciÃ³n **en vivo** por lo que puedes probar mientras programas. Haz clic en bloques y scripts para ejecutarlos. Arrastra bloques al panel de scripting y ensÃ¡mblalos para crear scripts.

Tu cÃ³digo se almacena en memoria flash persistente y puede ejecutarse incluso cuando la placa no estÃ¡ conectada al editor de MicroBlocks. Los scripts bajo un bloque **when started** se ejecutan cuando la placa se enciende.

MicroBlocks soporta concurrencia. Hasta diez scripts pueden ejecutarse al mismo tiempo.

AdemÃ¡s de sus muchos bloques integrados, MicroBlocks tiene casi 200 librerÃ­as que soportan caracterÃ­sticas adicionales y perifÃ©ricos. Haz clic en el botÃ³n **Add Library** para agregar librerÃ­as.

## Ejemplo

Este script harÃ¡ parpadear el LED amarillo del usuario:

![](https://files.seeedstudio.com/wiki/microblocks/xiao-blink.png)
La [Referencia de Bloques](https://wiki.microblocks.fun/en/reference_manual) incluye muchos ejemplos adicionales.

## Demo del Proyecto

![](https://files.seeedstudio.com/wiki/microblocks/main.png)
Para una demostraciÃ³n de proyecto mÃ¡s completa, el maker [Luis](https://www.hackster.io/luis_a_la_m) ha construido un dispositivo LED Neo-pixel de 8x8 usando XIAO SAMD21, Grove Shield para XIAO y una Matriz LED, que puedes usar con MicroBlocks para pintar patrones de pÃ­xeles impresionantes sin escribir cÃ³digo complejo. Un tutorial paso a paso se puede encontrar en [Hackster](https://www.hackster.io/luis_a_la_m/paint-with-pixels-8f3a15) .

## Agradecimientos Especiales

Agradecimientos especiales a John en MicroBlocks por escribir el artÃ­culo.

## Recursos de MicroBlocks

- [Sitio Web](https://microblocks.fun)
- [GuÃ­a del Usuario](https://wiki.microblocks.fun/en/ide)
- [Referencia de Bloques](https://wiki.microblocks.fun/en/reference_manual)
- [Referencia de LibrerÃ­as](https://wiki.microblocks.fun/en/libraries)
- [GuÃ­as de Aprendizaje](https://learn.microblocks.fun)