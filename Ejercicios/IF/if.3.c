#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
 {
     char caracter;
     printf ("Introduce un caracter y pulsa Intro:\n ");
     scanf ("%c",&caracter);
     if ((caracter>='A') && (caracter<='Z')) printf("La letra es una mayúscula\n");
     else if ((caracter>='a') && (caracter<='z')) printf("La letra es una minúscula\n");
     else if (caracter >='0'&& caracter <='9')printf("Es el numero de amigos que tengo") ;
     else printf("No es letra ni numero");
}
