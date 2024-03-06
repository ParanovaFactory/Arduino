#include <LiquidCrystal.h> //lcd kütüphanesi eklendi


LiquidCrystal lcd{2,3,8,9,10,11}; //RS,E,D4,D5,D6,D7 pinledin verdik

int lazer = 4;

void setup() {
  lcd.begin(16,2); //lcd isimli ekranımızı başlattık
  lcd.clear(); //Ekranı başlangıçda temizliyoruz.

  pinMode(lazer, OUTPUT);
}

void loop() {
  lcd.home(); //imleci 0, 0 noktasına getirir
  
  digitalWrite(lazer, 1);
  delay(3000);
  digitalWrite(lazer, 0);
  delay(3000);
}
