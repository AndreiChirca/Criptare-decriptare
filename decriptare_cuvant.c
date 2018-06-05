#include "functii.h"

char* decriptare_cuvant(char* cuvant)
{
    char cuvant_decriptat[1000]="";
    char letter = cuvant[0];
    int nr_aparitii=0;
    int i;

    for(i=0; i<=strlen(cuvant); i++)
    {
        if(cuvant[i]==letter){
            nr_aparitii+=1;
        }else{
            if(Prim(nr_aparitii)==1)
                cuvant_decriptat[strlen(cuvant_decriptat)]=letter;
            nr_aparitii=1;
            letter=cuvant[i];
        }
    }

    cuvant=cuvant_decriptat;
    return cuvant;
}
