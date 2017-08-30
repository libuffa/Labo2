#include "stdio.h"
#include "stdlib.h"

void ingresarValores(int *vector,int tam)
{
    int i;
    printf("Ingresar valores del vector:\n");
    for(i=0;i<tam;i++) scanf("%d",&vector[i]);
}

int suma(int *vector,int tam)
{
    int i,sum=0;
    for(i=0;i<tam;i++) sum=sum+vector[i];
    return sum;
}

int maximo(int *vector,int tam)
{
    int i,max=vector[0];
    for(i=0;i<tam;i++) if(vector[i]>max) max=vector[i];
    return max;
}

int minimo(int *vector,int tam)
{
    int i,min=vector[0];
    for(i=0;i<tam;i++) if(vector[i]<min) min=vector[i];
    return min;
}

int promedio(int *vector,int tam)
{
    int prom=(int)suma(vector,tam)/tam;
    return prom;
}

void superanPromedio(int *vector,int tam)
{
    int i;
    for(i=0;i<tam;i++) if(vector[i]>promedio(vector,tam)) printf("%d supera el promedio total\n",vector[i]);
}

int cantidadPares(int *vector,int tam)
{
    int i,cont=0;
    for(i=2;i<tam;i=i+2)cont++;
    return cont;
}

void multiplo(int *vector,int tam)
{
    int i;
    for(i=0;i<tam;i++) if(vector[i]%vector[tam]==0) printf("%d es multiplo de %d",vector[i],vector[tam]);
}

int cantidadMaximo(int *vector,int tam)
{
    int i,cont=0;
    for(i=0;i<tam;i++) if(vector[i]==maximo(vector,tam)) cont++;
    return cont;
}

void posicionMaximo(int *vector,int tam)
{
    int i;
    for(i=0;i<tam;i++) if(vector[i]==maximo(vector,tam)) printf("En la posicion %d aparece el maximo del vector\n",i);
}

void par(int *vector,int tam)
{
    int i;
    for(i=0;i<tam;i++) if(vector[i]%2==0) printf("%d es numero par\n",vector[i]);
}

void posicionPar(int *vector,int tam)
{
    int i;
    for(i=2;i<tam;i=i+2) printf("%d se encuentra en una posicion par\n",vector[i]);
}

void impar(int *vector,int tam)
{
    int i;
    for(i=0;i<tam;i++) if(vector[i]%2!=0) printf("%d es numero impar\n",vector[i]);
}

main()
{
    int i,tam;
    printf("ingrese tamanio del array:\n");
    scanf("%d",&tam);
    int vector[tam];
    ingresarValores(vector,tam);
    printf("La suma de los valores es de %d\n",suma(vector,tam));
    printf("El maximo de los valores es de %d\n",maximo(vector,tam));
    printf("El minimo de los valores es de %d\n",minimo(vector,tam));
    printf("El promedio de los valores es de %d\n",promedio(vector,tam));
    superanPromedio(vector,tam);
    printf("El vector tiene %d de posiciones par\n",cantidadPares(vector,tam));
    multiplo(vector,tam);
    printf("El vector tiene %d numeros maximos\n",cantidadMaximo(vector,tam));
    posicionMaximo(vector,tam);
    par(vector,tam);
    posicionPar(vector,tam);
    impar(vector,tam);
    system("Pause");
}
