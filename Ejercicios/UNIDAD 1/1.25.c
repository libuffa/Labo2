#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int segundos,horas,minutos;
    float aux;
    printf("Ingrese valor de segundos enteros a convertir\n");
    scanf("%d",&segundos);
    horas = segundos / 3600;
    minutos = (segundos / 60) % 60;
    segundos = segundos % 60;

    printf("Son las %d horas, %d minutos, %d segundos.\n",horas,minutos,segundos);
    system("pause");
    return 0;
}
