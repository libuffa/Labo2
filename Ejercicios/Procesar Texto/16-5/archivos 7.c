#include "stdio.h"
#include "stdlib.h"

main(){
char nombre[20], nom2[20];
int n1, n2, n3, cant;
float prom;
FILE *archivo;
archivo=fopen("alumnos2.dat","rt");
if (archivo!=NULL){
fscanf(archivo,"%s %d",nom2, &cant);
while (!feof(archivo)){
fscanf(archivo,"%s %d %d %d",nombre, &n1, &n2, &n3);
prom=(float)(n1+n2+n3)/3;
printf("promedio de %s: %.2f\n",nombre,prom);
}
printf("cantidad de alumnos: %d\n", cant);
fclose(archivo);}
else
    perror("");
}
