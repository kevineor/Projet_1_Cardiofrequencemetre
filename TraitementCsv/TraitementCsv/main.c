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
	sort_reverse(taille, listeDonnees, compare_by_pouls);

	fprintf(stdout, "TRI PAR POULS \n");
	afficherListeDonnees(listeDonnees, taille);
	fprintf(stdout, "recherche\n\n");
	int irecherche = rechercherDate(listeDonnees, taille, 100);
	if (irecherche > -1)
	{
		afficherDonnee(listeDonnees[irecherche]);
	}
	else
	{
		fprintf(stdout, "Donnee non trouvee");
	}
	return 0;
}
