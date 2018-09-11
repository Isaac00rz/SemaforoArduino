#define led_1 4
#define led_2 5
#define led_3 7
#define led_4 12
#define led_5 13
#define boton 9
#define po A0
int i = 0;
int valor = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(led_1,OUTPUT);
  pinMode(led_2,OUTPUT);
  pinMode(led_3,OUTPUT);
  pinMode(boton,INPUT);
  digitalWrite(boton,LOW);
  Serial.begin(9600);
}

void loop() {
  valor = analogRead(po)*10;
  Serial.print(valor);
  while(digitalRead(boton)==LOW){
    digitalWrite(led_5,HIGH);
    digitalWrite(led_1,HIGH);
    for(i==0;i<10;i++){
      if(digitalRead(boton)==HIGH){
        salto();
        break;
      }else{
        delay(valor);
      }
    }
    for(int i=0;i<3;i++){
      if(digitalRead(boton)==HIGH){
        digitalWrite(led_1,LOW);
        salto();
        break;
      }else{
        digitalWrite(led_1,HIGH);
        delay(2000);
        digitalWrite(led_1,LOW);
        delay(valor);
      }
     }
      digitalWrite(led_2,HIGH);
      delay(valor);
      digitalWrite(led_2,LOW);
        
      digitalWrite(led_3,HIGH);
      digitalWrite(led_4,HIGH);
      digitalWrite(led_5,LOW);
      delay(valor);
      for(int i=0;i<3;i++){
        digitalWrite(led_4,HIGH);
        delay(1000);
        digitalWrite(led_4,LOW);
        delay(valor);
      }
      digitalWrite(led_3,LOW);
  }
}
  void salto(){
    for(int i=0;i<3;i++){
        digitalWrite(led_1,HIGH);
        delay(500);
        digitalWrite(led_1,LOW);
        delay(500);
      }
      digitalWrite(led_2,HIGH);
      delay(valor);
      digitalWrite(led_2,LOW);
      digitalWrite(led_3,HIGH);
      digitalWrite(led_4,HIGH);
      digitalWrite(led_5,LOW);
      delay(valor);
      for(int i=0;i<3;i++){
        digitalWrite(led_4,HIGH);
        delay(1000);
        digitalWrite(led_4,LOW);
        delay(valor);
      }
      digitalWrite(led_3,LOW);
      loop();
  }

  //fin
