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

printf("El producto de nxm es: %d",function(n,m));

return;
}

int function(int a, int b){

int prod;

if(b!=0)
    prod=a+function(a,b-1);
else
    prod=0;
return prod;
}
