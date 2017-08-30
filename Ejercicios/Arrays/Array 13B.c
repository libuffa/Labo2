#include "stdio.h"
#define DIM 10

void intercambiar(int *vector)
{
    int i,*p1,aux;
    for(i=0;i<DIM/2;i++)
    {
        p1=&vector[DIM-1]-i;
        aux=vector[i];
        vector[i]=*p1;
        *p1=aux;
    }
}

void mostrarDatos(int *vector)
{
    int i;
    for(i=0;i<DIM;i++) printf("%d\n",vector[i]);
}

main()
{
    int v[DIM] = {1,2,3,4,5,6,7,8,9,10};
    intercambiar(v);
    mostrarDatos(v);
}
