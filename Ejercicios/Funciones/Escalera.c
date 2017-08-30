#include "stdio.h"

const int a=5, b=9;

void escriboFila(int *fila[],int i);

void main(){

int fila[b],i,j;

for(j=1;j<=9;j++){
    fila[j]=0;
};

for(i=1;i<=a;i++){
    escriboFila(&fila,i);
    for(j=1;j<=9;j++){
        if (fila[j]>0)
            printf("%d",fila[j]);
        else
            printf(" ");
    };
    printf("\n");
};
}

void escriboFila(int *fila[],int i){

int j;

for(j=(a-i)+1;j<=(b-(a-i));j++){
    fila[j]=(int)fila[j]+1;
}
};
