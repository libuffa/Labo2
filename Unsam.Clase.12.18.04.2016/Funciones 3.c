#include "stdio.h"

/*Prototipo:*/
int sumar();

main(){
int res;
res=sumar();
printf("El resultado es %d\n", res);

return 0;}

int sumar(){

int a, b, c;
printf("Ingrese 2 valores \n");
scanf("%d",&a);
scanf("%d",&b);
c=a+b;
return c;
}
