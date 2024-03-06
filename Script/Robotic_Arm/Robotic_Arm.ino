#include <Servo.h>

Servo sg90;
int angel = 90;
void setup() {
  sg90.attach(3);
  sg90.write(angel);
}

void loop() {
  int dir_x = analogRead(A0);
  int calculate = map(dir_x, 0, 1023, -90, 90);

  if(dir_x > 600){
    angel = angel + calculate;
    sg90.write(angel);
    delay(100);
  }
  else if (dir_x < 400){
    angel = angel + calculate;
    sg90.write(angel);
    delay(100);
  }
}
