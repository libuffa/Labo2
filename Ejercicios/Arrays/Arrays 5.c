#include "stdio.h"

void insertarValor(float *arreglo)
{
    float x;
    int f=1,i;
    while(f!=0)
    {
        printf("Ingrese la posicion del arreglo:\n");
        scanf("%d",&i);
        printf("Ingrese el valor:\n");
        scanf("%f",&x);
        arreglo[i]=x;
        printf("Para finalizar ingrese 0\n");
        scanf("%d",&f);
    }
}

void mostrarDatos(float *arreglo)
{
    int i;
    for(i=0;i<10;i++) printf("%.2f\n",arreglo[i]);
}

main()
{
    float arreglo[9];
    insertarValor(arreglo);
    printf("Valores del arreglo:\n");
    mostrarDatos(arreglo);
}
