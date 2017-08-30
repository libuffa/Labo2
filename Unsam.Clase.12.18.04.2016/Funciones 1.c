#include "stdio.h"

void chau(){
printf("chau \n");
}

void saludo(){
printf("Hola, Como estan? \n");
chau();
}

main(){

saludo();

return 0;}
