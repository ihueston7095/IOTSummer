#include<DHT.h>
#define DHTPIN 4
#define DHTTYPE DHT22
DHT dht(DHTPIN, DHTTYPE);
int red = 5;
int blue = 2;
float temp;
int converted;

void setup() {
  Serial.begin(9600);
  dht.begin();
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
}

void loop() {
  temp = dht.readTemperature(true);
  Serial.println(temp);
  converted = map(temp, 50, 90, 0, 255);
  analogWrite(red, 255-converted);
  analogWrite(blue, converted);
  delay(2000);
}
