#include "SDHT.h" //Se importa la clase para leer el sensor dht11
SDHT dht; //Se crea un objeto de la clase SDHT
int dataPin = 3; //Se declara el pin en el que está conectado el sensor

void setup() {
  Serial.begin(9600); //Se inicia la comunicación serial
}

void loop() {
  if (dht.read(DHT11, dataPin)) { //Se verifica si se puede leer el sensor
    Serial.println("Temperatura: " + String(double(dht.celsius) * 0.1) + " ºC");  // Se imprime la temperatura
    Serial.println("Humedad relativa: " + String(double(dht.humidity) * 0.1) + " ºC"); // Se imprime la humedad
  }
  delay(2000); //Se espera dos segundos (2000 milisegundos) antes de la próxima lectura
}
