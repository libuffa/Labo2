#include <stdio.h>
#include <stdlib.h>
#define s scanf(
#define p printf(
#define qEmpl 6

typedef struct {
   char nombre[50];
   char sexo;
   int hsTrabajadas;
   int sueldoHs;
} empleado;

void burbujeoBanderaNombre(empleado v[],int tam){
    int i,top=tam,flag=1;
    empleado aux;
    while(flag!=0){
        flag=0;
        for(i=1;i<top;i++){
            if(strcmp(v[i].nombre,v[i-1].nombre)<0){
                aux=v[i];
                v[i]=v[i-1];
                v[i-1]=aux;
                flag=1;
            }
        }
        top--;
    };
}

void burbujeoBanderaHsTrab(empleado v[],int tam){
    int i,top=tam,flag=1;
    empleado aux;
    while(flag!=0){
        flag=0;
        for(i=1;i<top;i++){
            if(v[i].hsTrabajadas<v[i-1].hsTrabajadas){
                aux=v[i];
                v[i]=v[i-1];
                v[i-1]=aux;
                flag=1;
            }
        }
        top--;
    };
}

void mostrarNombres(empleado v[],int tam)
{
    int i;
    for(i=0;i<tam;i++) p"%s\n",v[i].nombre);
}

int busquedaBinaria(empleado v[],int min,int max,char val[50])
{
    int pivot=(min+max)/2;
    if (strcmp(v[pivot].nombre,val)>0 && pivot>0 && pivot<max) busquedaBinaria(v,min,pivot,val);
    else if(strcmp(v[pivot].nombre,val)<0 && pivot>0 && pivot>min) busquedaBinaria(v,pivot,max,val);
    else return pivot;
}

void main1(){
    empleado vec[qEmpl];
    char val[50];
    int i,valBuscado;
    for (i=0;i<qEmpl;i++){
        p"\nIngrese nombre de empleado\n");
        s"%s",&vec[i].nombre);
        fflush(stdin);
        p"Ingrese sexo del empleado\n");
        s"%c",&vec[i].sexo);
        fflush(stdin);
        p"Ingrese horas trabajadas en el mes\n");
        s"%d",&vec[i].hsTrabajadas);
        fflush(stdin);
        p"Ingrese sueldo por hora del empleado %s\n", vec[i].nombre);
        s"%d",&vec[i].sueldoHs);
        fflush(stdin);
    }
    mostrarNombres(vec,qEmpl);

    burbujeoBanderaNombre(vec,qEmpl);

    burbujeoBanderaHsTrab(vec,qEmpl);

    p"Ingrese nombre de empleado a buscar\n");
    s"%s",val);
    fflush(stdin);

    valBuscado=busquedaBinaria(vec,0,qEmpl,val);
    if(strcmp(val,vec[valBuscado].nombre)==0 && valBuscado<qEmpl)
        p"El valor %s se encuentra en la posicion %d\n",vec[valBuscado].nombre,valBuscado+1);
    else
        p"El valor no se encuentra en el vector\n");

    return;
}
