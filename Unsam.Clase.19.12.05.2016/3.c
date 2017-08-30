#include <stdio.h>
#include <stdlib.h>

int main(){
FILE *archivo;
char texto[2000];
archivo=fopen("texto2.txt","r");
if(archivo!=NULL) {
	fgets(texto,2000,archivo); //carga una línea
				while(!feof(archivo))
						{
						puts(texto);
						fgets(texto,2000,archivo);
						}
	fclose(archivo);
}
else{printf("Error en la apertura");}

system("pause");
return 0;
}
