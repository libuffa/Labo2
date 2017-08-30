#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float A, x, r,t1,t2,t3;
    const float pi=3.14;
    
    printf("Ingrese valor del radio de la circunferencia\n");
    scanf("%f",&r);
    printf("Ingrese valor de la distancia del centro al segmento\n");
    scanf("%f",&x);
    
    A=(pi*pow(2,2)/2-(x*sqrt(pow(r,2)-pow(x,2)))+pow(r,2)*asin(x/r));
    
    printf("El valor del area del segmento es %.2f\n",A);
    system("pause");
    return 0;       
}
