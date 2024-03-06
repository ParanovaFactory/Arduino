// ledim   W----1sn, A----2sn, S----3sn, D----4sn yansın...

int led=7; // ledi 7 nolu pine atadık
char bilgi;

void setup() {
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  while(Serial.available()){
    bilgi=Serial.read();
    switch(bilgi){
      case 'W':{
        digitalWrite(led,1);
          delay(1000);
        digitalWrite(led,0);
        break;
      }
      case 'A':{
        digitalWrite(led,1);
          delay(2000);
        digitalWrite(led,0);
        break;
      }
      case 'S':{
        digitalWrite(led,1);
          delay(3000);
        digitalWrite(led,0);
        break;
      }
      case 'D':{
        digitalWrite(led,1);
          delay(4000);
        digitalWrite(led,0);
        break;
      }
    }
  }
}


