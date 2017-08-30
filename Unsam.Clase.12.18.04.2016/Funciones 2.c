#include "stdio.h"

int sumar(){

int a, b, c;
printf("Ingrese 2 valores \n");
scanf("%d",&a);
scanf("%d",&b);
c=a+b;
return c;
}


main(){

printf("El resultado es %d\n", sumar());

return 0;}
