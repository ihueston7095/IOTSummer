#include<DHT.h>

#define DHTPIN 4
#define DHTTYPE DHT22

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  float t = dht.readTemperature(true);
  float h = dht.readHumidity();
  float c = dht.convertFtoC(t);
  Serial.printf("\nTemperature: %f", t);
  Serial.printf("\nTemperature C: %f", h);
  Serial.printf("\nHumidity: %f", c);
  delay(2000);
}
