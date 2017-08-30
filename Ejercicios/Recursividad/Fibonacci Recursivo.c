#include "stdio.h"

int fibo(int fib);

int main(){

int fib=0;

printf("Indique valor de la sucesion a consultar\n");
scanf("%d",&fib);

printf("El digito %d de la sucesion es el número: %d\n",fib, fibo(fib));

}

int fibo(int fib){

if (fib==1||fib==0) return fib;
else return fibo(fib-1)+fibo(fib-2);
}
