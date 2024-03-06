#include <SPI.h>  //SPI haberleşme kütüphanesini çağırıyoruz
#include <RFID.h> //Rfid kütüphanesini çağırıyoruz

RFID rfid(10, 9); //SS, SDA veya RST pinlerini değer olarak veriyoruz

void setup() {
  Serial.begin(9600); //Seri haberleşmeyi başlatıyoruz
  SPI.begin();        //SPI haberleşmeyi başlatıyoruz
  rfid.init();        //Rfid okuma işlemine hazır
}

void loop() {
  if(rfid.isCard()){  //Eğer kart algılandı ise
  Serial.print("Kart Id: ");
    if(rfid.readCardSerial()){  //Kart seri numarasını oku
      //Kart seri hex kodlarına dönüştür
      Serial.print("Kart Id: ");
      Serial.print(rfid.serNum[0], HEX);
      Serial.print(rfid.serNum[1], HEX);
      Serial.print(rfid.serNum[2], HEX);
      Serial.print(rfid.serNum[3], HEX);
      Serial.println(rfid.serNum[4], HEX);
    }
    rfid.halt(); //Kart yeniden okuma yapabilir
  }
}
