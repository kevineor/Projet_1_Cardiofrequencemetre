#include <stdio.h>
#include <stdlib.h>
#include "donnees.h"

int main()
{
	Donnee *listeDonnees;
	listeDonnees = lireCsv("../../FichierTestCSV.csv");
	afficherListeDonnees(listeDonnees);
	return 0;
}
