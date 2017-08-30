#include "stdio.h"

main ()
{
    int valor;
    float cuenta;
    do {
        printf("escriba un valor distinto de 0\n");
        scanf("%d",&valor);
        cuenta= (float) 1/valor;
        }while(valor == 0);
        printf("el reciproco del número ingresado es %.2f",cuenta);

    }








