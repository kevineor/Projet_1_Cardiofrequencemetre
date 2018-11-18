#pragma once

typedef struct Donnee
{
	int date;
	int pouls;
}Donnee;

typedef struct Lchaine
{
	Donnee* donnee;
	struct Lchaine *suivant;
}ListeChainee;

static ListeChainee* ajouterDonnee(ListeChainee* liste, Donnee donnee);

Donnee* lireCsv(char * chemin, int *taille);

void afficherDonnee(Donnee donnee);

static void affierListeChaineeDonnees(ListeChainee * liste);

void afficherListeDonnees(Donnee * liste, int taille);

static void supprimerListeChainee(ListeChainee * liste);

static Donnee * convertirEnTableau(ListeChainee * listeChainee);

Donnee * copierTableau(Donnee * tab, int taille);

