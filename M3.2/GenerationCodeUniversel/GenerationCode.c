#include <stdio.h>
#include <stdlib.h>
#include "GenerationCode.h"

void Generation(int z,int sel,int Pouls) //Voici la d�claration de la fonction Generation qui se chargera de g�n�rer le fichier param.h qui sera utilis� par l'Arduino selon le choix de l'utilisateur
{
    FILE *f=fopen("param.h","w"); //Ici, on cr�e un pointeur de fichier qui s'appelera "f", dans lequel on l'envoit ouvrir (ou cr�er s'il n'existe pas) le fichier param.h
    fprintf(f ,"#ifndef PARAM_H_INCLUDED\n#define PARAM_H_INCLUDED \n// ce fichier va nous permettre de configurer la facon dont seront allume les LEDs \nextern int z=%d; //On parametre le switch ici\nextern int sel=%d; // On parametre la led a selectionner ici\nextern int Pouls=%d; //Ici on parametre le pouls a simuler \n#endif // PARAM_H_INCLUDED", z,sel,Pouls);
    //Dans le fprintf(f,"char"), on �crit du texte format� dans le fichier pr�c�demment ouvert, donc param.h dans notre cas.
    fclose(f); //On enregistre et ferme le fichier g�n�r�
}
