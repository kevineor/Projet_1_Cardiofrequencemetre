#include "action.h"

int compare_by_date(Donnee *a, Donnee *b)
{
	return a->date < b->date ? -1 : a->date > b->date;
	/*
		- a->date < b->date : -1
		- a->date = b->date : 0
		- a->date > b->date : 1
	*/
}

int compare_by_pouls(Donnee *a, Donnee *b)
{
	return a->pouls < b->pouls ? -1 : a->pouls > b->pouls;
	/*
		- a->pouls < b->pouls : -1
		- a->pouls = b->pouls : 0
		- a->pouls > b->pouls : 1
	*/
}


//renvoie l'indice de la liste contenant la donnee, -1 si non trouvé
int rechercherDate(Donnee * liste, int taille, int date)
{
	int trouve = -1;
	int i;
	for (i = 0; i < taille; i++)
	{
		if (liste[i].date == date)
		{
			trouve = i;
			break;
		}
	}
	return trouve;
}


double moyenneIntervalle(Donnee *liste, int taille, int tempsA, int tempsB)
{
	double moyenne = 0.0;
	double nombre = 0.0;
	int i;
	for (i = 0; i < taille; i++)
	{
		if (liste[i].date <= max(tempsA, tempsB) && liste[i].date >= min(tempsA, tempsB))
		{
			moyenne = moyenne + (double)liste[i].pouls;
			nombre = nombre + 1.0;
		}
	}
	return (moyenne / nombre);
}

Donnee minPouls(Donnee* liste, int taille)
{
	Donnee minActuel;
	minActuel.pouls = liste[0].pouls;
	int i;
	for (i = 0; i < taille; i++)
	{
		if (minActuel.pouls > liste[i].pouls)
		{
			minActuel = liste[i];
		}
	}
	return minActuel;
}

Donnee maxPouls(Donnee* liste, int taille)
{
	Donnee minActuel;
	minActuel.pouls = liste[0].pouls;
	int i;
	for (i = 0; i < taille; i++)
	{
		if (minActuel.pouls < liste[i].pouls)
		{
			minActuel = liste[i];
		}
	}
	return minActuel;
}


//Fonction de tri fusion (3eme arg pointeur vers fonction de comparaison
void sort(struct Donnee *a, int n, int (cmp)(Donnee *, Donnee *)) {
	int p0, e0, e1, strd = 1;

	Donnee *tmp, *tmp0, *orig = a;

	if ((tmp = malloc(n * sizeof(Donnee))) == NULL) {
		fprintf(stderr, "Unable to malloc enough memory in sorting function.\n");
		exit(-1);
	}

	for (; strd < n;) {
		for (p0 = 0; p0 < (n - (2 * strd)) + 1; p0 = p0 + 2 * strd) {
			e0 = p0 + strd;
			e1 = e0 + strd;

			fuse(a, tmp, p0, e0, e0, e1, cmp);
		}
		if (p0 < n) {
			e0 = p0 + strd;
			e1 = e0 + strd;

			if (e0 > n) e0 = n;
			if (e1 > n) e1 = n;

			fuse(a, tmp, p0, e0, e0, e1, cmp);
		}

		tmp0 = a;
		a = tmp;
		tmp = tmp0;

		strd *= 2;
	}

	if (n >= 2 && tmp == orig) {
		for (p0 = 0; p0 < n; ++p0) {
			orig[p0] = a[p0];
		}
	}
}

//Fonction necessaire au tri fusion
void fuse(Donnee *a, Donnee *tmp, int s0, int e0, int s1, int e1, int (cmp)(struct Donnee *, struct Donnee *)) {
	int i0 = s0;
	for (; i0 < e1; ++i0) {
		if (s1 == e1 || (s0 < e0 && (cmp(&a[s0], &a[s1]) <= 0))) {
			tmp[i0] = a[s0];
			s0++;
		}
		else {
			tmp[i0] = a[s1];
			s1++;
		}
	}
}


//Fonction pour inverser une liste de données
Donnee* reverseList(Donnee *liste, int taille)
{

	Donnee *reversed = malloc(taille * sizeof(Donnee));
	Donnee temp;
	int i;
	int fin = taille - 1;
	for (i = 0; i < taille / 2; i++)
	{
		temp = liste[i];
		liste[i] = liste[fin];
		liste[fin] = temp;
		fin--;
	}
	return reversed;
}

//Fonction de tri inverse
void sort_reverse(struct Donnee *a, int n, int (cmp)(Donnee *, Donnee *))
{
	sort(a, n, cmp);
	reverseList(a, n);
}

