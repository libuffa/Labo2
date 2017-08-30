#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int parImpar(int *pa);

main (void)
{
    int numero;

    printf("Ingrese numero:\n");
    scanf("%d",&numero);

    if(parImpar(&numero))
        printf("Es par");
    else
        printf("Es impar");

    return 0;
}

int parImpar(int *pa)
{
    if(*pa%2 == 0)
        return 1;
    else
        return 0;
};
