#include <LiquidCrystal.h>

int trig = 7;
int eco = 6;
int time;
int distance;

int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  pinMode(trig, OUTPUT);
  pinMode(eco, INPUT);
  lcd.begin(16, 2);
}

void loop() {
  digitalWrite(trig, 0);
  delay(5);
  digitalWrite(trig, 1);
  delay(10);
  digitalWrite(trig, 0);

  time = pulseIn(eco, 1, 11600);
  distance = time * 0.0345 / 2;

  delay(250);

  lcd.clear();
  lcd.setCursor(0, 0);

  lcd.print("Mesafe: ");
  lcd.setCursor(0, 1);
  lcd.print(distance);
  lcd.print("cm");
}







