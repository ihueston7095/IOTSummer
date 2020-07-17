#include <Servo.h>

Servo myservo;
int pwm = 4;
int ldr_pin = A0;
int LDRval = 0;
int converted = 0;
void setup() {
  myservo.attach(pwm);
  Serial.begin(9600);
}

void loop() {
  LDRval = analogRead(ldr_pin);
  Serial.println(LDRval);
  converted = map(LDRval, 0, 1024, 0, 180);
  myservo.write(converted);
  delay(50);
}
