#include "stdio.h"

void fibonacci(int *fibo)
{
    int i;
    for(i=0;i<=50;i++)
    {
        if(i==0) fibo[i]=0;
        else if(i==1) fibo[i]=1+fibo[i-1];
        else fibo[i]=fibo[i-1]+fibo[i-2];
    }
}

void mostrarDatos(int *fibo)
{
    int i;
    printf("Secuencia de fibonacci:\n");
    for(i=0;i<=50;i++) printf("%d: %d\n",i, fibo[i]);
}

main()
{
    long double fibo[50];
    fibonacci(fibo);
    mostrarDatos(fibo);
}
