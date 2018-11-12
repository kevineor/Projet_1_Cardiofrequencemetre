#include "coeur.h"
#include "coeur.c"
#include "param.h"


void loop() {
  int i=50;
  z=1;
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
 delay(200);
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
  delay(i);
 
 }
 break;

 case 2:
// Une LED sur 2 
 break;

 case 3:
// Une LED sur 3
 break;

 case 4:
// Une LED sur 4
 break;

 case 5:
// Une LED sur 5
 break;

 case 6:
// Une LED sur 6
 break;

 case 7:
// Une LED sur 7
 break;

 case 8:
// Une LED sur 8
 break;

case 9:
//Une LED sur 9
break;

case 10:
//Une seule LED allumée au choix
break;

  }










}
