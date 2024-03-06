// Potasyo metre üzerinden servo motortu kontrol etme
#include <Servo.h>
Servo sg90;
void setup() {
  sg90.attach(5);
  sg90.write(0);
}

void loop() {
  float data = analogRead(A0);
  int angle = map(data, 0, 1023, 0, 180);//Okunan değeri 0-180 aralığına indirger
  sg90.write(angle);
  delay(50);
}
