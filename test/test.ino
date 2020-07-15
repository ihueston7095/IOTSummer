int LEDpin = 16;
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(LEDpin, OUTPUT);
}

void loop() {
  digitalWrite(LEDpin, HIGH);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
  digitalWrite(LEDpin, LOW);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
}
