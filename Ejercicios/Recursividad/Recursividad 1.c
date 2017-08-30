#include "stdio.h"
#include "stdlib.h"

void function(int);

void main(){

function(3);

return 0;
}

void function(int n){

printf("%d\n",n);
if(n!=0)
    function(n-1);
printf("%d\n",n);
return;
}
