#include <stdio.h>
#include <string.h>
//Ejemplo 4. vector de punteros a cadenas
void leer_vec(char * VN[]);
void impr_vec(char * VN[]);
 int main() {
char cad0[10];
char cad1[20];
char cad2[10];
char cad3[30];
char cad4[20];
char cad5[40];
char cad6[10];
char cad7[10];
char cad8[20];
char cad9[10];
char * VNom[10]={cad0,cad1,cad2,cad3,cad4,cad5,cad6,cad7,cad8,cad9};
	leer_vec(VNom);
	impr_vec(VNom);
	system("pause");
	return 0; }

void leer_vec(char * VN[]) {
int i,c;
	/*printf("ingrese la cant de personas <=10\n"); scanf("%d",&c);*/
		for (i=0;i<10;i++){
            printf("ingrese nom: \n");
			scanf("%s",VN[i]);
            fflush(stdin);}
}

void impr_vec(char * VN[]) {
int i;
	/*for (i=0;strcmp(VN[i],"xx");i++)*/
    for (i=0;strcmp(VN[i],"")!=0;i++)
	printf("%s\n",VN[i]);
}
