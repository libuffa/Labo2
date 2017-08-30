#include "stdio.h"
#include "stdlib.h"

main(){
char nombre[20];
int n1, n2, n3;
float prom;
FILE *archivo;
archivo=fopen("alumnos.dat","rt");
if (archivo!=NULL){
while (!feof(archivo)){
fscanf(archivo,"%s %d %d %d",nombre, &n1, &n2, &n3);
prom=(float)(n1+n2+n3)/3;
printf("promedio de %s: %.2f\n",nombre,prom);
}
fclose(archivo);}
else
    perror("");
}
