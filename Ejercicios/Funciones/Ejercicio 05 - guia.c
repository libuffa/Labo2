#include "stdio.h"
#include "stdlib.h"
#include "math.h"

main ()
{
int i;
for (i=1; i<=10; i++)
{
    printf ("\nTabla de multiplicar del %d:\n", i);
    tabla_multiplicar (i);
    }
}
