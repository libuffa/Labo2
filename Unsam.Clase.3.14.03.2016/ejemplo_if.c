/* Uso de instrucciones if, operadores de 
   relación, y operadores de igualdad */
#include <stdio.h>
#include <stdlib.h>

/* la función main inicia la ejecución del programa */
main()
{
   int num1; /* primer número que lee el usuario  */
   int num2; /* segundo número que lee el usuario */
   
   printf( "Introduza dos enteros, y le diré\n" );
   printf( "las relaciones que satisfacen: " );

   scanf( "%d%d", &num1, &num2 ); /* lectura de los enteros */
   
   if ( num1 == num2 ) { 
      printf( "%d es igual que  %d\n", num1, num2 );
   } /* fin de if */

   if ( num1 != num2 ) {
      printf( "%d no es igual que %d\n", num1, num2 );
   } /* fin de if */

   if ( num1 < num2 ) { 
      printf( "%d es menor que %d\n", num1, num2 );
   } /* fin de if */

   if ( num1 > num2 ) { 
      printf( "%d es mayor que %d\n", num1, num2 );
   } /* fin de if */

   if ( num1 <= num2 ) { 
      printf( "%d es menor o igual que %d\n", num1, num2 );
   } /* end if */

   if ( num1 >= num2 ) {
      printf( "%d es mayor o igual que %d\n", num1, num2 );
   } /* fin de if */
system ("pause");
   return 0; /* indica que el programa terminó con éxito */

} /* fin de la función main */



