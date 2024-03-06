#include <LiquidCrystal.h> //lcd kütüphanesi eklendi

LiquidCrystal lcd{2,3,8,9,10,11}; //RS,E,D4,D5,D6,D7 pinledin verdik

int LButton = 4;
int RButton = 5;

void setup() {
  pinMode(LButton, INPUT_PULLUP);
  pinMode(RButton, INPUT_PULLUP);

  lcd.begin(16,2); //lcd isimli ekranımızı başlattık
  lcd.clear(); //Ekranı başlangıçda temizliyoruz.
}

void loop() {
  lcd.home(); //imleci 0, 0 noktasına getirir

  int right = digitalRead(RButton);
  int left = digitalRead(LButton);

  if(left == 0){
    lcd.setCursor(0,2);
    lcd.print("Pressed");
    lcd.setCursor(8,1);
    lcd.print("Left");
    delay(3000);
    lcd.clear();
  }
  else if (right == 0){
    lcd.setCursor(0,2);
    lcd.print("Pressed");
    lcd.setCursor(8,1);
    lcd.print("Right");
    delay(3000);
    lcd.clear();
  }
  else{
    lcd.print("Press a button");
  }
}
