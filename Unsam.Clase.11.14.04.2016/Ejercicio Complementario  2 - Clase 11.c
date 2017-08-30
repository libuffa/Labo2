#include <stdio.h>

int main(){

int n;
int * ptr;
    n=8;
    printf("ptr es %p \n", ptr);
    ptr=&n;
    printf("n es %d\n", n);
    printf("&n es %p\n", &n);
     printf("*ptr es %d\n", *ptr);
    printf("ptr es %p\n", ptr);
    n--;
    *ptr=5;
    printf("n es despues de n-- %d\n", n);
    printf("&n es %p\n", &n);
    ptr++;
    printf("ptr es despues de ptr++ %p\n", ptr);
    printf("*ptr es %d\n", *ptr);
    system("Pause");
return 0;
}

