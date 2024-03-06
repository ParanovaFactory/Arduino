#include <SPI.h>
#include <RFID.h>

RFID rfid(10, 9); //SS veya SDA pini ve RST pini
void setup() {
  rfid.init();  //Okuma yapmaya hazır
  pinMode(2, OUTPUT); //Kırmızı
  pinMode(3, OUTPUT); //Yeşil
}
//Yetkilendirilen kart numarası
byte card[] = {0x29, 0x61, 0x16, 0xBA, 0xE4};

void loop() {
  boolean validCard = true; // Başlangıçta yer alan geçerli kart bilgisi true

  if(rfid.isCard()){ //yeni kart okunduysa
    if(rfid.readCardSerial()){
      //Okunan kart bilgilerini tut
      Serial.print("Kart Id: ");
      Serial.print(rfid.serNum[0], HEX);
      Serial.print(rfid.serNum[1], HEX);
      Serial.print(rfid.serNum[2], HEX);
      Serial.print(rfid.serNum[3], HEX);
      Serial.println(rfid.serNum[4], HEX);
    }
    for(int i=0; i<5; i++){
      if(rfid.serNum[i] != card[i]){ // sisteme kayıtlı kart ile okunan kart karşılaştırılıyor
        validCard = false; // kart farklı ise geçerlikart değişkeni "false" yapılıyor
      }
    }
    if(validCard == true){
      digitalWrite(3, 1); // yeşil ledi yak
      delay(2000);
      digitalWrite(3, 0); // yeşil ledi södür
    }
    else{
      digitalWrite(2, 1); // kırmızı ledi yak
      delay(2000);
      digitalWrite(2, 0); // kırmızı ledi södür
    }
  }
}
