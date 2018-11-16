#include <stdio.h>
#include <stdlib.h>
#include "GenerationCode.h"

void Generation(int z,int sel,int Pouls) //Voici la déclaration de la fonction Generation qui se chargera de générer le fichier param.h qui sera utilisé par l'Arduino selon le choix de l'utilisateur
{
    FILE *f=fopen("param.h","w"); //Ici, on crée un pointeur de fichier qui s'appelera "f", dans lequel on l'envoit ouvrir (ou créer s'il n'existe pas) le fichier param.h
    fprintf(f ,"#ifndef PARAM_H_INCLUDED\n#define PARAM_H_INCLUDED \n// ce fichier va nous permettre de configurer la facon dont seront allume les LEDs \nextern int z=%d; //On parametre le switch ici\nextern int sel=%d; // On parametre la led a selectionner ici\nextern int Pouls=%d; //Ici on parametre le pouls a simuler \n#endif // PARAM_H_INCLUDED", z,sel,Pouls);
    //Dans le fprintf(f,"char"), on écrit du texte formaté dans le fichier précédemment ouvert, donc param.h dans notre cas.
    fclose(f); //On enregistre et ferme le fichier généré
}
