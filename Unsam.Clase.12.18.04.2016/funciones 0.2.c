#include "stdio.h"

int sumar(){
int a, b, c;
printf("ingrese 2 valores\n");
scanf("%d", &a);
scanf("%d", &b);
c=a+b;
return c;
}

main(){
/*int res;
res=sumar();
printf("el resultado es %d\n",res);

esto que esta comentado tmb sirve*/

printf("el resultado es %d\n",sumar());
}
