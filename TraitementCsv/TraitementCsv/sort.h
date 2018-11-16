#ifndef SORT_H
#define SORT_H

#include <stdlib.h>
#include <stdio.h>
#include <errno.h>

#include "donnees.h"
#include "action.h"

void sort(struct Donnee *a, int n, int (cmp)(Donnee *, Donnee *));

Donnee * reverseList(Donnee * liste, int taille);

void sort_reverse(Donnee * a, int n, int (cmp)(Donnee *, Donnee *));

#endif