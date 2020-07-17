#include <Servo.h>

Servo myservo;
int pwm = 4;

void setup() {
  myservo.attach(pwm);
}

void loop() {
  myservo.write(90);
  delay(1000);\
  myservo.write(0);
  delay(1000);
  myservo.write(180);
  delay(1000);
}
