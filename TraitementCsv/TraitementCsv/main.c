#include <stdio.h>
#include <stdlib.h>
#include "donnees.h"

int main()
{
	Donnee *listeDonnees;
	int taille = 0;
	listeDonnees = lireCsv("../../FichierTestCSV.csv", &taille);
	afficherListeDonnees(listeDonnees, taille);
	return 0;
}
