#include "stdio.h"

main ()
{float tasa1, tasa2;
int cont;

cont=0;
tasa1=100;
tasa2=150;
do {
tasa1=tasa1*1.08;
tasa2=tasa2*1.05;

cont++;

} while (tasa1<tasa2);

printf("los annos que tarda la tasa de Pedro en superar a la de jorge son %d\n",cont);






}
