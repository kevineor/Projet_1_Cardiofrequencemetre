#include "GenerationCode.h"

void fon(void)
{
    FILE *f=fopen("text.txt","w");
    fprintf(f ,"La variable est %d", 2);
    fclose(f);
}
