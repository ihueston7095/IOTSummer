#include <SoftwareSerial.h>
SoftwareSerial mySerialPort(4, 5); //Rx, Tx
char msgIn, msgOut;

void setup() {
  Serial.begin(9600);
  mySerialPort.begin(9600);
}

void loop() {
  //While I have data in the buffer, run this loop
  while(mySerialPort.available()) {
    msgIn = mySerialPort.read(); // read a character
    Serial.print(msgIn);
    delay(2);
  }
  while(Serial.available()) {
    msgOut = Serial.read();
    mySerialPort.write(msgOut);
    Serial.print(msgOut);
    delay(2);
  }
}
