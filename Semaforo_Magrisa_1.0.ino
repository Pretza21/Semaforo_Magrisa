int Led_R = 11;
int Led_V = 10;

int v_10 = 2, v_30 = 3, v_50 = 4, v_70 = 5, v_90 = 6;

int value_10 = 0, value_30 = 0, value_50 = 0, value_70 = 0, value_90 = 0;

void setup() {
pinMode(2,INPUT);  //Valor 10%
pinMode(3,INPUT);  //Valor 30%
pinMode(4,INPUT);  //Valor 50%
pinMode(5,INPUT);  //Valor 70%
pinMode(6,INPUT);  //Valor 90%

pinMode(Led_R,OUTPUT); //Led Rojo 
pinMode(Led_V,OUTPUT); //Led verde


}

void loop() {
  int No_random = random(0,100);
}

void led_verde(){
  digitalWrite(Led_V,HIGH);
  
  delay(1000);
  digitalWrite(Led_V,LOW);
  }

  
void led_rojo(){
  digitalWrite(Led_R,HIGH);
  
  delay(1000);
  digitalWrite(Led_R,LOW);
  }












  
