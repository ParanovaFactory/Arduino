#include <LiquidCrystal.h> //lcd kütüphanesi eklendi


LiquidCrystal lcd{2,3,8,9,10,11}; //RS,E,D4,D5,D6,D7 pinledin verdik

int sensor = 4;

void setup() {
  lcd.begin(16,2); //lcd isimli ekranımızı başlattık
  lcd.clear(); //Ekranı başlangıçda temizliyoruz.

  pinMode(sensor, INPUT);
}

void loop() {
  lcd.home(); //imleci 0, 0 noktasına getirir
  int data = digitalRead(sensor);

  if(data == 1){
    lcd.print("Fire");
    delay(1000);
    lcd.clear();
  }
  else{
    lcd.print("Nothing");
    delay(1000);
    lcd.clear();
  }
}
