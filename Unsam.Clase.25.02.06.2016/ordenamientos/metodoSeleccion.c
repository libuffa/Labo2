#include "stdio.h"

int seleccion(int vec[], int lengv){
    int i, j=0, max=-9999, flag=0;
    for(i=0;i<lengv;i++){
        if (vec[i]>max){
            max=vec[i];
            j=i;
            flag=1;
        }
    };
    if (flag!=0){
        vec[j]=vec[lengv-1];
        vec[lengv-1]=max;
    }
    //printf("%d\n",flag);
    return flag;
}

main(){
    int i, j=10, ctrl, v[j];
    for(i=0;i<10;i++){
        v[i]=rand()%1000;
        printf("%d\n",v[i]);
        }
    ctrl=seleccion(v,j);
    printf("\n");
    while (ctrl!=0){
        ctrl=seleccion(v,j--);
    };
    for(i=0;i<10;i++){
        printf("%d\n",v[i]);
    };
    return;
}
