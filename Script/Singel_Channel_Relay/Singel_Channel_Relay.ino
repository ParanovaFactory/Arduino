//Portta 0 bilgisi varsa kırmızı renkli ledi yak 1 bilgisi varsa sarı ledi yak
//Default pull-down(normalde 0 butona basıldığında 1) 
int relay = 2; //Röleyi bir değişkene atadık
int btn1 = 3;  //Butonu bir değişkene atadık
void setup() {
  pinMode(relay, OUTPUT);//rölenin pinmodunu verdik
  pinMode(btn1, INPUT);//Butonun pinmodunu verdik
}

void loop() {
  int data = digitalRead(btn1);//Butondaki veriyi okuduk
  if(data == 0)
  {
    //Butondaki veri 0 ise yani basılmıyor ise röleye 1 yolladık yani röle konumu değişmedi
    digitalWrite(relay,1);
    delay(100);
  }
  else
  {
    //Butondaki veri 1 ise yani basılıyor ise röleye 0 yolladık yani röle konumu değiştirdi
    digitalWrite(relay,0);
    delay(100);
  }
}
