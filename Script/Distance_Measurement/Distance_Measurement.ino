int trigger = 3;
int eco = 4;
void setup() {
  pinMode(trigger, OUTPUT);
  pinMode(eco, INPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trigger, 0); //Sensör pasif
  delayMicrosecond(5);
  digitalWrite(trigger, 1); //Sensör aktif ses dalgası üretiyor
  delayMicrosecond(10);
  digitalWrite(trigger, 0); //Sensörün yani dalgalar üretmemesi ve ölçüm yapabilmesi için pasif

  int time = pulseIn(eco, 1); //Cisme çarpan dalganın geridönmesi için geçen zaman ölçümü

  int distance = time / 29.1 / 2; //Ölçülen süreyi mesafeye dönüştürme

  Serial.print("Distance: ");
  Serial.println(distance);
  delay(1000); 
}
