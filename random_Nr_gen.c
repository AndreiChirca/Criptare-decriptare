#include "functii.h"

int random_no(int nr_max,int ce_fel_nr)
{

    srand(rand());
    int numar_generat;
    int vector_prime[37]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101,103,107,109,113,127,131,137,139,149,151};

    if(ce_fel_nr==0){
         numar_generat = (rand() % nr_max)+1;
            if(Prim(numar_generat)!=0)
                return random_no(nr_max, ce_fel_nr);
    }
    else
    if(ce_fel_nr==1){
           numar_generat = (rand() % 35);
            numar_generat = vector_prime[numar_generat];
            if(numar_generat > nr_max)
                return random_no(35, ce_fel_nr);

    }
    else
        {
             numar_generat = (rand() % nr_max)+1;

        }

    return numar_generat;
}
