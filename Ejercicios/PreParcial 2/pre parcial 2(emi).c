#include "stdio.h"
#include "stdlib.h"
#define m 2

typedef struct{
int suc;
char barr[30];
float promvtasem;
}sucursal;

void cargarsuc(sucursal vecsuc[], int n);
void cargarven(float matven[][m], int n);
void cargarprom(sucursal vecsuc[], float matven[][m], int n);
void iniciovecpos(int vecpos[], int n);
void leer(int *x);
void supera(sucursal vecsuc[],int vecpos[], int n, int x,int *contsuc);
void emite(sucursal vecsuc[],int vecpos[],int contsuc);
void ordenanom(sucursal vecsuc[], int n);
void emitenom(sucursal vecsuc[], int n);


main(){
const int n=3;
int vecpos[n], contsuc, x;
sucursal vecsuc[n];
float matven[n][m];

cargarsuc(vecsuc, n);
cargarven(matven, n);
cargarprom(vecsuc, matven, n);
iniciovecpos(vecpos, n);
leer(&x);
supera(vecsuc, vecpos, n, x, &contsuc);
emite(vecsuc, vecpos, contsuc);
ordenanom(vecsuc, n);
emiteord(vecsuc, n);
return 0;





}


void cargarsuc(sucursal vecsuc[], int n){
int i;
    for(i=0;i<n;i++){
vecsuc[i].suc=i+1;
printf("nombre de la suc\n");
scanf("%s", vecsuc[i].barr);
}}

void cargarven(float matven[][m], int n){
int i, j;
for (i=0;i<n;i++){
    for(j=0;j<m;j++)
{   printf("ingrese ventas mes %d sucursal %d\n", j, i);
    scanf("%f", &matven[i][j]);
}
}}

void cargarprom(sucursal vecsuc[], float matven[][m], int n){
int i, j;
float suma;
for (i=0;i<n;i++){
        suma=0;
    for (j=0;j<m;j++){
        suma=suma+matven[i][j];
        }
    vecsuc[i].promvtasem=(suma/m);
    printf("\n");

}}

void iniciovecpos(int vecpos[], int n){
int i;
for (i=0;i<n;i++){
    vecpos[i]=-1;}
}

void leer(int *x){
printf("ingrese num para comparar\n");
scanf("%d", x);
}


void supera(sucursal vecsuc[],int vecpos[], int n, int x,int *contsuc){
int i;
*contsuc=0;
for (i=0; i<n; i++){

    if (vecsuc[i].promvtasem>x){
        vecpos[*contsuc]=i;
        (*contsuc)++;

    }}


    }

void emite(sucursal vecsuc[],int vecpos[],int contsuc){
int i;
printf ("campos que superan a X:\n");

for(i=0;i<contsuc;i++){
    printf("%d\n", vecsuc[vecpos[i]].suc);
    printf("%s\n", vecsuc[vecpos[i]].barr);
    printf("%.2f\n", vecsuc[vecpos[i]].promvtasem);
    printf("\n");
}}

void ordenanom(sucursal vecsuc[], int n){
int i, j, bandera;
sucursal aux;

for(i=0;i<n;i++){
    bandera=0;
    for(j=0;j<=n-i;j++){
        if(strcmp(vecsuc[j].barr,vecsuc[j+1].barr)>0){
            aux=vecsuc[j+1];
            vecsuc[j+1]=vecsuc[j];
            vecsuc[j]=aux;
            bandera=1;

        }
        if (bandera==0)
            i=n;
        }}}

void emiteord(sucursal vecsuc[], int n){
int i;
printf("vectores ordenados:\n");
for(i=0;i<n;i++){
    printf("%d %s %.2f\n", vecsuc[i].suc, vecsuc[i].barr, vecsuc[i].promvtasem);

}

}
