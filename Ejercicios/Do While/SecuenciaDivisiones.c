#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int main()
{
    int cont=0;
    float  cuenta,suma;
    do
    {
        cont++;
        printf("\n");
        cuenta=(float) 1 / cont;
        printf("%f\n",cuenta);
        suma=suma+cuenta;
    }while(cont <= 20);
    printf("La suma de todos los valores va a ser %.2f\n",suma);
    return 0;
}
