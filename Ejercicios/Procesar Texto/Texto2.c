#include "stdio.h"

int main(){
FILE *archivo;
char texto[2000];
archivo=fopen("texto.txt","r+");
if(archivo!=NULL) {
	while(!feof(archivo))
		{
		puts(texto);
		fgets(texto,2000,archivo);
		}
	fclose(archivo);
	}
else{printf("Error! No se encontró el archivo");}
system("pause");
return 0;
}
