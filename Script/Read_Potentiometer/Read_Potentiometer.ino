//Potasyometreden gelen veriyi oku ve seri haberleşme ekranına yazdır
void setup() {
  Serial.begin(9600); //Seri haberleşmeyi başlat
}

void loop() {
  int data = analogRead(A0); //A0 portundan gelen analog bilgiyi oku
  Serial.print("Okunan Değer: ");
  Serial.println(data); //Okunan veriyi seri monitör ekranına yazdır
  delay(3000);
}
