#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/* Estructura de los registros almacenados en el archivo*/

typedef struct {
char nombre[25];
int edad;
}Persona;

int main(){
FILE *f=fopen("datos.dat","rb");
int nReg;/*Guarda el número de registros*/
Persona aux;
if(f!=NULL){
			fseek(f,0,SEEK_END);
			nReg=ftell(f)/sizeof(Persona);
			printf("No de registros en el archivo = %d\n",nReg);
		
			fseek(f,3*sizeof(Persona),SEEK_SET);	
			
			fread(&aux,sizeof(Persona),1,f);
			
			printf("Nombre del 4to registro: %s, Edad: %d\n",aux.nombre, aux.edad);	
            
            		
			}
else{printf("Error en la apertura del archivo\n");}
system("pause");
return 0;

}
