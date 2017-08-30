#include "stdio.h"

void f1(char nom[], char *sexo, int *horas, int *suel);
int f2 (int horas, int precio);
typedef struct{
char nombre[15];
char sexo;
int horas;
int precio_hora;
} emple;

main(){
emple persona[6];
int horas, precio, sueldo, i, j, m=0, f=0, acumM=0, acumF=0, promF, promM;
char nombre[15], sexo;
char *psexo=&sexo;
int *phoras=&horas, *psueldo=&precio;


for(i=0;i<=2;i++){
f1(nombre, psexo, phoras, psueldo);

strcpy(persona[i].nombre,nombre);
persona[i].sexo=sexo;
persona[i].horas=horas;
persona[i].precio_hora=precio;

sueldo=((int)persona[i].horas * (int)persona[i].precio_hora);
printf("%s cobra %d\n", persona[i].nombre, sueldo);

    if(persona[i].sexo=='m'){
        m++;
        acumM=acumM+sueldo;}
    else {
        f++;
        acumF=acumF+sueldo;}
}

promM=acumM/m;
promF=acumF/f;
printf("pagos a hombres = %d\n",m);
printf("pagos a mujeres = %d\n",f);
printf("promedio pagos a hombres = %d\n", promM);
printf("promedio pagos a mujeres = %d\n", promF);

}
void f1(char nom[], char *sexo, int *horas, int *suel){
//char[15] a1;
char a2;
int a3, a4;
printf("nombre del empleado\n");
fflush(stdin);
scanf("%s", nom);
printf("sexo del empleado\n");
fflush(stdin);
scanf("%c", &a2);
*sexo=a2;
printf("horas trabajadas por el empleado\n");
fflush(stdin);
scanf("%d", &a3);
*horas=a3;
printf("precio por hora del empleado\n");
fflush(stdin);
scanf("%d", &a4);
*suel=a4;
}
