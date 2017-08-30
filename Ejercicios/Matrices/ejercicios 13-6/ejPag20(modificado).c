#include <stdio.h>
#include <stdlib.h>
#define s scanf(
#define p printf(
#define NUMEMPLE 2
#define NUMMES 3


typedef struct
{
    char n[50];
    float v[NUMMES];
}Empleado;

void cargaMatriz(Empleado m[]);

void emiteMatriz(Empleado m[]);

void emiteMatrizXdirF(Empleado *ventas);

float calculoMedia(Empleado * ventas);

main()
{
    Empleado persona[NUMEMPLE];
    int i;
    cargaMatriz(persona);
    emiteMatriz(persona);
    for (i=0; i < NUMEMPLE; i++) emiteMatrizXdirF(&persona[i]);
    for (i=0; i < NUMEMPLE; i++)
        printf("\nLa venta media del empleado %s es %.2f\n", persona[i].n, calculoMedia(&persona[i]));
    system("pause");
    return 0;
}

void cargaMatriz(Empleado m[]){
    int i, j;
    for (i=0; i < NUMEMPLE; i++)
    {
        printf("Ingrese nombre empleado\n");
        scanf("%s",&m[i].n);
        for (j=0; j < NUMMES; j++)
        {
            printf ("Ingrese venta empleado %s mes %d\n", m[i].n,j+1);
            scanf("%f", &m[i].v[j]);
        }
    }
}
void emiteMatriz(Empleado m[])
{
    int i, j;
    for (i=0; i < NUMEMPLE; i++)
    {
        printf("\n");
        printf ("%s:\t", m[i].n);
        for (j=0; j < NUMMES; j++)
            printf ("%.2f\t", m[i].v[j]);
    }
    printf("\n\n");
}

void emiteMatrizXdirF(Empleado *persona)
{
    int i, j;
    for (i=0; i < NUMMES; i++)
        printf ("%.2f\t",(*persona).v[i]);
    printf("\n\n");
}

float calculoMedia(Empleado *persona)
{
    float media=0.0;
    int i;
    for (i=0; i < NUMMES; i++)
        media+=(*persona).v[i];
    media/=NUMMES;
    return media;
}
