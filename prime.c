#include "functii.h"

int e_prim(int nr)
{
    int prim=1;
    int d=2;
    while(d<=sqrt(nr) && prim==1)
    {
       if(nr%d==0)
         prim=0;
       d++;
    }
        return prim;
}
