#include "stdio.h"

int suma(int a);
int resto(int a,int b);
int cuadrado(int a,int b);

main()
{
    int a,b;
    printf("ingrese numero\n");
    scanf("%d",&a);
    printf("La suma recursiva da como resultado %d\n",suma(a));
    printf("ingrese dividendo\n");
    scanf("%d",&a);
    printf("ingrese divisor\n");
    scanf("%d",&b);
    printf("El resto de la division es %d\n",resto(a,b));
    printf("ingrese numero al cuadrado\n");
    scanf("%d",&a);
    printf("El cuadrado del numero es %d\n",cuadrado(a,1));
    system("Pause");
}

int suma(int a)
{
    if(a==0) return 0;
    else return a+suma(a-1);
}

int resto(int a,int b)
{
    if (a<b) return a;
    else return resto(a-b,b);
}

int cuadrado(int a,int b)
{
   if(a==0) return 0;
   else     return b + cuadrado(a-1,b+2);
}
