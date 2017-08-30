#include "stdio.h"

main(){
int i, Hs_Transmitidas, Cant_Prensa, Acum_Hs, Acum_Prensa, per2;
Acum_Hs=0;
Acum_Prensa=0;

for(i=1;i<=3;i++){
printf("Ingrese las horas transmitidas por el canal %d\n",i);
scanf("%d", &Hs_Transmitidas);
Acum_Hs=Acum_Hs+Hs_Transmitidas;
printf("ingrese la cant de periodistas del canal\n");
scanf("%d", &Cant_Prensa);
Acum_Prensa=Acum_Prensa+Cant_Prensa;
if (i==2)
per2=Cant_Prensa;
}
printf("el total de horas transmitidas es de %d, la cant de periodistas del canal 2 es de %d, el promedio de horas transmitidas es de %d y el promedio de periodistas es de %d", Acum_Hs,per2,Acum_Hs/i,Acum_Prensa/i);



}
