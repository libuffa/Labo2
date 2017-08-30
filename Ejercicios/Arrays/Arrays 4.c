#include "stdio.h"

void ingresarValores(int *numero)
{
    int i;
    printf("Ingrese los valores del vector:\n");
    for(i=0;i<10;i++) scanf("%d",&numero[i]);
}

void mostrarDatos(int *numero)
{
    int i,f,flag=0;
    printf("\nImpresion de numeros sin repeticiones\n");
    for(i=0;i<10;i++)
    {
        for(f=0;f<i;f++) if(numero[f]==numero[i]) flag=1;
        if(flag==0) printf("%d\n",numero[i]);
        flag=0;
    }
}

main()
{
    int num[9];
    ingresarValores(num);
    mostrarDatos(num);
}
