#include <stdio.h>
#include <stdlib.h>

int main1(){
    int v[10],tam=10,i=0,valbusq,flag=0;
    insertarValor(v,tam);
    burbujeoBandera(v,tam);
    printf("Indique el valor a buscar:\n");
    scanf("%d",&valbusq);
    while (flag==0 && i<tam){
        if (v[i]==valbusq){
                flag=1;
                printf("El valor buscado se encuentra en la posicion: %d\n",i);
        }
        i++;
    };
    if (flag==0) printf("El valor buscado no se encuentra en el vector\n");
}
