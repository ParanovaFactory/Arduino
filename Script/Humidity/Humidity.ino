#include <LiquidCrystal.h> //lcd kütüphanesi eklendi
#include <DHT11.h> // ısı ölçer sensorün kütüphanesini ekledik

DHT11 dht11(4); // sensör pinini atadık

LiquidCrystal lcd{2,3,8,9,10,11}; //RS,E,D4,D5,D6,D7 pinledin verdik

void setup() {
  lcd.begin(16,2); //lcd isimli ekranımızı başlattık
  lcd.clear(); //Ekranı başlangıçda temizliyoruz.
}

void loop() {
  lcd.home(); //imleci 0, 0 noktasına getirir
  float humidity = dht11.readHumidity();
  float temperature = dht11.readTemperature();


  lcd.setCursor(0,0);
  lcd.print("Temp: ");
  lcd.setCursor(7,0);
  lcd.print(temperature);
  lcd.print(" °C");

  lcd.setCursor(0,1);
  lcd.print("Humd: ");
  lcd.setCursor(7,1);
  lcd.print(humidity);
  lcd.print(" %");

  delay(1000);
}
