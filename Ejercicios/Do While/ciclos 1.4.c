#include "stdio.h"

main ()
{float tasa1, tasa2;
int cont;

cont=0;
tasa1=55;
tasa2=250;
do {
tasa1=tasa1*1.07;
tasa2=tasa2*1.02;

cont++;

} while (tasa1<(tasa2/2));

printf("los annos que tarda la colonia A en superar a la mitad de la B son %d\n",cont);






}
