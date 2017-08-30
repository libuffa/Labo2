#include "stdio.h"
#include "stdlib.h"

main()
{
    int par[5];
    int i;
    for(i=2;i<=10;i=i+2)
    {
        par[i]=i;
        printf("%d\n",par[i]);
    }
    system("Pause");
}
