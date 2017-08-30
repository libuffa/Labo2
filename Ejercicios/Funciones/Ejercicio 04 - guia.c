#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int factorial (int n);

main ()
{
    int n;
    printf ("\nIntroduzca un número entero positivo: ");
    scanf ("%d", &n);
    printf ("\nEl factorial de %d es: %ld",n,factorial(n));
}

int factorial(int n){
    int factor;
    if (n==1)
        factor=1;
    else factor=n*factorial(n-1);
    return factor;
}
