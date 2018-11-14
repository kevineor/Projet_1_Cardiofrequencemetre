#include "donnees.h"

#include <stdio.h>
#include <stdlib.h>


//Cette fonction renvoie l'adresse du premier element de la liste
Donnee* ajouterDonnee(Donnee *liste, Donnee donnee)
{
	Donnee* ltemp = liste;

	//Nous créons une nouvelle variable allouée manuellement pour éviter l'utilisation d'une variable locale, gérée par l'OS
	Donnee *ajout = malloc(sizeof(Donnee));
	ajout->date = donnee.date;
	ajout->pouls = donnee.pouls;
	ajout->suivant = NULL;

	//On vérifie l'etat de la liste
	if (liste == NULL)
	{
		liste = ajout;
		return liste; //On return l'adresse de la liste (si jamais la liste était vide)
	}
	else
	{
		//si la liste est deja initialisée
		while (liste->suivant != NULL)
		{
			liste = liste->suivant;
		}
		liste->suivant = ajout;

		return ltemp; //Nous renvoyons l'adresse de la premiere structure de la liste
	}
}

Donnee* lireCsv(char* chemin)
{
	FILE* fichier = fopen(chemin, "r");

	Donnee *liste = NULL;
	if (fichier != NULL)
	{
		Donnee donneeAjout;
		while (fscanf(fichier, "%d%*c%d", &donneeAjout.date, &donneeAjout.pouls) > 0)
		{
			liste = ajouterDonnee(liste, donneeAjout);
		}
		fclose(fichier);
		return liste;
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

void afficherListeDonnees(Donnee *liste)
{
	while (liste != NULL)
	{
		afficherDonnee(*liste);
		liste = liste->suivant;
	}
}

//Nous utilisons une valeur de renvoi pour pouvoir reinitialiser le pointeur de liste sur NULL
Donnee* supprimerListe(Donnee* liste)
{
	Donnee *prochain;
	while (liste != NULL)
	{
		prochain = liste->suivant;
		free(liste);
		liste = prochain;
	}
	return NULL;
}

