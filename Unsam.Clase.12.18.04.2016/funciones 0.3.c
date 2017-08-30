#include "stdio.h"

int i=0;
float z= -23.56;
int imprimirdenuevo();

main(){
    float p=12.63;
    printf("i = %d, p =%.2f \n\n", i, p);
    imprimirdenuevo();
    i=i+123;
    printf("i = %d\n\n", i);
    system("pause");
    return 0;

int imprimirdenuevo(){
int z, x=5;
printf("\nx = %d, z = %.2f, i = %d \n\n", x, z, i);
i=i+100;
printf("i = %d\n\n",i);
return 0;
}
