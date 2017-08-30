#include "stdio.h"
#include "stdlib.h"

int fibo(int n);

main()
{
      int n;
      
      printf("Ingrese el numero de fibonacci a consultar\n");
      scanf("%d",&n);
      printf("El resultado de la consulta da %d\n",fibo(n));
      system("Pause");
}

int fibo(int n)
{
    int f;
    if(n == 1) f = 0;
    else if(n == 2) f = 1;
    else if(n > 2) f = fibo(n-1) + fibo(n-2);    
    return f;
}
