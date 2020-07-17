#include <Servo.h>
#include<DHT.h>
#define DHTPIN 4
#define DHTTYPE DHT22
DHT dht(DHTPIN, DHTTYPE);
Servo myservo;
int pwm = 5;
float temp;
int converted;

void setup() {
  Serial.begin(9600);
  dht.begin();
  myservo.attach(pwm);
}

void loop() {
  temp = dht.readTemperature(true);
  Serial.println(temp);
  converted = map(temp, 50, 90, 0, 180);
  myservo.write(converted);
  delay(2000);
}
