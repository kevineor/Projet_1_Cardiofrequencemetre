#include "menu.h"

void Menu(int menu,int sel,int z)
{
    while(menu==0)
    {
        printf("\n ------------Menu---------\n 1- Afficher toutes LEDs \n 2- Afficher 1/2 LEDs \n 3- Afficher 1/3 LEDs \n 4- Afficher 1/4 LEDs \n 5- Afficher 1/5 LEDs \n 6- Afficher une seule LED \n 7- Afficher LEDs en mode chenille \n 8- Mettre fin au programme\n");
        scanf("%d",&menu);
        while(menu<0||menu>8)
        {
            printf("Erreur, merci de saisir un choix compris entre 1 et 8");
            menu=0;
        }
        switch(menu)
        {
        case 1:
            //Si cas 1, on ecrit dans le header "param.h" la valeur z=1
            z=1;
            fon(z,sel);
            printf("Succes. Merci de televerser le programme vers l'Arduino afin de profiter de cette option. Retour au menu: \n");
            menu=0;
            break;
        case 2:
            //Meme logique que le cas precedent...
            z=2;
            fon(z,sel);
            printf("Succes. Merci de televerser le programme vers l'Arduino afin de profiter de cette option. Retour au menu: \n");
            menu=0;
            break;
        case 3:
            z=3;
            fon(z,sel);
            printf("Succes. Merci de televerser le programme vers l'Arduino afin de profiter de cette option. Retour au menu: \n");
            menu=0;
            break;
        case 4:
            z=4;
            fon(z,sel);
            printf("Succes. Merci de televerser le programme vers l'Arduino afin de profiter de cette option. Retour au menu: \n");
            menu=0;
            break;
        case 5:
            z=5;
            fon(z,sel);
            printf("Succes. Merci de televerser le programme vers l'Arduino afin de profiter de cette option. Retour au menu: \n");
            menu=0;
            break;
        case 6:
            z=6;
            printf("Saisir la LED a allumer : ");
            scanf("%d",&sel);
            fon(z,sel);
            printf("Succes. Merci de televerser le programme vers l'Arduino afin de profiter de cette option. Retour au menu: \n");
            menu=0;
            break;
        case 7:
            z=7;
            fon(z,sel);
            printf("Succes. Merci de televerser le programme vers l'Arduino afin de profiter de cette option. Retour au menu: \n");
            menu=0;
            break;
        case 8:
            printf("Fin du programme, merci au revoir!");
            break;
        }
    }
}
