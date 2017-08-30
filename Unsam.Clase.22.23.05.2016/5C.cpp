#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/* Estructura de los registros almacenados en el archivo*/

typedef struct {
char nombre[25];
int edad;
}Persona;

int main(){
FILE *f=fopen("datos.dat","r+b");
int nReg, reg;/*Guarda el número de registros*/
Persona aux;
fpos_t posicion;
if(f!=NULL){
            	/* Se usa lectura adelantada, de otro modo
					el último dato sale repetido */
					fread(&aux,sizeof(Persona),1,f);
					while(!feof(f)){
					printf("Nombre: %s, Edad: %d\n",aux.nombre, aux.edad);
					fread(&aux,sizeof(Persona),1,f);}
			
            
            fseek(f,0,SEEK_END);
			nReg=ftell(f)/sizeof(Persona);
			printf("No de registros en el archivo = %d\n",nReg);
			
			printf("Ingrese el número de registro a buscar\n");
			scanf("%d", &reg);
			if (reg!=0) /*considerar que puede ingresar el 0*/
            fseek(f,(reg-1)*sizeof(Persona),SEEK_SET);
            /*Tengo que posicionarme en el registro correcto, tomando en cuenta que comienza en 0*/
            printf("Me posiciono en el registro %d y muestra:\n", reg);
            fread(&aux,sizeof(Persona),1,f);
            printf("nombre: %s, %d de edad\n",aux.nombre,aux.edad);
            printf("Capturo la posición actual, cambiará el siguiente registro:\n");
            fgetpos(f,&posicion); /*Captura de la posición actual, LA SIGUIENTE AL REGISTRO BUSCADO Y MOSTRADO*/
            printf("Le cambio EL NOMBRE Y LA EDAD\n");
            printf("Ingrese nuevo nombre:\n");
            fflush(stdin);
            gets(aux.nombre);
            /* o scanf("%s", aux.nombre);*/
            printf("Ingrese nueva edad:\n");
            fflush(stdin);
            scanf("%d", &aux.edad);
            /*printf("Vuelvo a la posición capturada y escribo en el archivo\n");*/
            fsetpos(f,&posicion); 
            /*El cursor vuelve a la posición capturada y escribe en el archivo */
            fwrite(&aux,sizeof(Persona),1,f);
            printf("Vuelvo a la posición inicial del archivo\n");
            fseek(f,0,SEEK_SET);
            	/* Se usa lectura adelantada, de otro modo
					el último dato sale repetido */
					fread(&aux,sizeof(Persona),1,f);
					while(!feof(f)){
					printf("Nombre: %s, Edad: %d\n",aux.nombre, aux.edad);
					fread(&aux,sizeof(Persona),1,f);}
            fclose(f);
			}
else{printf("Error en la apertura del archivo\n");}
system("pause");
return 0;

}
