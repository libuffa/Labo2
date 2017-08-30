#include <stdio.h>
#include <stdlib.h>

struct fecha {int anio, mes, dia; };

struct persona {
   char nombre[30];
   struct fecha fecnac;
   int sueldo; };

main(){
struct persona empleado;


      printf("Ingrese el nombre: ");
      scanf("%s",empleado.nombre);

      printf("\nIngrese año de nacimiento ");
      scanf("%d",&empleado.fecnac.anio);

      printf("Ingrese el mes de nacimiento ");
      scanf("%d",&empleado.fecnac.mes);

	  printf("Ingrese el d\241a de nacimiento ");
	  scanf("%d",&empleado.fecnac.dia);

      printf("Ingrese sueldo\n");
      scanf("%d",&empleado.sueldo );

      printf("\n\nNombre: %s ",empleado.nombre);
      fflush(stdin);
      printf("\nFecha de nacimiento; %d, %d, %d\n", empleado.fecnac.dia, empleado.fecnac.mes, empleado.fecnac.anio );
      printf("Sueldo %d \n",empleado.sueldo );     

system("pause");
return(0);
}
