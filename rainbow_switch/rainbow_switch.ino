int red = 4;
int green = 5;
int blue = 2;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  analogWriteRange(255);
  digitalWrite(red, HIGH);
  digitalWrite(green, HIGH);
  digitalWrite(blue, HIGH);
}

void loop(){
  //red
  for(int i = 0 ; i < 256 ; i++){
    analogWrite(red, 255-i);
    delay(10);
  }
  delay(500);
  //orange
  for(int i = 0 ; i < 256 ; i++){
    analogWrite(green, 255-(i * (11/17)));
    delay(10);
  }
  delay(500);
  //yellow
  for(int i = 0 ; i < 256 ; i++){
    analogWrite(green, 90-(i*(6/17)));
    delay(10);
  }
  delay(500);
  //green
  for(int i = 0 ; i < 256 ; i++){
    analogWrite(red, i);
    delay(10);
  }
  delay(500);
  //blue
  for(int i = 0 ; i < 256 ; i++){
    analogWrite(blue, 255-i);
    delay(10);
  }
  delay(500);
  //purple
  for(int i = 0 ; i < 256 ; i++){
    analogWrite(red, 255-i);
    delay(10);
  }
  delay(500);
  //off
  for(int i = 0 ; i < 256 ; i++){
    analogWrite(red, i);
    analogWrite(blue, i);
    delay(10);
  }
  delay(500);
}
