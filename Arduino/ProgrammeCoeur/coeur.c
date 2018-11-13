#include "coeur.h"
#include <arduino.h>
void InitialisationLed(int* led)
{
  int pin = 2;
  for(int i = 0; i < 10; i++)
  {
    led[i] = pin;
    pinMode(led[i], OUTPUT);
    pin++;
  }
}
void AllLed(int i,int led[10])
{
 for(int t=0;t<10;t++)
 {
  digitalWrite(led[t],HIGH);
 }
 delay(i); //On mettra la fréquence cardiaque
  for(int t=0;t<10;t++)
  {
  digitalWrite(led[t],LOW);
  }
  delay(100);
}
void TwoLed(int i,int led[10])
{
 for(int t=0;t<10;t+=2)
 {
  digitalWrite(led[t],HIGH);
 }
 delay(i);
  for(int t=0;t<10;t+=2)
 {
  digitalWrite(led[t],LOW);
 }
 for(int t=1;t<10;t+=2)
 {
  digitalWrite(led[t],HIGH);
 }
 delay(i);
 for(int t=1;t<10;t+=2)
 {
  digitalWrite(led[t],LOW);
 }
}
void ThreeLed(int i,int led[10])
{ for(int t=0;t<10;t+=3)
 {
  digitalWrite(led[t],HIGH);
 }
 delay(i);
  for(int t=0;t<10;t+=3)
 {
  digitalWrite(led[t],LOW);
 }
 for(int t=1;t<10;t+=3)
 {
  digitalWrite(led[t],HIGH);
 }
 delay(i);
 for(int t=1;t<10;t+=3)
 {
  digitalWrite(led[t],LOW);
 } 
  for(int t=2;t<10;t+=3)
 {
  digitalWrite(led[t],HIGH);
 }
 delay(i);
 for(int t=2;t<10;t+=3)
 {
  digitalWrite(led[t],LOW);
 }  //On mettra la fréquence cardiaque
}
void FourLed(int i,int led[10])
{
 for(int t=0;t<10;t+=4)
 {
  digitalWrite(led[t],HIGH);
 }
 delay(i);
  for(int t=0;t<10;t+=4)
 {
  digitalWrite(led[t],LOW);
 }
 for(int t=1;t<10;t+=4)
 {
  digitalWrite(led[t],HIGH);
 }
 delay(i);
 for(int t=1;t<10;t+=4)
 {
  digitalWrite(led[t],LOW);
 } 
  for(int t=2;t<10;t+=4)
 {
  digitalWrite(led[t],HIGH);
 }
 delay(i);
 for(int t=2;t<10;t+=4)
 {
  digitalWrite(led[t],LOW);
 } 
  for(int t=3;t<10;t+=4)
 {
  digitalWrite(led[t],HIGH);
 }
 delay(i);
 for(int t=3;t<10;t+=4)
 {
  digitalWrite(led[t],LOW);
 } 
  for(int t=4;t<10;t+=4)
 {
  digitalWrite(led[t],HIGH);
 } 
  delay(i);
  for(int t=4;t<10;t+=4)
 {
  digitalWrite(led[t],LOW);
 }

  for(int t=5;t<10;t+=4)
 {
  digitalWrite(led[t],HIGH);
 } 
  delay(i);
  for(int t=5;t<10;t+=4)
 {
  digitalWrite(led[t],LOW);
 }
}
void FiveLed(int i,int led[10])
{
  for(int t=0;t<10;t+=5)
 {
  digitalWrite(led[t],HIGH);
 }
 delay(i);
  for(int t=0;t<10;t+=5)
 {
  digitalWrite(led[t],LOW);
 }
 for(int t=1;t<10;t+=5)
 {
  digitalWrite(led[t],HIGH);
 }
 delay(i);
 for(int t=1;t<10;t+=5)
 {
  digitalWrite(led[t],LOW);
 } 
  for(int t=2;t<10;t+=5)
 {
  digitalWrite(led[t],HIGH);
 }
 delay(i);
 for(int t=2;t<10;t+=5)
 {
  digitalWrite(led[t],LOW);
 } 
  for(int t=3;t<10;t+=5)
 {
  digitalWrite(led[t],HIGH);
 }
 delay(i);
 for(int t=3;t<10;t+=5)
 {
  digitalWrite(led[t],LOW);
 } 
 for(int t=4;t<10;t+=5)
 {
  digitalWrite(led[t],HIGH);
 }
 delay(i);
  for(int t=4;t<10;t+=5)
 {
  digitalWrite(led[t],LOW);
 }
}
void OnlyLed(int i,int led[10],int sel)
{
digitalWrite(led[sel],HIGH); //Essayer de remplacer "0" par une valeur utilisateur
delay(i);//On mettra la fréquence cardiaque
digitalWrite(led[sel],LOW);
delay(i);
}
void Chenille(int i,int led[10])
{
  digitalWrite(led[1],HIGH);
  delay(i);
 for(int t=1;t<10;t++)
   {
    digitalWrite(led[t-1],LOW);
    digitalWrite(led[t],HIGH);
    digitalWrite(led[t+1],HIGH);
    delay(i);
   }
   digitalWrite(led[0],HIGH);
   delay(i);
   digitalWrite(led[9], LOW);
}
