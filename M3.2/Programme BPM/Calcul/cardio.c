#include <arduino.h>
#include "cardio.h"
#include <SoftwareSerial.h>

void calcul(void)
{
  unsigned long tempstot=0;
  unsigned long temps=0;
  unsigned long tempsdetection=0;
  unsigned long tempsprecedent = 0;
  int seuil=394;
  int valeurprecedente=0;
  int valeuractuelle=0;
  tempstot = millis();
  valeuractuelle = analogRead(0);
  seuil=390;

  if (valeuractuelle > seuil) {  // on est dans la zone max début d'une période
    if (valeurprecedente <= seuil) {  // Pour savoir si on y entre 
      tempsdetection = millis();
      if (tempsdetection > (tempsprecedent + 200)){  // ce n'est pas seulement du bruit?
        Serial.print("Votre fréquence cardiaque est de ");
        Serial.print( (1000.0 * 60.0) / (tempsdetection - tempsprecedent));
        Serial.println(" bpm.  ");
        Serial.print("Votre programme tourne depuis  ");
        Serial.print((tempstot)/(1000));
        Serial.println(" secondes. ");
        Serial.println(" ");
        tempsprecedent = tempsdetection;
      }
    }
  }

  valeurprecedente = valeuractuelle;
  delay(150);
}
