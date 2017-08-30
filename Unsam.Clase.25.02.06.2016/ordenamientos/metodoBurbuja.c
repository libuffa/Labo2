#include "stdio.h"

int burbuja(int *vec[], int lengv){
    int i, aux, flag=0;
    for(i=1;i<(lengv);i++){
        if (vec[i]<vec[i-1]){
            aux=vec[i-1];
            vec[i-1]=vec[i];
            vec[i]=aux;
            flag=1;
        }
    };
    return flag;
}
main(){
    int i, j=10, ctrl, v[j];
    for(i=0;i<10;i++)
        {
        v[i]=rand()%10000;
        printf("%d\n",v[i]);
        }
    ctrl=burbuja(v,j);
    printf("\n");
    while (ctrl!=0){
        ctrl=burbuja(v,j--);
    };
    for(i=0;i<10;i++){
        printf("%d\n",v[i]);
    };
    return;
}
