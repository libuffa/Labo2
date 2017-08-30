#include "stdio.h"

void sumauno(int vec[], int c);

main(){
    int v[1000],i;
    for(i=0;i<1000;i++)
        v[i]=i*2+1;
    sumauno(v,1000); //NOMBRE DE VECTOR SIN CORCHETES, lo paso como PUNTERO.
    for(i=0;i<1000;i++)
        printf("%d\n",v[i]);
    return 0;
}

void sumauno(int vec[], int c){ //"int vec[]" es igual a "int *vec"
    int i;
    for(i=0;i<c;i++)
        vec[i]++;
    return;
}

/*REGLAS NEMOTÉCNICAS:

PROTOTIPO: Corchetes vacíos
LLAMADA: Sin corchetes
DECLARACION: Corchetes vacíos
