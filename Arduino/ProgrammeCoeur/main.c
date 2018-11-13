#include <stdio.h>
#include <stdlib.h>
#include "coeur.h"
#include "param.h"

int main()
{
    int menu=0;
    printf("Bonjour! Merci de saisir votre choix : ");
    while(menu==0)
    {
    printf("\n 1- Afficher toutes LEDs \n 2- Afficher 1/2 LEDs \n 3- Afficher 1/3 LEDs \n 4- Afficher 1/4 LEDs \n 5- Afficher 1/5 LEDs \n 6- Afficher une seule LED \n 7- Afficher LEDs en mode chenille \n");
    scanf("%d",&menu);
    while(menu<0||menu>7)
    {
        printf("Erreur, merci de saisir un choix compris entre 1 et 7");
        menu=0;
    }
    switch(menu)
    {
    case 1:
        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        break;
    case 5:
        break;
    case 6:
        break;
    case 7:
        break;

    }

    }
    return 0;
}
