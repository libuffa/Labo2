#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int main()
{
    int x=0;
    do
    {
        printf("%d",x);
        x=x+1;//Aca va a valer 5 y no lo va a poder imprimir porque termina el ciclo.
    }while(x!=5);
    return 0;
}
