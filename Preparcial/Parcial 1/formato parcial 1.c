#include "stdio.h"

int F1(int *p);
int F2(int a, int *q);

main(){
int res1, res2;
res2=0;
res1=F1(&res2);
printf("el resultado 1 es %d", res1);
printf("el resultado 2 es %d", res2);
}

int F1(int *p){
int a, b;
//proceso de res2 y en el medio calcular algo con:

F2(a,*b);

//resto del proceso para res2 o imprimir algo con printf
// se obtiene el valor final y se lo asigna al puntero que está apuntando a la dirección de res2 de la siguiente forma:

*p=resultado de toda la F1;



return fin; // el valor de "fin", vuelve a main como resultado de F1, dando asi valor a res1
}

int F2(int valor1, int *q){

//proceso auxiliar para calcular algo de res2 o de los printf

}
