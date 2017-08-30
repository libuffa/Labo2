#include "stdio.h"

main(){
int cantA, cantB, puntA, puntB, promA, promB;

printf("ingrese la cant de alumnos del curso A\n");
scanf("%d",&cantA);
printf("ingrese la puntuación del curso A\n");
scanf("%d",&puntA);
printf("ingrese la cant de alumnos del curso B\n");
scanf("%d",&cantB);
printf("ingrese la puntuación del curso B\n");
scanf("%d",&puntB);

promA=puntA/cantA;
promB=puntB/cantB;

if (promA>promB)
printf("El curso A tiene mejor promedio que el B\n");
else
printf("El curso B tiene mejor promedio que el A\n");

if (cantA>20)
printf("CURSO A TIENE 20\n");

if (cantB>20)
printf("CURSOB TIENE 20\n");

return 0;
}
