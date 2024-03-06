//sg90 motoru 10,60,90,160 derecelerine gitsin
#include <Servo.h>//Servo kütüphanesi ekleme
Servo sg90; //Motoru sisteme tanımlama
void setup() {
  sg90.attach(3);//motor 3 nolu pinde
}

void loop() {
  sg90.write(0); //0 derece
  delay(2000);
  sg90.write(30); //30 derece
  delay(2000);
  sg90.write(60); //60 derece
  delay(2000);
  sg90.write(90); //90 derece
  delay(2000);
  sg90.write(120); //120 derece
  delay(2000);
  sg90.write(150); //150 derece
  delay(2000);
  sg90.write(180); //180 derece
}
