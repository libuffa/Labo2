#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int main()
{
    int n=1,cont=0;

    do
    {
        printf("%d\n",n);
        n=n+2;
        cont++;
    }while(cont < 10);
    return 0;
}
