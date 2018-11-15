#include <stdio.h>
#include <stdlib.h>
#include "donnees.h"
#include "action.h"

int main()
{
	Donnee *listeDonnees;
	int taille = 0;
	listeDonnees = lireCsv("../../FichierTestCSV.csv", &taille);
	afficherListeDonnees(listeDonnees, taille);
	sort(taille, listeDonnees, compare_by_pouls);

	fprintf(stdout, "TRI PAR POULS \n");
	afficherListeDonnees(listeDonnees, taille);
	return 0;
}
