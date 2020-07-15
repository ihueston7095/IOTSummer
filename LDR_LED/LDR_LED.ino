int ldr_pin = A0;
int LED1 = 5;
int LED2 = 4;
int analogValue = 0;

void setup() {
  Serial.begin(9600);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
}

void loop() {
  analogValue = analogRead(ldr_pin);
  Serial.println(analogValue);
  if(analogValue < 400){
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
  }
  else{
    if(analogValue > 700){
      digitalWrite(LED1, HIGH);
      digitalWrite(LED2, HIGH);
    }
    else{
      digitalWrite(LED1, HIGH);
      digitalWrite(LED2, LOW);
    }
  }
  delay(100);
}
