#include <stdio.h>
#include <stdlib.h>
#include "donnees.h"
#include "action.h"
#include "menu.h"

int main()
{
	Donnee *listeDonnees;
	int taille = 0;
	listeDonnees = lireCsv("../../FichierTestCSV.csv", &taille);
	choixMenu();

	return 0;
}
