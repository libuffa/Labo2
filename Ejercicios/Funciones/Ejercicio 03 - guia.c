#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int maximoMinimo(int *a,int *b);

int main()
{
    int a, b, maximo;
    printf("Ingrese a y b\n")
    scanf ("%d%d", &a, &b);

    printf ("\nEl máximo de %d y %d es %d\n", a, b, maximoMinimo(&a,&b));

    return 0;
}

int maximoMinimo(int *a,int *b)
{
    if (*a> *b)
        return *a;
    else
        return *b;
}
