#include <stdio.h>
#include <stdlib.h>
#include "menu.h"

int Menu(int menu,int sel,int z,int Pouls) //Dans le menu, on récupère les valeurs précédentes (pour éviter de les int encore une fois dans cette fonction)
{
        printf("\n ------------Menu---------\n 1- Afficher toutes LEDs \n 2- Afficher 1/2 LEDs \n 3- Afficher 1/3 LEDs \n 4- Afficher 1/4 LEDs \n 5- Afficher 1/5 LEDs \n 6- Afficher 1/6 LEDs \n 7- Afficher 1/7 LEDs\n 8- Afficher 1/8 LEDs\n");
        printf(" 9- Afficher 1/9 LEDs\n 10- Afficher une LEDs au choix\n 11- Afficher le mode chenille\n 12- Afficher le mode chenille par battement \n 13- Pour regler le simulateur de pouls \n 14- Quitter le programme \n");
        scanf("%d",&menu); //On récupère la valeur sélectionnée par l'utilisateur pour l'option correspondante
        switch(menu)//On fait un switch de l'option saisie par l'utilisateur
        {

        case 1: //Cas si on a l'option 1
            //Si cas 1, on ecrit dans le header "param.h" la valeur z=1
            z=1;
            Generation(z,sel,Pouls); //On appelle la fonction Generation, qui va se charger de générer "param.h" avec la valeur de z correspondante
            printf("Succes. Merci de televerser le programme vers l'Arduino afin de profiter de cette option. Retour au menu... \n");
            system("pause"); //Une petite pause
            system("cls"); //Un petit clear pour afficher seulement le menu
            Menu(menu,sel,z,Pouls); //On appelle le Menu afin de retourner au menu principal
            break;
        case 2: //Cas si on a l'option 2...
            //Meme logique que le cas precedent...
            z=2;
            Generation(z,sel,Pouls);
            printf("Succes. Merci de televerser le programme vers l'Arduino afin de profiter de cette option. Retour au menu... \n");
            system("pause");
            system("cls");
            Menu(menu,sel,z,Pouls);
            break;
        case 3:
            z=3;
            Generation(z,sel,Pouls);
            printf("Succes. Merci de televerser le programme vers l'Arduino afin de profiter de cette option. Retour au menu... \n");
            system("pause");
            system("cls");
            Menu(menu,sel,z,Pouls);
            break;
        case 4:
            z=4;
            Generation(z,sel,Pouls);
            printf("Succes. Merci de televerser le programme vers l'Arduino afin de profiter de cette option. Retour au menu... \n");
            system("pause");
            system("cls");
            Menu(menu,sel,z,Pouls);
            break;
        case 5:
            z=5;
            Generation(z,sel,Pouls);
            printf("Succes. Merci de televerser le programme vers l'Arduino afin de profiter de cette option. Retour au menu... \n");
            system("pause");
            system("cls");
            Menu(menu,sel,z,Pouls);
            break;
        case 6:
            z=6;
            Generation(z,sel,Pouls);
            printf("Succes. Merci de televerser le programme vers l'Arduino afin de profiter de cette option. Retour au menu... \n");
            system("pause");
            system("cls");
            Menu(menu,sel,z,Pouls);
            break;
        case 7:
            z=7;
            Generation(z,sel,Pouls);
            printf("Succes. Merci de televerser le programme vers l'Arduino afin de profiter de cette option. Retour au menu... \n");
            system("pause");
            system("cls");
            Menu(menu,sel,z,Pouls);
            break;
        case 8:
            z=8;
            Generation(z,sel,Pouls);
            printf("Succes. Merci de televerser le programme vers l'Arduino afin de profiter de cette option. Retour au menu... \n");
            system("pause");
            system("cls");
            Menu(menu,sel,z,Pouls);
            break;
        case 9:
            z=9;
            Generation(z,sel,Pouls);
            printf("Succes. Merci de televerser le programme vers l'Arduino afin de profiter de cette option. Retour au menu... \n");
            system("pause");
            system("cls");
            Menu(menu,sel,z,Pouls);
            break;
        case 10: //Cas 10 un peu particulier
            z=10;
            printf("Saisir la LED a allumer : "); //On demande quelle LED on veut allumer
            scanf("%d",&sel); //On récupère la valeur de la LED à allumer et on l'introduit dans la variable sel
            Generation(z,sel,Pouls); //On appelle la fonction Generation, avec le z=10 (option 10) et sel la valeur de la LED à allumer
            printf("Succes. Merci de televerser le programme vers l'Arduino afin de profiter de cette option. Retour au menu... \n");
            system("pause");
            system("cls");
            Menu(menu,sel,z,Pouls);
            break;
        case 11:
            z=11;
            Generation(z,sel,Pouls);
            printf("Succes. Merci de televerser le programme vers l'Arduino afin de profiter de cette option. Retour au menu... \n");
            system("pause");
            system("cls");
            Menu(menu,sel,z,Pouls);
            break;
        case 12:
            z=12;
            Generation(z,sel,Pouls);
            printf("Succes. Merci de televerser le programme vers l'Arduino afin de profiter de cette option. Retour au menu... \n");
            system("pause");
            system("cls");
            Menu(menu,sel,z,Pouls);
            break;
        case 13: //Cas 13 particulier
            z=13;
            Menu2(z);//On appelle le deuxième menu pour sélectionner la valeur du pouls à simuler
            break;
        case 14:
            printf("Fin du programme, merci au revoir!");
            return 0; //On return 0 pour mettre fin au programme
            break;
        default: //On utilise le cas default pour un message d'erreur en cas de saisie incorrecte
            printf("Erreur, merci de reessayer avec une option valide. Retour au menu");
            system("pause");
            system("cls");
            Menu(menu,sel,z,Pouls); //On appelle la fonction menu afin de retourner au menu principal
            break;

        }
}
void Menu2(int z)
{
    int menuB; //On crée une variable pour le deuxième menu
    printf("Pour un nouveau ne, tapez 1\nPour Un enfant entre 1 et 2 ans tapez 2\nPour un enfant entre 3 et 5 ans tapez 3\nPour un enfant entre 6 et 12 ans tapez 4\nPour un adolescent ou adulte, tapez 5\nPour une personne agee, tapez 6\nPour revenir au menu, tapez 7\nPour fermer le programme, tapez 8\n");
    scanf("%d",&menuB); //On récupère la valeur utilisateur
            switch(menuB) //on crée un switch en fonction de cette valeur
            {
            case 1:
                Generation(z,1,140); //Si on demander le pouls d'un nouveau né par exemple, on demandera alors à générer param.h avec comme paramètre : z=13 et Pouls=140.
                printf("Le pouls a bien ete parametre a %d.\nRetour au menu...\n",140);
                system("pause");
                system("cls");
                Menu(1,1,1,1);//On retourne au menu en réinnitialisant les variables à 1
                break;
            case 2:
                Generation(z,1,110);
                printf("Le pouls a bien ete parametre a %d.\nRetour au menu...\n",110);
                system("pause");
                system("cls");
                Menu(1,1,1,1);
                break;
            case 3:
                Generation(z,1,105);
                printf("Le pouls a bien ete parametre a %d.\nRetour au menu...\n",105);
                system("pause");
                system("cls");
                Menu(1,1,1,1);
                break;
            case 4:
                Generation(z,1,95);
                printf("Le pouls a bien ete parametre a %d.\nRetour au menu...\n",95);
                system("pause");
                system("cls");
                Menu(1,1,1,1);
                break;
            case 5:
                Generation(z,1,70);
                printf("Le pouls a bien ete parametre a %d.\nRetour au menu...\n",70);
                system("pause");
                system("cls");
                Menu(1,1,1,1);
                break;
            case 6:
                Generation(z,1,65);
                printf("Le pouls a bien ete parametre a %d.\nRetour au menu...\n",65);
                system("pause");
                system("cls");
                Menu(1,1,1,1);
                break;
            case 7:
                system("cls");
                Menu(1,1,1,1);
                break;
            case 8:
                printf("Fin du programme, au revoir!\n");
                return 0; //On fait un return 0 pour stopper le programme
                break;
            default://Le cas default servira à créer un message d'erreur en cas de saisie incorrecte
                printf("Saisie incorrecte, merci de reessayer\n");
                system("pause");
                system("cls");
                Menu2(1); //Et on retourne au deuxième menu
                break;
            }
}
