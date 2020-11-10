#include <SoftwareSerial.h>

void setup() {

}

void loop() {


  int No_random = random(0,100);

  if (No_random >= 10){
    //Enciende los LED Verdes y el buzzer por 1.5 segundos
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    delay(1500);

    //Apaga el LED Verde y el Buzzer
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    delay(100);
    
    }
   


}
