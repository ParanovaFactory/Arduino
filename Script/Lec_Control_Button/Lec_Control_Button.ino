//btn1:red btn2:blue btn1+btn2:green no btn: no led
int btn1 = 2;
int btn2 = 3;
int red = 4;
int blue = 5;
int green = 6;

void setup() {
  pinMode(btn1, INPUT);
  pinMode(btn2, INPUT);
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop() {
  int b1 = digitalRead(btn1);
  int b2 = digitalRead(btn2);
  if(b1 == 1 && b2 == 0)
  {
    digitalWrite(red, 1);
  }
  else if (b1 == 0 && b2 == 1)
  {
    digitalWrite(blue, 1);
  }
  else if (b1 == 1 && b2 == 1)
  {
    digitalWrite(red, 0);
    digitalWrite(blue, 0);
    digitalWrite(green, 1);
  }
  else
  {
    digitalWrite(red, 0);
    digitalWrite(blue, 0);
    digitalWrite(green, 0);
  }
}
