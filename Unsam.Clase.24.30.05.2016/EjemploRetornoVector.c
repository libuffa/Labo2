#include "stdio.h"

//EL SIGUIENTE EJEMPLO SIN STATIC
//ES ERR�NEO, el vector est� declarado dentro de la funci�n, cuando el stack memory se descargue, se destruir�
main(){
    mifuncion();
    for(i=0;i<10;i++)
        printf("Los valores del vector son: %d",&vec)
}

int *mifuncion(){
    static int vec[10]; //AGREGANDO STATIC (modificador de almacenamiento), congelo el vector,
                        //lo guardo en otro sitio de memoria distinto (heap). Para ver mas: http://stackoverflow.com/questions/93039/where-are-static-variables-stored-in-c-c
    //...
    return vec;
}

//otros ejemplos de valores que se guardan en heap son new(c++) o malloc(c). malloc aparece en la galeria alloc.h
