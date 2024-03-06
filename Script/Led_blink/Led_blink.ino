void setup() {
  // put your setup code here, to run once:
  pinMode(5,OUTPUT); // 5 nolu pini çıkış yap
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(5,1); // 5 nolu pine 1(HIGH) bilgisini yolla
  delay(2000);       // 2 sn bekle
  digitalWrite(5,0); // 5 nolu pine 0(LOW) bilgisini yolla
  delay(2000);       // 2 sn bekle
}
