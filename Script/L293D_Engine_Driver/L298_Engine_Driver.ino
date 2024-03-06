#define ENABLE 5
#define DIRB 4 //direction a
#define DIRA 3 //direction b
int i;
void setup() {
  pinMode (ENABLE, OUTPUT);
  pinMode (DIRB, OUTPUT);
  pinMode (DIRA, OUTPUT);
}

void loop() {
  for (i=255;i>100;i--) {
  digitalWrite(DIRA,HIGH); //one way
  digitalWrite(DIRB,LOW);
  analogWrite(ENABLE,i); //enable on
  delay(200);
  }
  for (i=100;i<255;i++) {
  digitalWrite(DIRA,HIGH); //one way
  digitalWrite(DIRB,LOW);
  analogWrite(ENABLE,i); //enable on
  delay(200);
  }
}
