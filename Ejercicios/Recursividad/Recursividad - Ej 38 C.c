#include "stdio.h"
#include "stdlib.h"

int function(int, int, int);

void main(){

int n, m, aux;

printf("Ingrese n\n");
scanf("%d",&n);
fflush(stdin);
printf("Ingrese m\n");
scanf("%d",&m);
fflush(stdin);
if (n<m){
    aux=n;
    n=m;
    m=aux;
}
printf("El maximo comun divisor entre n y m es: %d",function(n,m,m));

return;
}

int function(int a, int b, int c){

int maxComDiv;

if(a%c!=0 || b%c!=0){;
    maxComDiv=function(a,b,c-1);
    }
else
    maxComDiv=c;
return maxComDiv;
}
