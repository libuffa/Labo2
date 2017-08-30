#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#define M 2

typedef struct
{
    int suc;
    char barr[30];
    float promvtasem;
}sucursal;

void cargarSuc(sucursal vs[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        vs[i].suc=i+1;

        printf("Ingresar Barrio:\n");
        scanf("%s",vs[i].barr);
    }
}

void cargarVen(float mv[][M],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        printf("Cargar ventas del mes %d\n",i+1);
        for(j=0;j<M;j++)
            scanf("%f",&mv[i][j]);
    }
}

void cargarProm(sucursal vs[],float mv[][M],int n)
{
    int i,j;
    float summv=0.0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<M;j++)
            summv=summv+mv[i][j];
        vs[i].promvtasem=summv/n;
        summv=0.0;
    }
}

void inicioVecPos(int vp[],int n)
{
    int i;
    for(i=0;i<n;i++)
        vp[i]=-1;
}

float leer(float *x)
{
    printf("Ingresar valor\n");
    scanf("%f",x);
}

void supera(sucursal vs[],int vp[],int n,float x,int *cs)
{
    int i;
    *cs=0;
    for(i=0;i<n;i++)
        if(vs[i].promvtasem>x)
        {
            vp[*cs]=i;
            ++*cs;
        }

}

void emite(sucursal vs[],int vp[],int cs)
{
    printf("sucursales que superan x\n");
    int i;
    for(i=0;i<cs;i++)
        printf("sucursal %d\nBarrio %s\nPromedio de ventas %.2f\n\n",vs[vp[i]].suc,vs[vp[i]].barr,vs[vp[i]].promvtasem);
}

void ordenaNom(sucursal vs[],int n)
{
    int i,flag=1;
    sucursal aux;
    while(flag>0)
    {
        flag=0;
        for(i=1;i<n;i++)
            if(strcmp(vs[i-1].barr , vs[i].barr) > 0)
            {
                aux=vs[i];
                vs[i]=vs[i-1];
                vs[i-1]=aux;
                flag=1;
            }
        n--;
    }
}

void emiteOrd(sucursal vs[],int n)
{
    int i;
    printf("sucursales ordenadas\n");
    for(i=0;i<n;i++)
        printf("sucursal %d\nBarrio %s\nPromedio de ventas %.2f\n\n",vs[i].suc,vs[i].barr,vs[i].promvtasem);
}

main()
{
    const int N=2;
    int vecPos[N], contsuc;
    sucursal vecSuc[N];
    float matVen[N][M],x;

    cargarSuc(vecSuc,N);

    cargarVen(matVen,N);

    cargarProm(vecSuc,matVen,N);

    inicioVecPos(vecPos,N);

    leer(&x);

    supera(vecSuc,vecPos,N,x,&contsuc);

    emite(vecSuc,vecPos,contsuc);

    ordenaNom(vecSuc,N);

    emiteOrd(vecSuc,N);

    return 0;
}
