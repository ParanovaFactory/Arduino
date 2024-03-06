#include <LiquidCrystal.h> //lcd kütüphanesi eklendi
#include <Keypad.h> //keypad kütüphanesi eklendi

const int ROW_NUM = 4; //four rows
const int COLUMN_NUM = 4; //four columns

char keys[ROW_NUM][COLUMN_NUM] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

byte pin_rows[ROW_NUM] = {0, 1, 2, 3}; //connect to the row pinouts of the keypad
byte pin_column[COLUMN_NUM] = {4, 5, 6, 7}; //connect to the column pinouts of the keypad

Keypad keypad = Keypad( makeKeymap(keys), pin_rows, pin_column, ROW_NUM, COLUMN_NUM );

LiquidCrystal lcd{12,13,8,9,10,11}; //RS,E,D4,D5,D6,D7 pinledin verdik

void setup() {
  lcd.begin(16,2); //lcd isimli ekranımızı başlattık
  lcd.clear(); //Ekranı başlangıçda temizliyoruz.
}

void loop() {
  lcd.home(); //imleci 0, 0 noktasına getirir
  char key = keypad.getKey();

  lcd.clear();
  lcd.print(key);
  delay(500);
  lcd.clear();
}
