#include <stdio.h>
#include <stdlib.h>
#include "menu.h"

int Menu(int menu,int sel,int z)
{
        printf("\n ------------Menu---------\n 1- Afficher toutes LEDs \n 2- Afficher 1/2 LEDs \n 3- Afficher 1/3 LEDs \n 4- Afficher 1/4 LEDs \n 5- Afficher 1/5 LEDs \n 6- Afficher 1/6 LEDs \n 7- Afficher 1/7 LEDs\n 8- Afficher 1/8 LEDs\n");
        printf(" 9- Afficher 1/9 LEDs\n 10- Afficher une LEDs au choix\n 11- Afficher le mode chenille\n 12- Afficher le mode chenille par battement \n 13- Quitter le programme \n");
        scanf("%d",&menu);
        switch(menu)
        {

        case 1:
            //Si cas 1, on ecrit dans le header "param.h" la valeur z=1
            z=1;
            Generation(z,sel);
            printf("Succes. Merci de televerser le programme vers l'Arduino afin de profiter de cette option. Retour au menu... \n");
            system("pause");
            system("cls");
            Menu(menu,sel,z);
            break;
        case 2:
            //Meme logique que le cas precedent...
            z=2;
            Generation(z,sel);
            printf("Succes. Merci de televerser le programme vers l'Arduino afin de profiter de cette option. Retour au menu... \n");
            system("pause");
            system("cls");
            Menu(menu,sel,z);
            break;
        case 3:
            z=3;
            Generation(z,sel);
            printf("Succes. Merci de televerser le programme vers l'Arduino afin de profiter de cette option. Retour au menu... \n");
            system("pause");
            system("cls");
            Menu(menu,sel,z);
            break;
        case 4:
            z=4;
            Generation(z,sel);
            printf("Succes. Merci de televerser le programme vers l'Arduino afin de profiter de cette option. Retour au menu... \n");
            system("pause");
            system("cls");
            Menu(menu,sel,z);
            break;
        case 5:
            z=5;
            Generation(z,sel);
            printf("Succes. Merci de televerser le programme vers l'Arduino afin de profiter de cette option. Retour au menu... \n");
            system("pause");
            system("cls");
            Menu(menu,sel,z);
            break;
        case 6:
            z=6;
            Generation(z,sel);
            printf("Succes. Merci de televerser le programme vers l'Arduino afin de profiter de cette option. Retour au menu... \n");
            system("pause");
            system("cls");
            Menu(menu,sel,z);
            break;
        case 7:
            z=7;
            Generation(z,sel);
            printf("Succes. Merci de televerser le programme vers l'Arduino afin de profiter de cette option. Retour au menu... \n");
            system("pause");
            system("cls");
            Menu(menu,sel,z);
            break;
        case 8:
            z=8;
            Generation(z,sel);
            printf("Succes. Merci de televerser le programme vers l'Arduino afin de profiter de cette option. Retour au menu... \n");
            system("pause");
            system("cls");
            Menu(menu,sel,z);
            break;
        case 9:
            z=9;
            Generation(z,sel);
            printf("Succes. Merci de televerser le programme vers l'Arduino afin de profiter de cette option. Retour au menu... \n");
            system("pause");
            system("cls");
            Menu(menu,sel,z);
            break;
        case 10:
            z=10;
            printf("Saisir la LED a allumer : ");
            scanf("%d",&sel);
            Generation(z,sel);
            printf("Succes. Merci de televerser le programme vers l'Arduino afin de profiter de cette option. Retour au menu... \n");
            system("pause");
            system("cls");
            Menu(menu,sel,z);
            break;
        case 11:
            z=11;
            Generation(z,sel);
            printf("Succes. Merci de televerser le programme vers l'Arduino afin de profiter de cette option. Retour au menu... \n");
            system("pause");
            system("cls");
            Menu(menu,sel,z);
            break;
        case 12:
            z=12;
            Generation(z,sel);
            printf("Succes. Merci de televerser le programme vers l'Arduino afin de profiter de cette option. Retour au menu... \n");
            system("pause");
            system("cls");
            Menu(menu,sel,z);
            break;
        case 13:
            printf("Fin du programme, merci au revoir!");
            return 0;
            break;
        default:
            printf("Erreur, merci de reessayer avec une option valide. Retour au menu");
            system("pause");
            system("cls");
            Menu(menu,sel,z);
            break;

        }
    }

