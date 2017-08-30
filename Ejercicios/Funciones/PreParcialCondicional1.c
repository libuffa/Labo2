#include "stdio.h"
#include "stdlib.h"
#include "math.h"

void consultarPesoAltura(int *pa, float *pb);

main(void)
{
    int p1,p2,p3,ganador=0;
    float l1,l2,l3;

    while(ganador == 0)
    {
        consultarPesoAltura(&p1,&l1);
        consultarPesoAltura(&p2,&l2);
        consultarPesoAltura(&p3,&l3);

        if(p1 > p2&& p1> p3)
        {
            printf("El pescador 1 es el ganador\n");
            ganador++;
        }else if(p2 > p1&& p2> p3)
        {
            printf("El pescador 2 es el ganador\n");
            ganador++;
        }else if(p3 > p2&& p3> p1)
        {
            printf("El pescador 3 es el ganador\n");
            ganador++;
        }else printf ("No puede haber empate, empezar de nuevo\n");
    }
    system("Pause");
}

void consultarPesoAltura(int *pa, float *pb)
{
    printf("Pescador ingrese peso y longitud\n");
    fflush(stdin);
    scanf("%d",pa);
    fflush(stdin);
    scanf("%f",pb);
    fflush(stdin);
    if(*pa<200) printf("\nBAJO PESO\n");
    return;
}
