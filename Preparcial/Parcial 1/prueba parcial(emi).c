#include "stdio.h"
#include "stdlib.h"

void funcion2 (char d, int n, int *pca, int *pcb, int *pcc, int *paa, int *pab, int *pac);
int funcion1(float *max);

main(){
int tnotas;
float mayor=0;
tnotas=funcion1(&mayor);
printf("el total de notas procesadas es de %d\n", tnotas);
printf("el mayor promedio fue %.2f", mayor);
}

int funcion1(float *max){
int i, cn=0, nota, aa, ab, ac, ca, cb, cc;
char div;
float proma, promb, promc;
for (i=1;i<=1;i++){
aa=0,ab=0,ac=0,ca=0,cb=0,cc=0;
printf("año num %d\n", i);
printf("ingrese curso\n");
scanf("%c", &div);
fflush(stdin);
    while(div!='0'){
printf("ingrese nota\n");
scanf("%d", &nota);
fflush(stdin);
funcion2(div, nota, &ca, &cb, &cc, &aa, &ab, &ac);
printf("ingrese curso\n");
scanf("%c", &div);
fflush(stdin);

    cn++;
                    }}
  proma=(float)aa/ca;
  promb=(float)ab/cb;
  promc=(float)ac/cc;

  if (proma>*max) *max=proma;
  if (promb>*max) *max=promb;
  if (promc>*max) *max=promc;

printf("El promedio de la div A es %.2f\n", proma);
  printf("El promedio de la div B es %.2f\n", promb);
  printf("El promedio de la div C es %.2f\n", promc);
    return cn;        }

void funcion2 (char d, int n, int *pca, int *pcb, int *pcc, int *paa, int *pab, int *pac){
switch (d){
case 'A':
case 'a': {*paa=*paa+n;
           (*pca)++;
            break;}
case 'B':
case 'b': {*pab=*pab+n;
           (*pcb)++;
            break;}
case 'C':
case 'c': {*pac=*pac+n;
           (*pcc)++;
            break;}
}
}





