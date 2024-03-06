
void setup() {
  for(int i = 2; i <= 5; i++){
    pinMode(i, OUTPUT);
  }
  pinMode(7, INPUT_PULLUP);
}

void loop() {
  bool data = digitalRead(7);
  
  if(data == 0){
    for(int i = 0; i < 3; i++){
      for(int j = 2; j <= 5; j++){
        digitalWrite(j, 1);
        delay(75);
      }
      for(int r = 2; r <= 5; r++){
        digitalWrite(r, 0);
        delay(75);
      }
      for(int n = 5; n >= 2; n--){
        digitalWrite(n, 1);
        delay(75);
      }
      for(int m = 5; m >= 2; m--){
        digitalWrite(m, 0);
        delay(75);
      }
    }
  }
}
