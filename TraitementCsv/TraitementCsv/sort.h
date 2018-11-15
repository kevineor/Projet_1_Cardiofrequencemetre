#ifndef SORT_H
#define SORT_H

#include <stdlib.h>
#include <stdio.h>
#include <errno.h>

#include "donnees.h"
#include "action.h"

void sort(int n, struct Donnee *a, int (cmp)(Donnee *, Donnee *));

Donnee * reverseList(Donnee * liste, int taille);

void sort_reverse(int n, Donnee * a, int(cmp));

#endif