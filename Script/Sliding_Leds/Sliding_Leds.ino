
void setup() {
  for(int i = 2; i <= 13; i++){
    pinMode(i, OUTPUT);
  }
}

void loop() {
  for(int i = 2; i <= 13; i++){
    digitalWrite(i, 1);
    delay(75);
  }
  for(int i = 2; i <= 13; i++){
    digitalWrite(i, 0);
    delay(75);
  }
  for(int i = 13; i >= 2; i--){
    digitalWrite(i, 1);
    delay(75);
  }
  for(int i = 13; i >= 2; i--){
    digitalWrite(i, 0);
    delay(75);
  }
}
