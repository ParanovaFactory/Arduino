void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); //Seri haberleşmeyi başlatma ve haberleşme hızını tanımlama

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("Hello World!"); //Mesaj
  delay(2000); //Delat time
}
