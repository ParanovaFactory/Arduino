int b = 2;
int r = 3;
int y = 4;
int g = 5;

void setup() {
  pinMode(b, OUTPUT);
  pinMode(r, OUTPUT);
  pinMode(y, OUTPUT);
  pinMode(g, OUTPUT);
}

void loop() {
  int dir_x = analogRead(A0);
  int dir_y = analogRead(A1);

  if(dir_x < 400){
    digitalWrite(r, 1);
    digitalWrite(y, 0);
    digitalWrite(b, 0);
    digitalWrite(g, 0);
  }
  else if (dir_x > 600){
    digitalWrite(y, 1);
    digitalWrite(r, 0);
    digitalWrite(b, 0);
    digitalWrite(g, 0);
  }
  else if (dir_y < 400){
    digitalWrite(g, 1);
    digitalWrite(r, 0);
    digitalWrite(y, 0);
    digitalWrite(b, 0);
  }
  else if (dir_y > 600){
    digitalWrite(b, 1);
    digitalWrite(r, 0);
    digitalWrite(y, 0);
    digitalWrite(g, 0);
  }
  else{
    digitalWrite(r, 0);
    digitalWrite(y, 0);
    digitalWrite(b, 0);
    digitalWrite(g, 0);
  }
}
