#include "stdio.h"

void procesamientoNotas(float *promedioMax, int *totNotas);
void ingresoDatos(int *legajo, char *divison,int *nota, int year);
void promedioPorDiv(char division, int nota, int *contA, int *contB, int *contC, int *sumA, int *sumB, int *sumC);
void valorMax(float *promedioMax, float promedioA,float promedioB,float promedioC);

void main(){

float promedioMax=0;
int totNotas=0;

procesamientoNotas(&promedioMax, &totNotas);

printf("El total de notas procesadas es %i\n", totNotas);
printf("El mayor promedios de todos fue %.2f", promedioMax);

}

void procesamientoNotas(float *promedioMax, int *totNotas){

    char division;
    int nota, year, legajo=0, contA=0, contB=0, contC=0, sumA=0, sumB=0, sumC=0;
    float promedioA=0, promedioB=0, promedioC=0;
    printf("Bienvenido al sistema de procesamiento de promedios por division.\n");
    for(year=1;year<=5;year++){
        printf("Iniciando proceso de carga de datos de anio %i.\n", year);
        ingresoDatos(&legajo, &division, &nota, year);
        while (legajo!=0){
            (*totNotas)++;
            promedioPorDiv(division, nota, &contA, &contB, &contC, &sumA, &sumB, &sumC);
            ingresoDatos(&legajo, &division, &nota, year);
        }
        if (contA!=0)
            promedioA=(float)sumA/contA;
        if (contB!=0)
            promedioB=(float)sumB/contB;
        if (contC!=0)
            promedioC=(float)sumC/contC;
        printf("El anio %i division A obtuvo de promedio general %.2f\n", year, promedioA);
        printf("El anio %i division B obtuvo de promedio general %.2f\n", year, promedioB);
        printf("El anio %i division C obtuvo de promedio general %.2f\n", year, promedioC);

        valorMax(promedioMax, promedioA, promedioB, promedioC);
        contA=0, contB=0, contC=0, sumA=0, sumB=0, sumC=0, legajo=0, promedioA=0, promedioB=0, promedioC=0;
    };
}

void ingresoDatos(int *legajo, char *division,int *nota, int year){

    printf("Ingrese numero de legajo. Ingrese 0 (cero) para finalizar carga de anio %i\n", year);
    scanf("%i",legajo);
    fflush(stdin);
    if(*legajo!=0){
        printf("Indique division A, B, o C \n");
        scanf("%c",division);
        fflush(stdin);
        printf("Ingrese la nota del alumno del 1 al 10\n");
        scanf("%i",nota);
        fflush(stdin);
    };
}

void promedioPorDiv(char division, int nota, int *contA, int *contB, int *contC, int *sumA, int *sumB, int *sumC){

    switch(division){
    case 'A':
        (*contA)++;
        *sumA=*sumA+nota;
        break;
    case 'B':
        (*contB)++;
        *sumB=*sumB+nota;
        break;
    case 'C':
        (*contC)++;
        *sumC=*sumC+nota;
        break;
    }
}

void valorMax(float *promedioMax,float promedioA,float promedioB,float promedioC){
    if (*promedioMax<promedioA)
        *promedioMax=promedioA;
    if (*promedioMax<promedioB)
        *promedioMax=promedioB;
    if (*promedioMax<promedioC)
        *promedioMax=promedioC;
}
