#include "coeur.h"
#include "coeur.c"
#include "param.h"
void setup() {
  // put your setup code here, to run once:
pinMode(led0, OUTPUT);
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
pinMode(led4, OUTPUT);
pinMode(led5, OUTPUT);
pinMode(led6, OUTPUT);
pinMode(led7, OUTPUT);
pinMode(led8, OUTPUT);
pinMode(led9, OUTPUT);
pinMode(led0, OUTPUT);
}

void loop() {
  int i=200;
  switch(z)
  {
 case 1:
 // toutes les LED en même temps
 {
  AllLed(i);
 }
 break;

 case 2:
// Une LED sur 2 
TwoLed(i);
 break;

 case 3:
// Une LED sur 3
ThreeLed(i);
 break;

 case 4:
// Une LED sur 4
FourLed(i);
 break;

 case 5:
// Une LED sur 5
FiveLed(i);
 break;

case 6:
//Une seule LED allumée au choix
OnlyLed(i);
break;

case 7:
//Le mode chenille
Chenille(i);
break;
  }
}
