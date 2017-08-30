#include "stdio.h"
#include "stdlib.h"

void ingresarValores(int *arreglo,int tamanio)
{
    int i;
    printf("Ingrese valores del arreglo:\n");
    for(i=0;i<tamanio;i++) scanf("%d",&arreglo[i]);
}
void intercambiarValores (int *arreglo,int tamanio)
{
    int i,aux;
    for(i=0;i<tamanio/2;i++)
    {
        aux=arreglo[i];
        arreglo[i]=arreglo[tamanio-i-1];
        arreglo[tamanio-i]=aux;
    }
}

void mostrarValores (int *arreglo,int tamanio)
{
    int i;
    for(i=0;i<=tamanio;i++)
    {
        printf("%d\n",arreglo[i]);
    }
}

main()
{
    int i,tam;
    printf("ingrese tamanio del array:\n");
    scanf("%d",&tam);
    int array[tam];
    ingresarValores(&array,tam);
    intercambiarValores(&array,tam);
    mostrarValores(&array,tam);
    system("Pause");
}
