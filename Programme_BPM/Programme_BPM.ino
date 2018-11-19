int valeurPrecedente = 0;
unsigned long tempsPrecedent = 0;
unsigned long tempstot;

void setup() {
  Serial.begin(9600);
}


void loop() {

  int valeurActuelle, valeurSeuil;
  unsigned long tempsDetection;

  tempstot = millis();
  valeurActuelle = analogRead(0);
  valeurSeuil = 393;

  if (valeurActuelle > valeurSeuil) {  // on est là ou les valeur sont les plus élevée c'est à dire au début de la période
    if (valeurPrecedente <= valeurSeuil) {  
      tempsDetection = millis();
      if (tempsDetection > (tempsPrecedent + 200)){  //On vérifie si on est dedans et que il n'y a pas de rebond
        Serial.println(tempstot); //Affiche le temps totale du programme
        Serial.print(";"); //Mets les valeurs dans un fichier csv
        Serial.print( (1000.0 * 60.0) / (tempsDetection - tempsPrecedent),0); //Calcul de la fréquence 1/T
        
        delay(150);
        tempsPrecedent = tempsDetection;
      }
    }
  }

  valeurPrecedente = valeurActuelle;

}
