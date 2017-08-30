#include "stdio.h"

main(){
int opcion, c1_opcion, cant_pesos, cant_dolores, deposit, c3_opcion, clavevieja, clavenueva;
printf("ingrese 1 para retirar dinero\ningrese 2 para depositar dinero\ningrese 3 para consultar saldo\ningrese 4 para cambiar clave\n");
scanf("%d", &opcion);
switch(opcion){
case 1:
        do {
        printf("ingrese 1 para retirar pesos\ningrese 2 para retirar dolores\n");
        scanf("%d", &c1_opcion);
        switch(c1_opcion){
        case 1: printf("ingrese la cantidad de pesos a retirar\n");
                scanf("%d", &cant_pesos);
                break;
        case 2: printf("ingrese la cantidad de dolores a retirar\n");
                scanf("%d", &cant_dolores);
                break;
        default: printf("ingrese una tecla válida\n");}

            }while ((c1_opcion==1) && (c1_opcion==2));
        break;
case 2:
        printf("ingrese la cantidad de pesos a depositar\n");
        scanf("%d", &deposit);
        printf("depositados %d pesos\n", deposit);
        break;
case 3: do{
        printf("ingrese 1 para consulta de caja de ahorro\ningrese 2 para consulta de cuenta corriente\n");
        scanf("%d", &c3_opcion);
        switch(c3_opcion){
            case 1:
                    printf("su saldo actual (caja de ahorro) es de xxxx pesos\n");
                    break;
            case 2:
                    printf("su saldo actual (cuenta corriente) es de xxxx pesos\n");
                    break;
            default:
                    printf("ingrese una opcion correcta\n");
                    break;
        }}while ((c3_opcion!=1) && (c3_opcion!=2));
        break;
case 4:
        do {
        printf("ingrese la clave actual\n");
        scanf("%d", &clavevieja);
        printf("ingrese la clave nueva\n");
        scanf("%d", &clavenueva);
        if (clavenueva==clavevieja)
            printf("la clave nueva no puede ser la misma que la actual\n");
        } while (clavenueva==clavevieja);
        printf("clave cambiada con exito");
        break;}}
