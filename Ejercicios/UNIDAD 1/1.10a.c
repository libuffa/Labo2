#include "stdio.h"

main ()
{
int x, y, w, res;
printf("inserte el valor de x\n");
scanf("%d",&x);
printf("inserte el valor de y\n");
scanf("%d",&y);
printf("inserte el valor de w\n");
scanf("%d",&w);
res=(x+y)/(2*w);

printf("el resultado es:\n%d",res);

return 0;
}
