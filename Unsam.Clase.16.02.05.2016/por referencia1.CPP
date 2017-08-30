//punt7.cpp Declara una funci¢n a la que le pasa dos argumentos enteros
//por referencia, imprimiendo sus valores en la propia funci¢n (incrementa
//el primero de ellos en 10 unidades.
/**********Realizado por Ismael Camarero Sanz*************/
/* icamarero98@hotmail.com  */
#include <stdio.h>
#include <stdlib.h>

void fun(int *p, int *q);

main()
  {
     int a = 7, b = 5;
     printf("En main antes de la funcion: %d , b:%d\n\n", a, b);
//     clrscr();
     fun(&a, &b);    //llamada a la funci¢n
     printf("\nEn main() despues de la llamada a funcion a = %d y b= %d\n\n", a, b);
     system("pause");
  }   //FIN DE main()

void fun(int *x, int *y)
  {
     printf("En la función:  %d , %d\n\n", *x+10, *y);
  }
