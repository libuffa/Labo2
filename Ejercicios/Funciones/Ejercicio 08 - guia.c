#include "stdio.h"
#include "stdlib.h"
#include "math.h"

void piramide(int * niveles);

main ()
{
    int n;
    printf("Numero de filas\n");
    scanf("%d",&n);
    piramide(&n);
    system("Pause");
}

void piramide(int *niveles)
{
    int i,j=0,f=0,k;
    for(k=0;k<*niveles;k++)
    {
        for(i=0;i<*niveles;i++)
        {
            if(j<(*niveles-1))
            {
                printf(" ");
                j++;
            }else{
                f++;
                printf("%d",f);
            }
        }
        j=f;
        while(f>1)
        {
            f--;
            printf("%d",f);
        }

        printf("\n");
        f=0;
    }

}


