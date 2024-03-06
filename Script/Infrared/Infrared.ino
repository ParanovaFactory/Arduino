#include <LiquidCrystal.h> //lcd kütüphanesi eklendi

LiquidCrystal lcd{2,3,8,9,10,11}; //RS,E,D4,D5,D6,D7 pinledin verdik

int infrared = 7;

void setup() {
  lcd.begin(16,2); //lcd isimli ekranımızı başlattık
  lcd.clear(); //Ekranı başlangıçda temizliyoruz.
}

void loop() {
  lcd.home(); //imleci 0, 0 noktasına getirir
  int data = digitalRead(infrared);

  if(data == 1){
    lcd.setCursor(0,1);
    lcd.print("Black");
    delay(3000);
    lcd.clear();
  }
  else if (data == 0){
    lcd.setCursor(0,1);
    lcd.print("White");
    delay(3000);
    lcd.clear();
  }
  else{
    lcd.print("Nothing");
  }
}
