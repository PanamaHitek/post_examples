/*
 * 
 * Jaime Rodrigo
 * PanamaHitek
 * 
 */

// Incluir libreria
#include <LED_ESP32.h>

// Instanciar nuestro primer objeto
LED_ESP32 led1(5,0);

// Variables globales
int increase = 5;
int val = 0;

void setup() {
  // Iniciar nuestro pin
  led1.setup();
}

void loop() {
  // Establecer valor
  led1.set(val);

  // Aumentar ese valor, para obtener un efecto de fading
  val = val + increase;

  // Logica para evitar que haga overflow
  if(val<=0 || val>= 255) {
    increase = -increase;
  }
  delay(50);
}
