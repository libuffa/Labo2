#include "misfunciones.h"
#include <stdio.h>
/*----------------------------------------------------------------------------*/
/* Funci�n par: Devuelve un valor indicando si un n�mero entero es par o no. */
int par(int numero){
if((numero%2)==0)
                 return(1);
else
                 return(0);
}
/*----------------------------------------------------------------------------*/
/* Funci�n media2: Devuelve la media de 2 n�meros.*/
float media2(float n1, float n2)
{
float resultado;
      resultado=(n1+n2)/2;
return(resultado);
}
/*----------------------------------------------------------------------------*/
/* Funci�n negativo: Devuelve 1 si es negativo el n�mero entero
pasado como par�metro, o 0 si no lo es. */
int negativo(int numero) {
int res;
if (numero<0)
   res=1;
else
    res=0;
return(res);
}
/*---------------------------------------------------------------------------*/
/*Funci�n media3: Informa de la media de 3 n�meros*/
void media3(float n1, float n2, float n3){
float resultado;
      resultado=(n1+n2+n3)/3;
printf("La media es:%f\n",resultado);
}
/*----------------------------------------------------------------------------*/
// Funci�n pedir: Pide un n�mero entero.*/
int pedir(){
int n;
    printf("Introduzca un n�mero entero:\n");
    scanf("%i",&n);
return(n);
}
/*----------------------------------------------------------------------------*/
/*Funci�n triple: devuelve el triple del par�metro.*/
int triple(int num){
int n;
    n=3*num;
return(n);
}

