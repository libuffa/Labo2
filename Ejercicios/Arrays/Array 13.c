#include "stdio.h"
#define DIM 10

void imprimirDatos(int f[])
{
    int i=0;
    while(i<DIM){
        printf("%d\n", *(f+i));
        i++;
    }
}

void invertir(int v[], int f[]){
    int *p, i=DIM-1,j=0;
    while(i>=0){
        p=f+j;
        *p=*(v+i);
        j++;
        i--;
    };
}

main()
{
    int v[DIM] = {1,2,3,4,5,6,7,8,9,10}, f[DIM];
    invertir(v,f);
    imprimirDatos(f);
}
