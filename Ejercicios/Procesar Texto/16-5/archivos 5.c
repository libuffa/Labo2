#include "stdio.h"
#include "stdlib.h"

main(){
int n, l=1;
FILE *arch;
printf("ingrese un numero entero\n");
scanf("%d", &n);
arch=fopen("divis.bat","wt");

while(l<=n)
{if (n%l==0)
{fprintf(arch,"%d\n", l);}
l++;

}
fclose(arch);

}
