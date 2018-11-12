#include "coeur.h"
#include <arduino.h>

void AllLed(int i)
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
 delay(i); //On mettra la fréquence cardiaque
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
void TwoLed(int i)
{
 digitalWrite(led1,HIGH);

 digitalWrite(led3,HIGH);

 digitalWrite(led5,HIGH);

 digitalWrite(led7,HIGH);

 digitalWrite(led9,HIGH);
 
 delay(i); //On mettra la fréquence cardiaque

  digitalWrite(led1,LOW);

  digitalWrite(led3,LOW);

  digitalWrite(led5,LOW);

  digitalWrite(led7,LOW);

  digitalWrite(led9,LOW);
  delay(100);
}
void ThreeLed(int i)
{ digitalWrite(led0,HIGH);

 digitalWrite(led3,HIGH);

 digitalWrite(led6,HIGH);

 digitalWrite(led9,HIGH);
 delay(i); //On mettra la fréquence cardiaque
  digitalWrite(led0,LOW);

  digitalWrite(led3,LOW);

  digitalWrite(led6,LOW);

  digitalWrite(led9,LOW);
  delay(100);
}
void FourLed(int i)
{
   digitalWrite(led0,HIGH);

 digitalWrite(led4,HIGH);

 digitalWrite(led8,HIGH);

 delay(i); //On mettra la fréquence cardiaque
  digitalWrite(led0,LOW);

  digitalWrite(led4,LOW);

  digitalWrite(led8,LOW);

  delay(100);
}
void FiveLed(int i)
{
  digitalWrite(led0,HIGH);

 digitalWrite(led5,HIGH);

 delay(i); //On mettra la fréquence cardiaque
  digitalWrite(led0,LOW);

  digitalWrite(led5,LOW);

  delay(100);
}
void OnlyLed(int i)
{
digitalWrite(led0,HIGH); //Essayer de remplacer "0" par une valeur utilisateur
delay(200);//On mettra la fréquence cardiaque
digitalWrite(led0,LOW);
delay(100);
}
void Chenille(int i)
{
  digitalWrite(led0,HIGH);
digitalWrite(led9,LOW);
 delay(i); //On mettra la fréquence cardiaque
 digitalWrite(led1,HIGH);
 digitalWrite(led0,LOW);
 delay(i);
 digitalWrite(led2,HIGH);
 digitalWrite(led1,LOW);
 delay(i);
 digitalWrite(led3,HIGH);
 digitalWrite(led2,LOW);
 delay(i);
 digitalWrite(led4,HIGH);
 digitalWrite(led3,LOW);
  delay(i);
 digitalWrite(led4,HIGH);
 digitalWrite(led3,LOW);
  delay(i);
 digitalWrite(led5,HIGH);
 digitalWrite(led4,LOW);
  delay(i);
 digitalWrite(led6,HIGH);
 digitalWrite(led5,LOW);
  delay(i);
 digitalWrite(led7,HIGH);
 digitalWrite(led6,LOW);
  delay(i);
 digitalWrite(led8,HIGH);
 digitalWrite(led7,LOW);
  delay(i);
 digitalWrite(led9,HIGH);
 digitalWrite(led8,LOW);
  delay(i);
}
