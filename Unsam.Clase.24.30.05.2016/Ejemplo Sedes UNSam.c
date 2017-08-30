#include "stdio.h"
#define SEDES 10

//VECTOR DE ACUMULADORES:
main(){
    float gastos[SEDES];
    float gasto;
    int i, sede;
    printf("Ingrese Sede (cero=final)\n");
    scanf("%d", &sede);
    for(i=0;i<SEDES;i++)
        gastos[i]=0;
    while (sede!=0){
        printf("gasto?\n");
        scanf("%f",&gasto);
        gastos[sede-1]=gastos[sede-1]+gasto;
        printf("Ingrese Sede (cero=final)\n");
        scanf("%d", &sede);
    }
    for(i=0;i<SEDES;i++)
        printf("Sede %d gasto: %.2f\n",i+1,gastos[i]);
}
