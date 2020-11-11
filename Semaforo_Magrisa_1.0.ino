int Led_R = 11;
int Led_V = 10;
int No_random = 0;

//random(0,100);
// Establecer los pines a utilizar
int v_10 = 2,
    v_30 = 3, 
    v_50 = 4, 
    v_70 = 5,
    v_90 = 6;

//Establecer los valores a leer
int value_10 = 0, 
    value_30 = 0, 
    value_50 = 0, 
    value_70 = 0, 
    value_90 = 0;

void setup() {

  Serial.begin(9600);
  pinMode(v_10,INPUT);  //Valor 10%
  pinMode(v_30,INPUT);  //Valor 30%
  pinMode(v_50,INPUT);  //Valor 50%
  pinMode(v_70,INPUT);  //Valor 70%
  pinMode(v_90,INPUT);  //Valor 90%
  
  pinMode(Led_R,OUTPUT); //Led Rojo 
  pinMode(Led_V,OUTPUT); //Led verde


}

void loop() {

  No_random = random(0,100);
  
  value_10 = digitalRead(v_10);
  value_30 = digitalRead(v_30);
  value_50 = digitalRead(v_50);
  value_70 = digitalRead(v_70);
  value_90 = digitalRead(v_90);
  
  if (value_10 = HIGH){
    Serial.println("Valor 10 Seleccionado");
    if (No_random >=10){  
      led_rojo();
    }else{
      led_verde();
      }    
  }

  if (value_30 = HIGH){
    Serial.println("Valor 30 Seleccionado");
    if (No_random >=30){  
      led_rojo();
    }else{
      led_verde();
      }
  }

  if (value_50 = HIGH){
    Serial.println("Valor 50 Seleccionado");
    if (No_random >=51){  
      led_rojo();
    }else{
      led_verde();
      }
  }

  if (value_70 = HIGH){
    Serial.println("Valor 70 Seleccionado");
    if (No_random >=70){  
      led_rojo();
    }else{
      led_verde();
      }  
  }
  
  if (value_90 = HIGH){
    Serial.println("Valor 90 Seleccionado");
    if (No_random >=90){  
      led_rojo();
    }else{
      led_verde();
      }
  }  


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












  
