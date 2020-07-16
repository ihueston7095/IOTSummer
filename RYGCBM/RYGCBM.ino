int red = 4;
int green = 5;
int blue = 2;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
}

void loop() {
  digitalWrite(red, LOW);
  digitalWrite(green, HIGH);
  digitalWrite(blue, HIGH);
  delay(500);
  digitalWrite(green, LOW);
  delay(500);
  digitalWrite(red, HIGH);
  delay(500);
  digitalWrite(blue, LOW);
  delay(500);
  digitalWrite(green, HIGH);
  delay(500);
  digitalWrite(red, LOW);
  delay(500);
}
