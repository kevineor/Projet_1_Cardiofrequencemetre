#include "coeur.h"
#include "coeur.c"
#include "param.h"


void loop() {
  int i=50;
  switch(z)
  {
 case 1:
 // toutes les LED en même temps
 {
 digitalWrite(led0,HIGH);
 digitalWrite(led1,HIGH);
 digitalWrite(led2,HIGH);
 digitalWrite(led3,HIGH);
 digitalWrite(led4,HIGH);
 digitalWrite(led5,HIGH);
 digitalWrite(led6,HIGH);
 digitalWrite(led7,HIGH);
 digitalWrite(led8,HIGH);
 digitalWrite(led9,HIGH);
 delay(200); //On mettra la fréquence cardiaque
  digitalWrite(led0,LOW);
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW);
  digitalWrite(led6,LOW);
  digitalWrite(led7,LOW);
  digitalWrite(led8,LOW);
  digitalWrite(led9,LOW);
  delay(100);
 
 }
 break;

 case 2:
// Une LED sur 2 

 digitalWrite(led1,HIGH);

 digitalWrite(led3,HIGH);

 digitalWrite(led5,HIGH);

 digitalWrite(led7,HIGH);

 digitalWrite(led9,HIGH);
 
 delay(700); //On mettra la fréquence cardiaque

  digitalWrite(led1,LOW);

  digitalWrite(led3,LOW);

  digitalWrite(led5,LOW);

  digitalWrite(led7,LOW);

  digitalWrite(led9,LOW);
  delay(100);
 

    
 break;

 case 3:
// Une LED sur 3
 digitalWrite(led0,HIGH);

 digitalWrite(led3,HIGH);

 digitalWrite(led6,HIGH);

 digitalWrite(led9,HIGH);
 delay(200); //On mettra la fréquence cardiaque
  digitalWrite(led0,LOW);

  digitalWrite(led3,LOW);

  digitalWrite(led6,LOW);

  digitalWrite(led9,LOW);
  delay(100);
 
 break;

 case 4:
// Une LED sur 4
 digitalWrite(led0,HIGH);

 digitalWrite(led4,HIGH);

 digitalWrite(led8,HIGH);

 delay(200); //On mettra la fréquence cardiaque
  digitalWrite(led0,LOW);

  digitalWrite(led4,LOW);

  digitalWrite(led8,LOW);

  delay(100);
 
 break;

 case 5:
// Une LED sur 5
 digitalWrite(led0,HIGH);

 digitalWrite(led5,HIGH);

 delay(200); //On mettra la fréquence cardiaque
  digitalWrite(led0,LOW);

  digitalWrite(led5,LOW);

  delay(100);
 
 break;

case 6:
//Une seule LED allumée au choix
digitalWrite(led0,HIGH); //Essayer de remplacer "0" par une valeur utilisateur
delay(200);//On mettra la fréquence cardiaque
digitalWrite(led0,LOW);
delay(100);
break;

case 7:
//Le mode chenille
digitalWrite(led0,HIGH);
digitalWrite(led9,LOW);
 delay(200); //On mettra la fréquence cardiaque
 digitalWrite(led1,HIGH);
 digitalWrite(led0,LOW);
 delay(200);
 digitalWrite(led2,HIGH);
 digitalWrite(led1,LOW);
 delay(200);
 digitalWrite(led3,HIGH);
 digitalWrite(led2,LOW);
 delay(200);
 digitalWrite(led4,HIGH);
 digitalWrite(led3,LOW);
  delay(200);
 digitalWrite(led4,HIGH);
 digitalWrite(led3,LOW);
  delay(200);
 digitalWrite(led5,HIGH);
 digitalWrite(led4,LOW);
  delay(200);
 digitalWrite(led6,HIGH);
 digitalWrite(led5,LOW);
  delay(200);
 digitalWrite(led7,HIGH);
 digitalWrite(led6,LOW);
  delay(200);
 digitalWrite(led8,HIGH);
 digitalWrite(led7,LOW);
  delay(200);
 digitalWrite(led9,HIGH);
 digitalWrite(led8,LOW);
  delay(200);

break;
  }
}
