#include <stdio.h>

int main(){

int x = 5,  y = 10;
int *xPtr = NULL;
int *yPtr = NULL;
xPtr = &x;
yPtr = &y;
*xPtr = *xPtr + 1;
(*yPtr)--;
printf ("x: %d\n",x);
printf ("y: %d\n",y);
system("pause");

return 0;
}
