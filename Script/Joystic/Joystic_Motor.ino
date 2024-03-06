int axisx = A0;
int axisy = A1;
int sw = 2;
void setup() {
  pinMode(sw, INPUT);
  Serial.begin(9600);
}

void loop() {
  int datax = analogRead(axisx);
  int datay = analogRead(axisy);
  bool datasw = digitalRead(sw);

  Serial.print("Data of x, y and button: ");
  Serial.print(datax);
  Serial.print(" ,");
  Serial.print(datay);
  Serial.print(" ,");
  Serial.print(datasw);
  Serial.println("");
  delay(1000);
}
