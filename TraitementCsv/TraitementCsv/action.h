#pragma once

#include "donnees.h"
#include "sort.h"

//Fonctions de comparaisons utilis�es pour trier avec les fonctions de tri contenues dans le fichier "sort.c"
int compare_by_date(Donnee * a, Donnee * b);

int compare_by_pouls(Donnee * a, Donnee * b);

int rechercherDate(Donnee * liste, int taille, int date);

double moyenneIntervalle(Donnee * liste, int taille, int tempsA, int tempsB);
