#include <stdio.h>

int main(){

int i, voto, fPopular, tJuntos, sLibres, nJovenes, vBlanco;
char esDonante;

for(i=1;i<=2;i++){
    printf ("Bienvenido! Por favor, confirmar via codigo numerico su eleccion.\n\nConsidere las opciones:\n");
    printf ("*FRENTE POPULAR: marque 1\n");
    printf ("*TODOS JUNTOS:   marque 2\n");
    printf ("*SIEMPRE LIBRES: marque 3\n");
    printf ("*NUEVOS JOVENES: marque 4\n");
    printf ("*VOTO EN BLANCO: marque un valor diferente a cualquiera de los anteriores\n");
    scanf("%d",&voto);
    switch{
    case 1:
        fPopular++;
        break;
    case 2:
        tJuntos++;
        break
    case 3:
        sLibres++;
        break;
    case 4:
        nJovenes++;
        break;
    default:
        vBlanco++;
    }
    printf ("Gracias! Ademas, necesitamos conocer si usted desea ser donante. \nSi la respuesta es afirmativa, ingrese "S", sino, "N".\n");
    fflush(stdin);
    scanf("%c",esDonante);
    if esDonante=='S' printf("GRACIAS POR DONAR\n");
};

printf("GRACIAS POR DONAR\n");
/*
int x = 5,  y = 10;
int *xPtr = NULL;
int *yPtr = NULL;
xPtr = &x;
yPtr = &x;
*xPtr = *xPtr + 1;
(*yPtr)--; printf ("x: %d\n",x);
printf ("y: %d\n",y);
system("pause");
*/
return 0;
}
