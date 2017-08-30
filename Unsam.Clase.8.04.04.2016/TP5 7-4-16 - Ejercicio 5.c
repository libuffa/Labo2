#include "stdio.h"
#include "math.h"

int main(){
    const int cantEmpleados=3;
    /* también se puede emplear una macro
        #define cantEmpleados 6
    llamada constante simbólica, no ocupa memoria y lo que hace es, antes de empezar el programa,
    busca todas las apariciones de emple y las reemplaza por 6.*/
    int horasTr, sueldoHs, sueldoTot, acumMasc, acumFem, cantMasc, cantFem, i;
    char nombre[20], sexo;
    acumMasc=0;
    acumFem=0;
    cantFem=0;
    cantMasc=0;

    for(i=1;i<=cantEmpleados;i++){
        printf("Ingrese nombre de empleado\n");
        scanf("%s", nombre);
        /*se usa %s porque es string; además, no se usa ampersand antes de declarar la variable.
            En caso de que NOMBRE sea compuesto, es necesario usar
            gets(nombre)
            porque scanf corta los nombres al encontrar el primer espacio.*/
        printf("Ingrese el sexo del empleado, siendo M = masculino y F = Femenino \n");
        fflush(stdin);
        scanf("%c", &sexo);
        printf("Ingrese horas trabajadas \n");
        fflush(stdin);
        scanf("%d", &horasTr);
        printf("Ingrese sueldo por hora\n");
        fflush(stdin);
        scanf("%d", &sueldoHs);
        sueldoTot=horasTr*sueldoHs;
        printf("Empleado: %s, \n Sueldo total: %d \n", nombre, sueldoTot);
        if (sexo=='M'){
            acumMasc=acumMasc+sueldoTot;
            cantMasc++;}
        else{
            acumFem=acumFem+sueldoTot;
            cantFem++;}
    }
    if (cantMasc==0)
        printf("No hay pagos de sueldo masculino");
    else{
    printf("El pago para Masculinos es de: %d\n",acumMasc);
    printf("El sueldo promedio de pago Masculino es de: %d\n",acumMasc/cantMasc);}
    if (cantFem==0)
        printf("No hay pagos de sueldo femenino");
    else{
    printf("El pago para femeninos es de: %d\n",acumFem);
    printf("El pago promedio para femeninos es de: %d\n",acumFem/cantFem);}

return 0;
}
