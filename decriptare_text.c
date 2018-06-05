#include "functii.h"

char* decriptare_text(char* text)
{

    char text_decriptat[1000]="";
    char *aux;
    char separatori[]=" ,.;:!?-\0";
    char cuvant[1000]="";
    int i;

    for(i=0; i<=strlen(text); i++)
    {
        if(strchr(separatori, text[i]) != NULL)
        {
            cuvant[strlen(cuvant)] = '\0';
            strcat(text_decriptat, decriptare_cuvant(cuvant));
            text_decriptat[strlen(text_decriptat)] = text[i];
            memset(cuvant,0,strlen(cuvant));
        }else{
            cuvant[strlen(cuvant)]=text[i];
        }
    }

    text = text_decriptat;
    return text;
}
