#include "menu.h"

void afficherMenu(void)
{
	fprintf(stdout, "---------MENU---------\n");
	fprintf(stdout, "Choix 1 : Afficher le csv dans l'ordre actuel\n");
	fprintf(stdout, "Choix 2 : Afficher les donnees triees\n");
	fprintf(stdout, "Choix 3 : Rechercher le pouls pour un temps donne\n");
	fprintf(stdout, "Choix 4 : Afficher une moyenne de pouls pour une plage de temps\n");
	fprintf(stdout, "Choix 5 : Afficher le nombre de donnees\n");
	fprintf(stdout, "Choix 6 : Afficher le pouls maximum ou minimum\n");
	fprintf(stdout, "Choix 7 : Quitter le programme\n");
}

void menu(void)
{
	int taille;
	Donnee* listeDonnee = lireCsv("../../FichierTestCSV.csv", &taille);
	//Nous copions le tableau pour en avoir un temporaire que l'on peut trier
	Donnee* listeTemp = copierTableau(listeDonnee, taille);
	int choix;
	int choixTri;
	int choixRecherche;
	int dateTrouvee;
	int plageMin, plageMax;

	//cette variable nous sert de variable temporaire permettant de vider le buffet de lecture stdin
	char c;
	do
	{
		afficherMenu();
		//Ce code permet de verifier que la saisie dans le scanf est bien un int
		while (scanf("%d", &choix) < 1)
		{
			fprintf(stdout, "ERREUR : VEUILLEZ ENTRER UN NOMBRE :\n");
			//On vide le buffer d'entrée
			while ((c = getchar()) != '\n' && c != EOF);
		}

		switch (choix)
		{
			//CAS CHOIX 1
		case 1:
			afficherListeDonnees(listeDonnee, taille);
			break;
			//CAS CHOIX 2
		case 2:
			fprintf(stdout, "\n\n	Choix 1 : Tri par date croissant\n");
			fprintf(stdout, "	Choix 2 : Tri par date decroissant\n");
			fprintf(stdout, "	Choix 3 : Tri par pouls croissant\n");
			fprintf(stdout, "	Choix 4 : Tri par pouls decroissant\n");
			while (scanf("%d", &choixTri) < 1)
			{
				fprintf(stdout, "ERREUR : VEUILLEZ ENTRER UN NOMBRE :\n");
				//On vide le buffer d'entrée
				while ((c = getchar()) != '\n' && c != EOF);
			}
			switch (choixTri)
			{
			case 1:
				sort(listeTemp, taille, compare_by_date);
				afficherListeDonnees(listeTemp, taille);
				break;
			case 2:
				sort_reverse(listeTemp, taille, compare_by_date);
				afficherListeDonnees(listeTemp, taille);
				break;
			case 3:
				sort(listeTemp, taille, compare_by_pouls);
				afficherListeDonnees(listeTemp, taille);
				break;
			case 4:
				sort_reverse(listeTemp, taille, compare_by_pouls);
				afficherListeDonnees(listeTemp, taille);
				break;
			default:
				fprintf(stdout, "Erreur choix de tri");
				break;
			}
			break;
			
			//CAS CHOIX 3
		case 3:
			fprintf(stdout, "\nA quelle date cherchez vous la frequence ?\n");

			while (scanf("%d", &choixRecherche) < 1)
			{
				fprintf(stdout, "ERREUR : VEUILLEZ ENTRER UN NOMBRE :\n");
				//On vide le buffer d'entrée
				while ((c = getchar()) != '\n' && c != EOF);
			}
			dateTrouvee = rechercherDate(listeDonnee, taille, choixRecherche);
			if (dateTrouvee > -1)
			{
				afficherDonnee(listeDonnee[dateTrouvee]);

			}
			else
			{
				fprintf(stdout, "Date non trouvée\n");
			}
			break;

			//CAS CHOIX 4
		case 4:
			fprintf(stdout, "\nEntrez la plage min :\n");
			while (scanf("%d", &plageMin) < 1)
			{
				fprintf(stdout, "ERREUR : VEUILLEZ ENTRER UN NOMBRE :\n");
				//On vide le buffer d'entrée
				while ((c = getchar()) != '\n' && c != EOF);
			}
			fprintf(stdout, "\nEntrez la plage max :");
			while (scanf("%d", &plageMax) < 1)
			{
				fprintf(stdout, "ERREUR : VEUILLEZ ENTRER UN NOMBRE :\n");
				//On vide le buffer d'entrée
				while ((c = getchar()) != '\n' && c != EOF);
			}
			fprintf(stdout, "Moyenne : %lf\n", moyenneIntervalle(listeDonnee, taille, plageMin, plageMax));
			break;

			//CAS CHOIX 5
		case 5:
			fprintf(stdout, "Nombre de donnees contenues dans le fichier : %d\n", taille);
			break;

			//CAS CHOIX 6
		case 6:
			fprintf(stdout, "\n\n	Choix 1 : Recherche minimum pouls\n");
			fprintf(stdout, "	Choix 2 : Recherche maximum pouls\n");
			while (scanf("%d", &choixRecherche) < 1)
			{
				fprintf(stdout, "ERREUR : VEUILLEZ ENTRER UN NOMBRE :\n");
				//On vide le buffer d'entrée
				while ((c = getchar()) != '\n' && c != EOF);
			}
			switch (choixRecherche)
			{
			case 1:
				fprintf(stdout, "Valeur min du CSV : \n");
				afficherDonnee(minPouls(listeDonnee, taille));
				break;
			case 2:
				fprintf(stdout, "Valeur max du CSV : \n");
				afficherDonnee(maxPouls(listeDonnee, taille));
				break;
			default:
				fprintf(stdout, "Erreur : choix inconnu\n");
				break;
			}
			break;

			//CAS CHOIX QUITER
		case 7:
			//Choix correspondant a quitter, le while va sortir de sa boucle tout seul
			break;
			
			//CAS CHOIX INCONNU
		default:
			fprintf(stdout, "Erreur : choix ne correspondant a rien, veuillez reessayer\n");
			//Le cas default ne nous fait pas sortir de la boucle, l'utilisateur va pouvoir reesayer
			break;
		}
	} while (choix != 7);

	//liberation de l'allocation de memoire
	free(listeDonnee);
	free(listeTemp);
}
