int relay = 3;
int sound = 5;
void setup() {
  pinMode(relay, OUTPUT);
  pinMode(sound, INPUT);
}

void loop() {
  int data = digitalRead(sound);
  if(data == 0)
  {
    digitalWrite(relay, 0);
  }
  else
  {
    digitalWrite(relay, 1);
    delay(2000);
  }
}
