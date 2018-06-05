#include "functii.h"

char* cr_word(char* word)
{
    char word_cr[1000]="";
    char letter;
    int i, j, k;
    int no_random_letter;
    int same_letter;

    for(i=0; i<strlen(word); i++)
    {
        same_letter = random_no(6, 1);

        for(k=1; k<=same_letter; k++)
            word_cr[strlen(word_cr)]=word[i];

        same_letter = random_no(10, -1);

        for(j=1; j<=same_letter; j++)
        {
            same_letter = random_no(6, 0);
            letter=random_letter(-1, word[i], word[i+1]);
            for(k=1; k<=same_letter; k++)
                word_cr[strlen(word_cr)]= letter;
        }
    }

    word=word_cr;
    return word;
}

