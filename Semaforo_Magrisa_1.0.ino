int Led_R = 11;
int Led_V = 10;
int No_random = 0;

int push = 8;
int v_push = 0;
//random(0,100);
// Establecer los pines a utilizar
int pin_10 = 2,
    pin_30 = 3, 
    pin_50 = 4, 
    pin_70 = 5,
    pin_90 = 6;

//Establecer los valores a leer
int value_10 = 0, 
    value_30 = 0, 
    value_50 = 0, 
    value_70 = 0, 
    value_90 = 0;

void setup() {

  Serial.begin(9600);
  pinMode(pin_10,INPUT);  //Valor 10%
  pinMode(pin_30,INPUT);  //Valor 30%
  pinMode(pin_50,INPUT);  //Valor 50%
  pinMode(pin_70,INPUT);  //Valor 70%
  pinMode(pin_90,INPUT);  //Valor 90%
  
  pinMode(Led_R,OUTPUT); //Led Rojo 
  pinMode(Led_V,OUTPUT); //Led verde

  pinMode(push, INPUT_PULLUP);

}

void loop() {

  No_random = random(0,100);
  Serial.println(No_random);
  
  value_10 = digitalRead(pin_10);
  value_30 = digitalRead(pin_30);
  value_50 = digitalRead(pin_50);
  value_70 = digitalRead(pin_70);
  value_90 = digitalRead(pin_90);
  v_push = digitalRead(push);

  Serial.println(v_push);
  delay(200);
  Serial.print("Valor 10 : ");Serial.println(value_10); delay(200);
  Serial.print("Valor 30 : ");Serial.println(value_30); delay(200);
  Serial.print("Valor 50 : ");Serial.println(value_50); delay(200);
  Serial.print("Valor 70 : ");Serial.println(value_70); delay(200);
  Serial.print("Valor 90 : ");Serial.println(value_90); delay(200);
  
  
  if (v_push == 0){
    Serial.println("Button");

    if (value_10 == 1 && value_30 == 0 && value_50 == 0 && value_70 == 0 && value_90 == 0){
      if (No_random >= 10){
        led_rojo();
      }else if(No_random < 10){
        led_verde();
      }
      
    }else if(value_10 == 0 && value_30 == 1 && value_50 == 0 && value_70 == 0 && value_90 == 0){
        
    }else if(value_10 == 0 && value_30 == 0 && value_50 == 1 && value_70 == 0 && value_90 == 0){
      
    }else if(value_10 == 0 && value_30 == 0 && value_50 == 0 && value_70 == 1 && value_90 == 0){
        
    }else if(value_10 == 0 && value_30 == 0 && value_50 == 0 && value_70 == 0 && value_90 == 1){
        
    }else{
        Serial.println("No ha seleccionado probabilidad");
        }
    
    
    
    }else if(v_push == 1){
      Serial.println("NO");
      }

  

delay(3000);
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












  
