#include "stdio.h"

int main(){
FILE *archivo;
char c=0;
archivo=fopen("texto.txt","r+"); //"texto.txt" está en el mismo directorio que el programa // "r+" es el tipo de apertura
if(archivo!=NULL) //Si la dirección es distinta de vacío, o sea, si el archivo existe
	{/*apertura correcta */
		while(c!=EOF)
		{ /*se lee hasta llegar al final */
		c=fgetc(archivo); //FGETC es F de File, GET de obtener, C de char; copia char por char en var c y lo muestra
		putchar(c); //idem a un Printf, muestra el caracter. SOLO FUNCIONA PARA VARIABLES CHAR.
		}
	fclose(archivo);
	}
else{printf("Error! No se encontró el archivo");}
system("pause");
return 0;
}
