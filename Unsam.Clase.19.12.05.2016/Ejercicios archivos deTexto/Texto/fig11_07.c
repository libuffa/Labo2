/* Figura 11.7: fig11_07.c - Lectura e impresi�n de un archivo secuencial */
/*
1. Ejecuta el programa.
2. Abre el archivo clientes.dat y compara con lo que se emiti� en la ejecuci�n por pantalla.
3. Qu� modo se utiliz� para la apertura del archivo?. Com�ntalo en el archivo fuente.
4. Qu� funci�n se utiliz� para leer del archivo?. Com�ntalo en el archivo fuente.
5. Investiga c�mo funciona: !feof(ptrCf). 
6. Qu� cambios deber�as hacer y en d�nde para agregar datos al archivo sin perder el contenido anterior?.
7. Elimina el archivo clientes.dat, crea en el bloc de notas un archivo con el mismo nombre y
agrega datos de 2 clientes. Ejecuta este programa. Qu� sucedi�?
8. Modifica el programa usando funciones. 
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{ 
   int cuenta;        /* n�mero de cuenta */
   char nombre[ 30 ]; /* nombre de cuenta */
   double saldo;      /* saldo de la cuenta */

   FILE *ptrCf;     /* ptrCf = apuntador al archivo clientes.dat */

   /* fopen abre el archivo; si no se puede abrir el archivo, abandona el programa */ 
   if ( ( ptrCf = fopen( "c:\\clientes.dat", "r" ) ) == NULL ) {
      printf( "El archivo no pudo abrirse\n" );
   } /* fin de if */
   else { 
      printf( "%-10s%-13s%s\n", "Cuenta", "Nombre", "Saldo" );
      fscanf( ptrCf, "%d%s%lf", &cuenta, nombre, &saldo );

      while ( !feof( ptrCf ) ) { 
         printf( "%-10d%-13s%7.2f\n", cuenta, nombre, saldo );
         fscanf( ptrCf, "%d%s%lf", &cuenta, nombre, &saldo );
      } /* fin de while */

      fclose( ptrCf ); /* fclose cierra el archivo */
   } /* fin de else */

   system("pause");
   return 0; /* indica terminaci�n exitosa */

} /* fin de main */

