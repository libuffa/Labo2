#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int nota;
    printf("Ingrese su nota:\n");
    scanf("%d",&nota);

    if(nota>0 && nota<4 ) printf("Aplazado\n");
    else if(nota<6 ) printf("Regular\n");
    else if(nota<8 ) printf("Bueno\n");
    else if(nota<9 ) printf("Distinguido\n");
    else if(nota<=10 ) printf("Excelente\n");
    else printf("PORQUE NO TENGO AMIGOS? LA SOLEDAD...\n");

    system("pause");
    return 0;
}
