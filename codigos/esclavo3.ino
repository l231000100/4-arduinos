#include <Wire.h>
void setup() {
Wire.begin(0x0A);
Wire.onRequest(enviar);
}
void loop() {
}
void enviar() {
int valor = analogRead(A0); // 0 a 1023
Wire.write(highByte(valor)); // se manda en 2 bytes
Wire.write(lowByte(valor));
}