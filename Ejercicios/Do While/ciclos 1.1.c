#include "stdio.h"

main()
{int valor, cont;


cont=0;


do {
printf("cuantas patas tiene un perro?\n");
scanf("%d",&valor);
cont++;
if (valor==4)
    {printf("CORRECTOOO!\n");}
} while ((cont<4) && (valor!=4));


if (valor!=4)
    {printf(" La respuesta correcta es 4\n");

}









}
