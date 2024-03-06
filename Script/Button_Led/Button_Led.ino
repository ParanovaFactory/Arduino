int button1 = 3;
int button2 = 7;

int led1 = 8;
int led2 = 9;

void setup() {
  // put your setup code here, to run once:
  pinMode(button1,INPUT);
  pinMode(button2,INPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int info1 = digitalRead(button1); //pull up 1, basılınca 0
  int info2 = digitalRead(button2); //pull down 0, basılınca 1

  digitalWrite(led1, info1);
  digitalWrite(led2, info2);
}
