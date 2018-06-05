#include "functii.h"

char* cr_text(char* text)
{
    char text_criptat[1000]="";
    char separatori[]=" ,.;:!?-\0";
    char cuvant[1000]="";
    int i;

    for(i=0; i<=strlen(text); i++)
    {
        if(strchr(separatori, text[i]) != NULL)
        {
            cuvant[strlen(cuvant)]='\0';
            strcat(text_criptat, cr_word(cuvant));
            text_criptat[strlen(text_criptat)]=text[i];
            memset(cuvant,0,strlen(cuvant));
        }
        else
        {
            cuvant[strlen(cuvant)]=text[i];
        }
    }

    text = text_criptat;
    return text;
}
