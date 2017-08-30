#include "stdio.h"

void main(){

char str1[50], str2[50];

printf("Ingrese cadena 1\n");
scanf("%s",str1);

fflush(stdin);
printf("Ingrese cadena 2\n");
scanf("%s",str2);

if (strcmp(str1,str2)==0){
    printf("Las dos cadenas son iguales\n");
}
else{
    if (strcmp(str1,str2)<0){
            printf("La cadena 1 (%s) es mas chica\n",str1);
    }
    else{
        printf("La cadena 2 (%s) es mas chica\n",str2);
    }
};
return 0;
}
