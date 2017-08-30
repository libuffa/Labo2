
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "string.h"

#define m 6
typedef struct {
    int suc;
    char barr[30];
    int promvtasem;
} sucursal;

void cargar_suc(sucursal vecsuc[], int n);
void emite_vec (sucursal vecsuc[], int n);
void cargar_ven (int matven[][m], int n);
void emite_matriz (int matven[][m],int n);
void carga_prom (sucursal vecsuc[], int matven[][m], int n);
void emite_vec_completo (sucursal vecsuc[],int n);
void inicio_vecpos (int vecpos[],int  n);
void emite_vecpos (int vecpos[], int n);
void leer(int *num);
void supera (sucursal vecsuc[], int vecpos[], int n, int num, int *contsuc);
void emite (sucursal vecsuc[], int vecpos[], int contsuc);
void ordena_nombre (sucursal vecsuc[], int n);
void emite_orden (sucursal vecsuc[], int n);

int main ()
{
    const int n=5;
    int vecpos[n], contsuc;
    sucursal vecsuc[n];
    int matven[n][m];
    int num;

    cargar_suc(vecsuc, n);
    emite_vec (vecsuc,n);
    printf("\n--------------------\n");
    cargar_ven (matven,n);
    emite_matriz (matven,n);
    printf("\n--------------------\n");
    carga_prom (vecsuc,matven,n);
    emite_vec_completo (vecsuc,n);
    printf("\n--------------------\n");
    inicio_vecpos (vecpos, n);
    emite_vecpos (vecpos,n);
    printf("\n--------------------\n");
    leer(&num);
    supera (vecsuc,vecpos,n,num,&contsuc);
    emite_vecpos (vecpos,n);
    printf("\n--------------------\n");
    emite (vecsuc, vecpos, contsuc);
    ordena_nombre (vecsuc,n);
    printf("\n--------------------\n");
    emite_orden (vecsuc,n);

}


void cargar_suc(sucursal vecsuc[], int n)
{
    int i;
    for (i=0;i<n;i++)
    {
        printf("Ingrese nombre de la sucursal %d\n", i+1);
        scanf("%s", vecsuc[i].barr);
        fflush(stdin);

        vecsuc[i].suc = i+1;
    }

}

void emite_vec (sucursal vecsuc[], int n)
{
    int i;
    for (i=0;i<n;i++)
    {
        printf("%d %s\n", vecsuc[i].suc, vecsuc[i].barr);
    }
}


void cargar_ven (int matven[][m], int n)
{
    int i, j;
    srand(time(NULL));

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            matven[i][j] = rand()%100;

        }
    }
}


void emite_matriz (int matven[][m],int n)
{
    int i, j;

    for(i=0;i<n;i++)
    {
        printf("\n");

        for (j=0;j<m;j++)
        {
            printf("-%d-", matven[i][j]);
        }
    }
}


void carga_prom (sucursal vecsuc[], int matven[][m], int n)
{
    int i,j, suma;

    for(i=0;i<n;i++)
    {
        suma = 0;

        for(j=0;j<m;j++)
        {
            suma = suma + matven[i][j];

        }
        vecsuc[i].promvtasem = (suma / m);

    }
}

void emite_vec_completo (sucursal vecsuc[],int n)
{
    int i;
    for (i=0;i<n;i++)
    {
        printf ("%d %s %d\n", vecsuc[i].suc, vecsuc[i].barr, vecsuc[i].promvtasem);
    }
}


void inicio_vecpos (int vecpos[],int  n)
{
    int i;

    for(i=0;i<n;i++)
    {
        vecpos[i] = -1;
    }
}

void emite_vecpos (int vecpos[], int n)
{
    int i;

    for (i=0;i<n;i++)
    {
        printf("%d ", vecpos[i]);

    }
}

void leer (int *num)
{
    printf("Ingrese un valor\n"),
    scanf("%d", num);
    fflush(stdin);
}

void supera (sucursal vecsuc[], int vecpos[], int n, int num, int *contsuc)
{
    int i;
    *contsuc=0;

    for (i=0;i<n;i++)
    {
        if (vecsuc[i].promvtasem > num)
        {
            vecpos[*contsuc] = i;

            (*contsuc)++;
        }
    }
}

void emite (sucursal vecsuc[], int vecpos[], int contsuc)
{
    int i;

    for (i=0;i<contsuc;i++)
    {
        printf("Sucursal: %d\n Barrio: %s\n promedio de venta: %d\n", vecsuc[vecpos[i]].suc, vecsuc[vecpos[i]].barr, vecsuc[vecpos[i]].promvtasem);
    }

}

void ordena_nombre (sucursal vecsuc[], int n)
{
    int i, j, bandera;
    sucursal aux;

    for (i=0;i<n;i++)
    {
        bandera=0;

        for (j=0;j<n;j++)
        {
            if (strcmp(vecsuc[j-1].barr, vecsuc[j].barr)>0)
            {
                aux = vecsuc[j];
                vecsuc[j] = vecsuc[j-1];
                vecsuc[j-1]= aux;

                bandera = 1;
            }
        }
         if (bandera == 0)
             i=n;

    }

}



void emite_orden (sucursal vecsuc[], int n)
{
    printf("SUCURSALES ORDENADAS POR NOMBRE\n");
    int i;
    for (i=0;i<n;i++)
    {
        printf("%s %d %d\n", vecsuc[i].barr, vecsuc[i].suc, vecsuc[i].promvtasem);
    }
}
