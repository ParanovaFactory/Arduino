#include <Servo.h>

Servo sg90;
void setup() {
  sg90.attach(3);
}

void loop() {
  int dir_x = analogRead(A0);
  int angel = map(dir_x, 0, 1023, 0, 180);
  sg90.write(angel);
}
