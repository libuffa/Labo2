#include <stdlib.h>
#include <stdio.h>
#include <string.h>
typedef struct {
        char nombre[25];
		int edad;
		}Persona;
main(){
Persona per;
int i=0;
FILE *pArchivo;
pArchivo=fopen("datos.dat","ab");
if(pArchivo!=NULL){
				do{
				fflush(stdin); /* Se vacía el buffer de teclado */
				printf("Introduzca el nombre de la persona: ");
				scanf("%s",per.nombre);
				if(strlen(per.nombre)>0){
							printf("Introduzca la edad");
							scanf("%d",&(per.edad));
							fwrite(&per,sizeof(Persona),1,pArchivo);
							i++;
							}
				}while (i < 4);
fclose(pArchivo);
}
else{printf("Error en la apertura del archivo");}
system("pause");
return 0;
}
