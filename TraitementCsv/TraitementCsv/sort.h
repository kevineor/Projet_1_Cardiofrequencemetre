#ifndef SORT_H
#define SORT_H

#include <stdlib.h>
#include <stdio.h>
#include <errno.h>

#include "donnees.h"

void sort(int n, struct Donnee *a, int (cmp)(Donnee *, Donnee *));

#endif