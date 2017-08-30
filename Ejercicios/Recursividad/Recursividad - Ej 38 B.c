#include "stdio.h"
#include "stdlib.h"

int function(int, int);

void main(){

int n, m;

printf("Ingrese n\n");
scanf("%d",&n);
fflush(stdin);
printf("Ingrese m\n");
scanf("%d",&m);
fflush(stdin);

printf("El cociente entero de n%m es: %d",function(n,m));

return;
}

int function(int a, int b){

int cociente;

if(b<=a)
    cociente=1+function(a-b,b);
else
    cociente=0;
return cociente;
}
