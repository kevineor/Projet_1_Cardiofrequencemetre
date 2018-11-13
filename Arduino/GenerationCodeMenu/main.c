#include <stdio.h>
#include <stdlib.h>


int main()
{
    int menu=0;
    printf("Bonjour! Merci de saisir votre choix : ");
    while(menu==0)
    {
    printf("\n 1- Afficher toutes LEDs \n 2- Afficher 1/2 LEDs \n 3- Afficher 1/3 LEDs \n 4- Afficher 1/4 LEDs \n 5- Afficher 1/5 LEDs \n 6- Afficher une seule LED \n 7- Afficher LEDs en mode chenille \n 8- Mettre fin au programme\n");
    scanf("%d",&menu);
    while(menu<0||menu>8)
    {
        printf("Erreur, merci de saisir un choix compris entre 1 et 8");
        menu=0;
    }
        switch(menu)
    {
    case 1:
        //Si cas 1, on �crit dans le header "param.h" la valeur z=1
        printf("Succes. Retour au menu");
        menu=0;
        break;
    case 2:
        //M�me logique que le cas pr�c�dent...
        printf("Succes. Retour au menu");
        menu=0;
        break;
    case 3:
        printf("Succes. Retour au menu");
        menu=0;
        break;
    case 4:
        printf("Succes. Retour au menu");
        menu=0;
        break;
    case 5:
        printf("Succes. Retour au menu");
        menu=0;
        break;
    case 6:
        printf("Succes. Retour au menu");
        menu=0;
        break;
    case 7:
        printf("Succes. Retour au menu");
        menu=0;
        break;
    case 8:
        printf("Fin du programme");
        break;
    }
    }
    return 0;
}
