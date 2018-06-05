#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h>
#include "functii.h"


int main(){

char text[1000]="";
    char text_cr[1000]="";
    char text_decr[1000]="";

    srand(time(NULL));


    printf("Se citeste:");

    gets(text);

    strcpy(text_cr, cr_text(text));
    printf("\n%s\n", text_cr);

    strcpy(text_decr, decriptare_text(text_cr));
    printf("\n%s\n", text_decr);
}
