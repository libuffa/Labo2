#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float lado1, lado2, lado3, p, area;
    
    printf("Ingrese el valor del lado 1 del triangulo:\n");
    scanf( "%f",&lado1);
    printf("Ingrese el valor del lado 2 del triangulo:\n");
    scanf( "%f",&lado2);
    printf("Ingrese el valor del lado 3 del triangulo:\n");
    scanf( "%f",&lado3);
    
    p = ( lado1 + lado2 + lado3) / 2;
    area = sqrt(p*(p-lado1)*(p-lado2)*(p-lado3));
    printf("El area del triangulo es de %.2f m2\n",area);
    
    system("pause");
    return 0;   
}
