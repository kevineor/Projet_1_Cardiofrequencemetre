#include <stdio.h>
#include <stdlib.h>
#include "GenerationCode.h"

int main()
{
    int z,Pouls; //z sera la valeur commune pour le fichier "param.h", qui s�lectionnera l'option dans le programme Arduino; et Pouls sera le nombre de BPM qu'on souhaitera simuler
    int sel=0; //Sel sera la variable pour s�lectionner la LED unique � allumer avec l'Arduino, pr�sente aussi dans "param.h"
    int menu=0; //Cette variable sera utilis�e pour la s�lection dans le menu et le switch
    printf("Bonjour!\n");
    system("pause"); //Une pause apr�s le bonjour
    system("cls"); //On clear la sonsole pour seulement afficher le menu qui va suivre
    printf("Merci de saisir votre choix : ");
    Menu(menu,sel,z); //On appelle la fonction "Menu" qui se chargera d'afficher le menu
    return 0;
}
