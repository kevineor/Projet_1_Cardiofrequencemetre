#pragma once


#include <stdlib.h>
#include <stdio.h>
#include "donnees.h"

//Fonctions de comparaisons utilisées pour trier avec les fonctions de tri contenues dans le fichier "sort.c"
int compare_by_date(Donnee * a, Donnee * b);

int compare_by_pouls(Donnee * a, Donnee * b);

int rechercherDate(Donnee * liste, int taille, int date);

double moyenneIntervalle(Donnee * liste, int taille, int tempsA, int tempsB);

Donnee minPouls(Donnee * liste, int taille);

Donnee maxPouls(Donnee * liste, int taille);

void sort(struct Donnee *a, int n, int (cmp)(Donnee *, Donnee *));

void fuse(Donnee * a, Donnee * tmp, int s0, int e0, int s1, int e1, int(cmp)(Donnee *, Donnee *));

Donnee * reverseList(Donnee * liste, int taille);

void sort_reverse(Donnee * a, int n, int (cmp)(Donnee *, Donnee *));
