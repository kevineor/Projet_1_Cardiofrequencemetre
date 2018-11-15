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

