int led = 2;
int buzzer = 3;
int motion = 4;
void setup() {
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(motion, INPUT);
  digitalWrite(motion, 0);
}

void loop() {
  int data = digitalRead(motion);

  if(data == 1){
    digitalWrite(buzzer, 500);
    digitalWrite(led,1);
    delay(1000);
  }
  else{
    digitalWrite(buzzer, 0);
    digitalWrite(led,0);
  }
}
