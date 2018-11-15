#include <stdio.h>
#include <stdlib.h>
#include "menu.h"

int Menu(int menu,int sel,int z)
{
        printf("\n ------------Menu---------\n 1- Afficher toutes LEDs \n 2- Afficher 1/2 LEDs \n 3- Afficher 1/3 LEDs \n 4- Afficher 1/4 LEDs \n 5- Afficher 1/5 LEDs \n 6- Afficher une seule LED \n 7- Afficher LEDs en mode chenille \n 8- Mettre fin au programme\n");
        scanf("%d",&menu);
        switch(menu)
        {

        case 1:
            //Si cas 1, on ecrit dans le header "param.h" la valeur z=1
            z=1;
            Generation(z,sel);
            printf("Succes. Merci de televerser le programme vers l'Arduino afin de profiter de cette option. Retour au menu: \n");
            Menu(menu,sel,z);
            break;
        case 2:
            //Meme logique que le cas precedent...
            z=2;
            Generation(z,sel);
            printf("Succes. Merci de televerser le programme vers l'Arduino afin de profiter de cette option. Retour au menu: \n");
            Menu(menu,sel,z);
            break;
        case 3:
            z=3;
            Generation(z,sel);
            printf("Succes. Merci de televerser le programme vers l'Arduino afin de profiter de cette option. Retour au menu: \n");
            Menu(menu,sel,z);
            break;
        case 4:
            z=4;
            Generation(z,sel);
            printf("Succes. Merci de televerser le programme vers l'Arduino afin de profiter de cette option. Retour au menu: \n");
            Menu(menu,sel,z);
            break;
        case 5:
            z=5;
            Generation(z,sel);
            printf("Succes. Merci de televerser le programme vers l'Arduino afin de profiter de cette option. Retour au menu: \n");
            Menu(menu,sel,z);
            break;
        case 6:
            z=6;
            printf("Saisir la LED a allumer : ");
            scanf("%d",&sel);
            Generation(z,sel);
            printf("Succes. Merci de televerser le programme vers l'Arduino afin de profiter de cette option. Retour au menu: \n");
            Menu(menu,sel,z);
            break;
        case 7:
            z=7;
            Generation(z,sel);
            printf("Succes. Merci de televerser le programme vers l'Arduino afin de profiter de cette option. Retour au menu: \n");
            Menu(menu,sel,z);
            break;
        case 8:
            printf("Fin du programme, merci au revoir!");
            return 0;
            break;
        default:
            printf("Erreur, merci de reessayer");
            Menu(menu,sel,z);
            break;

        }
    }

