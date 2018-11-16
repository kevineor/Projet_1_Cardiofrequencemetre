#include "donnees.h"

#include <stdio.h>
#include <stdlib.h>


//Cette fonction renvoie l'adresse du premier element de la liste
ListeChainee* ajouterDonnee(ListeChainee *liste, Donnee donnee)
{

	ListeChainee* ltemp = liste;

	//Nous créons une nouvelle variable allouée manuellement pour éviter l'utilisation d'une variable locale, gérée par l'OS
	Donnee *ajout = malloc(sizeof(Donnee));
	ajout->date = donnee.date;
	ajout->pouls = donnee.pouls;
	ListeChainee* prochain = malloc(sizeof(ListeChainee));
	prochain->donnee = ajout;
	prochain->suivant = NULL;


	//On vérifie l'etat de la liste
	if (liste == NULL)
	{
		liste = prochain;
		return liste; //On return l'adresse de la liste (si jamais la liste était vide)
	}
	else
	{
		//si la liste est deja initialisée
		while (liste->suivant != NULL)
		{
			liste = liste->suivant;
		}
		liste->suivant = prochain;

		return ltemp; //Nous renvoyons l'adresse de la premiere structure de la liste
	}
}

Donnee* lireCsv(char* chemin, int *taille)
{
	FILE* fichier = fopen(chemin, "r");
	*taille = 0;
	ListeChainee *liste = NULL;
	if (fichier != NULL)
	{
		Donnee donneeAjout;
		while (fscanf(fichier, "%d%*c%d", &donneeAjout.date, &donneeAjout.pouls) > 0)
		{
			(*taille)++;
			liste = ajouterDonnee(liste, donneeAjout);
		}
		fclose(fichier);
		return convertirEnTableau(liste);
	}
	else
	{
		fprintf(stdout, "Erreur de l'ouverture de %s", chemin);
		return NULL;
	}
}

void afficherDonnee(Donnee donnee)
{
	printf("Date : %d\tFrequence cardiaque : %d\n", donnee.date, donnee.pouls);

}

void affierListeChaineeDonnees(ListeChainee* liste)
{
	while (liste != NULL)
	{
		afficherDonnee(*(liste->donnee));
		liste = liste->suivant;
	}
}

void afficherListeDonnees(Donnee *liste, int taille)
{
	int i;
	for (i = 0; i < taille; i++)
	{
		afficherDonnee(liste[i]);
	}
}


void supprimerListeChainee(ListeChainee* liste)
{
	ListeChainee *prochain;
	while (liste != NULL)
	{
		prochain = liste->suivant;
		free(liste->donnee);
		free(liste);
		liste = prochain;
	}
}

Donnee* convertirEnTableau(ListeChainee* listeChainee)
{
	Donnee *tableau;
	int tailleListe = 0;
	ListeChainee* temp = listeChainee;
	while (listeChainee != NULL)
	{
		listeChainee = listeChainee->suivant;
		tailleListe++;
	} 
	listeChainee = temp;
	tableau = malloc(tailleListe * sizeof(Donnee));
	int i;
	for (i = 0; i < tailleListe; i++)
	{
		//On check une erreur
		if (listeChainee == NULL)
		{
			fprintf(stderr, "ERREUR : Utilisation de liste chainnee a NULL");
		}
		//on ajoute la donnée au tableau
		tableau[i].date = listeChainee->donnee->date;
		tableau[i].pouls = listeChainee->donnee->pouls;
		listeChainee = listeChainee->suivant;
	}
	supprimerListeChainee(listeChainee);
	return tableau;
}

Donnee* copierTableau(Donnee *tab, int taille)
{
	Donnee *copie = malloc(taille * sizeof(Donnee));
	int i;
	for (i = 0; i < taille; i++)
	{
		copie[i] = tab[i];
	}
	return copie;
}
