#include <stdio.h>
#include <stdlib.h>
#include "Libreria.h"
int busquedaBinaria(int v[],int min,int max,int val)
{
    int pivot=(min+max)/2;
    if (v[pivot]>val && pivot>0 && pivot<max) busquedaBinaria(v,min,pivot,val);
    else if(v[pivot]<val && pivot>0 && pivot>min) busquedaBinaria(v,pivot,max,val);
    else return pivot;
}
int main()
{
    int v[10],tam=10,m=0,valbusq,i;
    insertarValor(v,tam);
    printf("\nOrdenamiento\n");
    burbujeoBandera(v,tam);
    printf("Indique el valor a buscar:\n");
    scanf("%d",&valbusq);
    i=busquedaBinaria(v,m,tam,valbusq);
    if(valbusq==v[i] && i<tam) printf("El valor %d se encuentra en la posicion %d\n",valbusq,i+1);
    else printf("El valor no se encuentra en el vector\n");
}

