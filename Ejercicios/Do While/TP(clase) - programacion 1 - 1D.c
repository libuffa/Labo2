#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int main()
{
    int m=5,n=9;
    do
    {

        printf("%d %d ",m,n);
        m=m+2;
        n=n+1;
    }while(m<=n);
    printf("\n %d %d ",m,n);
    return 0;
}
