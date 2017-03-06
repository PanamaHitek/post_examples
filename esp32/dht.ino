#include <DHT.h>
#define DHTPIN 18 //Seleccionamos el pin en el que se conectará el sensor
#define DHTTYPE DHT22 //Se selecciona el DHT22(hay otros DHT)
DHT dht(DHTPIN, DHTTYPE); //Se inicia una variable que será usada por Arduino

void setup() {
  Serial.begin(115200); //Se inicia la comunicación serial
  dht.begin(); //Se inicia el sensor
}

void loop() {
  float h = dht.readHumidity(); //Se lee la humedad
  float t = dht.readTemperature(); //Se lee la temperatura
  //Se imprimen las variables
  Serial.println("Humedad: ");
  Serial.println(h);
  Serial.println("Temperatura: ");
  Serial.println(t);
  delay(2000); //Se espera 2 segundos para seguir leyendo //datos
}
