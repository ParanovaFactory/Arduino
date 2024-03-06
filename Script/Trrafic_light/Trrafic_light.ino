void setup() {
  // put your setup code here, to run once:
  pinMode(2,OUTPUT); // 2 nolu pini çıkış yap
  pinMode(3,OUTPUT); // 3 nolu pini çıkış yap
  pinMode(4,OUTPUT); // 4 nolu pini çıkış yap
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(2,1); // 2 nolu pine 1(HIGH) bilgisini yolla
  digitalWrite(3,0); // 3 nolu pine 0(LOW) bilgisini yolla
  digitalWrite(4,0); // 4 nolu pine 0(LOW) bilgisini yolla
  delay(5000);       // 5 sn bekle
  digitalWrite(2,0); // 2 nolu pine 0(LOW) bilgisini yolla
  digitalWrite(3,1); // 3 nolu pine 1(HIGH) bilgisini yolla
  digitalWrite(4,0); // 4 nolu pine 0(LOW) bilgisini yolla
  delay(1000);      //  1 sn bekle
  digitalWrite(2,0); // 2 nolu pine 0(LOW) bilgisini yolla
  digitalWrite(3,0); // 3 nolu pine 0(HIGH) bilgisini yolla
  digitalWrite(4,1); // 4 nolu pine 1(LOW) bilgisini yolla
  delay(10000);      //  6 sn bekle
  digitalWrite(2,0); // 2 nolu pine 0(LOW) bilgisini yolla
  digitalWrite(3,1); // 3 nolu pine 1(HIGH) bilgisini yolla
  digitalWrite(4,0); // 4 nolu pine 0(LOW) bilgisini yolla
  delay(3000);      // 11 sn bekle
}
