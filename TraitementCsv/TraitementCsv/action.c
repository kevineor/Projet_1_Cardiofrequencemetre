#include "action.h"

int compare_by_date(Donnee *a, Donnee *b)
{
	return a->date < b->date ? -1 : a->date > b->date;
	/*
		- a->date < b->date : -1
		- a->date = b->date : 0
		- a->date > b->date : 1
	*/
}

int compare_by_pouls(Donnee *a, Donnee *b)
{
	return a->pouls < b->pouls ? -1 : a->pouls > b->pouls;
	/*
		- a->pouls < b->pouls : -1
		- a->pouls = b->pouls : 0
		- a->pouls > b->pouls : 1
	*/
}


//renvoie l'indice de la liste contenant la donnee, -1 si non trouvé
int rechercherDate(Donnee * liste, int taille, int date)
{
	int trouve = -1;
	int i;
	for (i = 0; i < taille; i++)
	{
		if (liste[i].date == date)
		{
			trouve = i;
			break;
		}
	}
	return trouve;
}


double moyenneIntervalle(Donnee *liste, int taille, int tempsA, int tempsB)
{
	double moyenne = 0.0;
	double nombre = 0.0;
	int i;
	for ( i = 0; i < taille; i++)
	{
		if (liste[i].date <= max(tempsA, tempsB) && liste[i].date >= min(tempsA, tempsB))
		{
			fprintf(stdout, "test %d", liste[i].pouls);
			moyenne = moyenne + (double) liste[i].pouls;
			nombre = nombre + 1.0;
		}
	}
	return (moyenne / nombre);
}

