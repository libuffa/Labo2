#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define T 10

int main()
{
    int vector[T];

    insertarValor(vector,T);
    printf("\n");
    printf("Ordenamiento por burbujeo de bandera\n");
    burbujeoBandera(vector,T);
    printf("Ordenamiento por burbujeo\n");
    burbujeo(vector,T);
    printf("Ordenamiento por seleccion\n");
    seleccion(vector,T);
    printf("Ordenamiento por insercion\n");
    insercion(vector,T);
    return 0;
}
