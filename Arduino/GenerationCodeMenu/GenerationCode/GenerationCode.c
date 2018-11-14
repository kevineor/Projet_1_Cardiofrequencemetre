#include <stdio.h>
#include <stdlib.h>
#include "GenerationCode.h"

void fon(int z)
{
    FILE *f=fopen("C:\\Users\\vzonz\\Documents\\GitHub\\Projet_1_Cardiofrequencemetre\\Arduino\\ProgrammeCoeur\\param.h","w");
    fprintf(f ,"#ifndef PARAM_H_INCLUDED\n#define PARAM_H_INCLUDED \n// ce fichier va nous permettre de configurer la fa�on dont seront allume les LEDs \nstatic int z=%d; //On parametre le switch ici\nstatic int sel=0; // On param�tre la led � selectionner ici\n#endif // PARAM_H_INCLUDED", z);
    fclose(f);
}
