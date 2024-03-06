int enable = 5;
int dirb = 4;
int dira = 3;

void setup() {
  pinMode(enable, OUTPUT);
  pinMode(dira, OUTPUT);
}

void loop() {
  int data = analogRead(A0);
  int speed = map(data, 0, 1023, 0, 255);
  
  digitalWrite(dira, 1);
  digitalWrite(dirb, 0);
  analogWrite(enable, speed);
}
