#pragma once

#include "donnees.h"
#include "sort.h"

//Fonctions de comparaisons utilisées pour trier avec les fonctions de tri contenues dans le fichier "sort.c"
int compare_by_date(Donnee * a, Donnee * b);

int compare_by_pouls(Donnee * a, Donnee * b);

int rechercherDate(Donnee * liste, int taille, int date);

int rechercherPouls(Donnee * liste, int taille, int pouls);
