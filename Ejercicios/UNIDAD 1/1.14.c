#include "stdio.h"

main()
{
int cent, pies;
float pulg;

printf("escriba una medida en cm\n");
scanf("%d",&cent);

pies=cent/30;
pulg=cent/2.5;

printf("el valor que ud. ingreso en pies es:\n %d\n Y en pulgadas es:\n %.1f", pies, pulg);

return 0;


}
