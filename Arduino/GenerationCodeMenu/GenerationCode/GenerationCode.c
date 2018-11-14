#include "GenerationCode.h"

void fon(void)
{
    FILE *f=fopen("menu.h","w");
    fprintf(f ,"La variable est %d", 2);
    fclose(f);
}
