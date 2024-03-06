#include <Servo.h> //Servo kütüphanesini sistemimize ekledik
Servo sg90; //Motorumuzu sisteme tanımladık
void setup() {
  pinMode(2,INPUT); //Touch sensor
  pinMode(4,OUTPUT); //LED
  sg90.attach(3); //Servo motor
  sg90.write(0); // Servonun başlangıç derecesi
}

void loop() {
  int touch = digitalRead(2); //Sensore dokunulup dokunulmaam durumu
  if(touch == 1)
  {
    digitalWrite(4, 1); //LED'e güç günder
    sg90.write(90); //Servo motoru çalıştır 90 dereceye getir
  }
  else
  {
    sg90.write(0); //Servo motoru çalıştır 0 dereceye getir
    digitalWrite(4, 0); //LED'e güç günderme
  }
  delay(100); //Temas olup olmadığını anlamak için küçük bir gecikme
}
