#include <stdio.h>
#include "funciones.h"

void insertarValor(int v[],int tam)
{
    int i;
    v[tam];
    printf("\nInsertar valores randomizados\n");
    for(i=0;i<tam;i++) v[i]=rand()%50;
    mostrarDatos(v,tam);
}

void mostrarDatos(int v[],int tam)
{
    int i;
    v[tam];
    for(i=0;i<tam;i++) printf("%d\n",v[i]);
}

void burbujeoBandera(int v[],int tam)
{
    int i,aux,flag=0,cont=0;
    do
    {
        flag=0;
        for(i=1;i<tam;i++)
        {
            if(v[i]<v[i-1])
            {
                aux=v[i];
                v[i]=v[i-1];
                v[i-1]=aux;
                flag=1;
            }
        }
        tam--;
        cont++;
    }while(flag>0);
    tam=10;
    printf("Cantidad de pasadas: %d\n",cont);
    mostrarDatos(v,tam);
    system("pause");
    insertarValor(v,tam);
}

void burbujeo(int v[],int tam)
{
    int i,f,aux,cont=0;
    for(i=0;i<tam;i++)
    {
        for(f=1;f<tam;f++)
        {
            if(v[f]<v[f-1])
            {
                aux=v[f];
                v[f]=v[f-1];
                v[f-1]=aux;
            }
            cont++;
        }
        tam--;
    }
    tam=10;
    printf("Cantidad de pasadas: %d\n",cont);
    mostrarDatos(v,tam);
    system("pause");
    insertarValor(v,tam);
}

void seleccion(int v[],int tam)
{
    int i,f,min=0,aux,cont=0,flag=0;
    for(i=0;i<tam;i++)
    {
        min=i;
        for(f=i;f<tam;f++)
        {
            if(v[f]<v[min])
            {
                min=f;
                flag=1;
                cont++;
            }
        }
        if(flag==1)
        {
            aux=v[i];
            v[i]=v[min];
            v[min]=aux;
        }
        flag=0;
    }
    printf("Cantidad de pasadas: %d\n",cont);
    mostrarDatos(v,tam);
    system("pause");
    insertarValor(v,tam);
}

void insercion(int v[],int tam)
{
    int o[tam],i,j,f,k,cont=0;
    o[0]=v[0];
    for(i=1;i<tam;i++)
    {
        f=v[i];
        j=i-1;
        while((o[j]>f) && j>=0)
        {
            o[j+1]=o[j];
            j--;
            cont++;
        }
        o[j+1]=f;
    }
    for(i=0;i<tam;i++) v[i]=o[i];
    printf("Cantidad de pasadas: %d\n",cont);
    mostrarDatos(v,tam);
    system("pause");
}
