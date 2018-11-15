#pragma once



typedef struct Donnee
{
	int date;
	int pouls;
	struct Donnee *suivant;
}Donnee;

Donnee* ajouterDonnee(Donnee * liste, Donnee donnee);

Donnee* lireCsv(char * chemin);

void afficherDonnee(Donnee donnee);

void afficherListeDonnees(Donnee * liste);

Donnee*	supprimerListe(Donnee * liste);

