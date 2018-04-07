#include <PortsState.h>
PortsState port("04/07/2018", 10, 11, 12, 13, 14, 15);

void setup() {
Serial.begin(9600);
while(!Serial);
Serial.println("Impresion de datos almacenados");
Serial.print("Fecha: ");
Serial.println(port.getDate());
Serial.print("Valor del sensor 0: ");
Serial.println(port.getSensor0());
Serial.print("Valor del sensor 1: ");
Serial.println(port.getSensor1());
Serial.print("Valor del sensor 2: ");
Serial.println(port.getSensor2());
Serial.print("Valor del sensor 3: ");
Serial.println(port.getSensor3());
Serial.print("Valor del sensor 4: ");
Serial.println(port.getSensor4());
Serial.print("Valor del sensor 5: ");
Serial.println(port.getSensor5());
Serial.print("Promedio de los valores de los sensores: ");
Serial.println(port.getPortsAverage());
}

void loop() {

}
