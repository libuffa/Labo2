/* Eleva un numero a la cuarta potencia pasando el argumento por referencia*/
//Ver por_valor.cpp
//BAjado de http://usuarios.lycos.es/ismaelcamarero
//pasado a practica de funciones de prog 1
#include <stdio.h>
#include <conio.h>
#include <math.h>

double por_referencia(double *x);

main()
{
     double numero = 5.0;
     double res;
     printf("\nEl valor original del numero es: %g\n", numero);
     res = por_referencia(&numero);
     printf("\nTras la funcion, el valor de res: %g\n",res);
     printf("\nTras la funcion, el valor de numero es: %g\n",numero);
     getch();
     return 0;
}

double por_referencia(double *numero)
{
     double res;
     res = pow(*numero, 4);
    *numero=35;
     return (res); 
}

