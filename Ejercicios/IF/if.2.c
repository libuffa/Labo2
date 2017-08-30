#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 main()
 {
 int valor, resultado;
 printf("Introduce un numero entero:\n");
 scanf("%d",&valor);
 resultado =  valor%2==0 || valor>10  ;//Al ser booleano aca nada mas te va a dar 0 o 1.
 if (resultado) printf("El numero introducido era IMPAR");
 else printf("El numero introducido era PAR");
 }
