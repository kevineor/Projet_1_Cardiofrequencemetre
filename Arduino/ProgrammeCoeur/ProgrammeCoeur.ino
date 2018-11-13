#include "coeur.h"
#include "coeur.c"
#include "param.h"
int led[10];
void setup() 
{
InitialisationLed(led);
}
void loop() {
  int i=70; //i ici est le BPM
  i=(i/60)*1000; //Ici on aura i en ms.
  switch(z)
  {
 case 1:
 // toutes les LED en même temps
 {
  AllLed(i,led);
 }
 break;

 case 2:
// Une LED sur 2 
TwoLed(i,led);
 break;

 case 3:
// Une LED sur 3
ThreeLed(i,led);
 break;

 case 4:
// Une LED sur 4
FourLed(i,led);
 break;

 case 5:
// Une LED sur 5
FiveLed(i,led);
 break;

case 6:
//Une seule LED allumée au choix
OnlyLed(i,led,sel);
break;

case 7:
//Le mode chenille
Chenille(i,led);
break;
  }
}
