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
void SixLed(int i,int* led)
{
  for(int t=0;t<10;t+=6)
   {
        digitalWrite(led[t],HIGH);

   }
   delay(500);
 for(int t=0;t<10;t+=6)
   {
        digitalWrite(led[t],LOW);
   }

   for(int t=2;t<10;t+=6)
   {
        digitalWrite(led[i],HIGH);

   }
   delay(i);
 for(int t=2;t<10;t+=6)
   {
        digitalWrite(led[t],LOW);
   }
     
}

void SevenLed(int i,int* led)
{
  for(int t=0;t<10;t+=7)
   {
        digitalWrite(led[t],HIGH);

   }
   delay(i);
 for(int t=0;t<10;t+=7)
   {
        digitalWrite(led[t],LOW);
   }

   for(int t=5;t<10;t+=7)
   {
        digitalWrite(led[t],HIGH);

   }
   delay(i);
 for(int t=5;t<10;t+=7)
   {
        digitalWrite(led[t],LOW);
   }

     for(int t=8;t<10;t+=7)
   {
        digitalWrite(led[t],HIGH);

   }
   delay(i);
 for(int t=8;t<10;t+=7)
   {
        digitalWrite(led[t],LOW);
   }

     for(int t=2;t<10;t+=7)
   {
        digitalWrite(led[t],HIGH);

   }
   delay(i);
 for(int t=2;t<10;t+=7)
   {
        digitalWrite(led[t],LOW);
   }


     for(int t=6;t<10;t+=7)
   {
        digitalWrite(led[t],HIGH);

   }
   delay(i);
 for(int t=6;t<10;t+=7)
   {
        digitalWrite(led[t],LOW);
   }


}
   
void EightLed(int i,int* led)
{
  for(int t=0;t<10;t+=8)
   {
        digitalWrite(led[t],HIGH);

   }
   delay(i);
 for(int t=0;t<10;t+=8)
   {
        digitalWrite(led[t],LOW);
   }

   for(int t=2;t<10;t+=8)
   {
        digitalWrite(led[t],HIGH);

   }
   delay(i);
 for(int t=2;t<10;t+=8)
   {
        digitalWrite(led[t],LOW);
   }

for(int t=6;t<10;t+=8)
   {
        digitalWrite(led[t],HIGH);

   }
   delay(i);
 for(int t=6;t<10;t+=8)
   {
        digitalWrite(led[t],LOW);
   }
     
}

void NineLed(int i,int* led)
{

digitalWrite(led[0],HIGH);
delay(i);
digitalWrite(led[0],LOW);

digitalWrite(led[9],HIGH);
delay(i);
digitalWrite(led[9],LOW);

for(int t=8;t<10;t+=9)
   {
        digitalWrite(led[t],HIGH);

   }
   delay(i);
 for(int t=8;t<10;t+=9)
   {
        digitalWrite(led[t],LOW);
   }

for(int t=7;t<10;t+=9)
   {
        digitalWrite(led[t],HIGH);

   }
   delay(i);
 for(int t=7;t<10;t+=9)
   {
        digitalWrite(led[t],LOW);
   }

for(int t=6;t<10;t+=9)
   {
        digitalWrite(led[t],HIGH);

   }
   delay(i);
 for(int t=6;t<10;t+=9)
   {
        digitalWrite(led[t],LOW);
   }

for(int t=5;t<10;t+=9)
   {
        digitalWrite(led[t],HIGH);

   }
   delay(i);
 for(int t=5;t<10;t+=9)
   {
        digitalWrite(led[t],LOW);
   }

for(int t=4;t<10;t+=9)
   {
        digitalWrite(led[t],HIGH);

   }
   delay(i);
 for(int t=4;t<10;t+=9)
   {
        digitalWrite(led[t],LOW);
   }

for(int t=3;t<10;t+=9)
   {
        digitalWrite(led[t],HIGH);

   }
   delay(i);
 for(int t=3;t<10;t+=9)
   {
        digitalWrite(led[t],LOW);
   }

for(int t=2;t<10;t+=9)
   {
        digitalWrite(led[t],HIGH);

   }
   delay(i);
 for(int t=2;t<10;t+=9)
   {
        digitalWrite(led[t],LOW);
   }

for(int t=1;t<10;t+=9)
   {
        digitalWrite(led[t],HIGH);

   }
   delay(i);
 for(int t=1;t<10;t+=9)
   {
        digitalWrite(led[t],LOW);
   }
}


void OnlyLed(int i,int led[10],int sel)
{
digitalWrite(led[sel],HIGH); //Essayer de remplacer "0" par une valeur utilisateur
delay(i);//On mettra la fréquence cardiaque
digitalWrite(led[sel],LOW);
delay(100);
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
void ChenilleB(int i,int*led)
{
  int t=0;
  while(t!=9)
  {
    digitalWrite(led[t],HIGH);
    digitalWrite(led[t+1],HIGH);
    delay(100);
    digitalWrite(led[t],LOW);
    digitalWrite(led[t+1],LOW);
    delay(i);
    t++;
  }
    digitalWrite(led[9],HIGH);
    digitalWrite(led[0],HIGH);
    delay(100);
    digitalWrite(led[9],LOW);
    digitalWrite(led[0],LOW);
    delay(i);
}
void Simulateur(int Pouls)
{
  float z=0;
  z=(60.0/(float)Pouls)*1000.0;
  for(int t=0;t<10;t++)
  {
    digitalWrite(led[t],HIGH);
  }
  delay(30);
  for(int t=0;t<10;t++)
  {
    digitalWrite(led[t],LOW);
  }
  delay((int)z);
}
