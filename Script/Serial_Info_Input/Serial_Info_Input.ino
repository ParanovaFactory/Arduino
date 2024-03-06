//Klavyeden girilen karakteri yarım saniye sonra ekrana yazdıran program
void setup() {
  Serial.begin(9600);//seri iletişimi saniyede 9600 bit hızında başlat
}

void loop() {
  if(Serial.available())//Seri portta bilgi varmı yokmu kontrol eder
  {
    char incomingChar = Serial.read();//Eğer seri prtta bilgi varsa bu bilgiyi değişkene ata
    delay(500);
    Serial.println("Received: " + String(incomingChar));//Değikendeki veriyi seri monitöre yazdır
  }
}