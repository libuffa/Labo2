#include "stdio.h"

void insertarValor(int *arreglo)
{
    int f=1,i=0;
    while(f!=0)
    {
        printf("Ingrese el valor:\n");
        scanf("%d",&arreglo[i]);
        i++;
        printf("Para finalizar ingrese 0\n");
        scanf("%d",&f);
    }
}

int leerEntero(int *arreglo,int entero)
{
    int i,cont=0;
    for(i=0;i<10;i++) if(entero==arreglo[i]) cont++;
    return cont;
}

main()
{
    int arreglo[9],ent,contador;
    insertarValor(arreglo);
    printf("Ingrese un numero entero:\n");
    scanf("%d",&ent);
    contador=leerEntero(arreglo,ent);
    if(contador>0) printf("El numero %d aparece %d veces en el arreglo\n",ent,contador);
}
