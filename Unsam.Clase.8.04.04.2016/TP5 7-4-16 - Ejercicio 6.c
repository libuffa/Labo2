#include "stdio.h"
#include "math.h"

int main(){
    const int cantAlumnos=3;
    const int cantNotas=3;
    /* también se puede emplear una macro
        #define cantEmpleados 6
    llamada constante simbólica, no ocupa memoria y lo que hace es, antes de empezar el programa,
    busca todas las apariciones de emple y las reemplaza por 6.*/
    int nota, sumaNota, cantAprobado, cantSobreOcho, i, j;
    float promedioNota;
    char nombre[20];
    cantAprobado=0;
    cantSobreOcho=0;

    for(i=1;i<=cantAlumnos;i++){
        sumaNota=0;
        printf("Ingrese nombre de alumnito\n");
        scanf("%s", nombre);
        fflush(stdin);
        /*se usa %s porque es string; además, no se usa ampersand antes de declarar la variable.
            En caso de que NOMBRE sea compuesto, es necesario usar
            gets(nombre)
            porque scanf corta los nombres al encontrar el primer espacio.*/
        for(j=1;j<=cantNotas;j++){
            printf("Ingrese la nota numero %d \n",j);
            scanf("%d", &nota);
            sumaNota=nota+sumaNota;}
        promedioNota=(float)sumaNota/cantNotas;
        printf("Alumno: %s, Promedio: %.2f \n", nombre, promedioNota);
        if(promedioNota>=6 && nota>=6){
            printf("Aprobado\n");
            cantAprobado++;
            if(promedioNota>=8)
                cantSobreOcho++;}
        else
            printf("Desaprobado\n");
    }
    printf("La cantidad de alumnos aprobados es: %d\n", cantAprobado);
    printf("La cantidad de alumnos con promedio mayor que oooooocho: %d\n",cantSobreOcho);
return 0;
}
