#include "functii.h"

char random_letter(int ce_fel_litera, char exceptie_1, char exceptie_2)
{

    char letter;

    letter = random_no(26, -1) + 64;

    if(ce_fel_litera==0)
        letter+=32;

    if(ce_fel_litera!=0 && ce_fel_litera!=1)
    {
        ce_fel_litera = random_no(2,-1)-1;
        letter = random_letter(ce_fel_litera, exceptie_1, exceptie_2);
    }

    if(letter==exceptie_1 || letter==exceptie_2)
        return random_letter(ce_fel_litera, exceptie_1, exceptie_2);

    return letter;
}

