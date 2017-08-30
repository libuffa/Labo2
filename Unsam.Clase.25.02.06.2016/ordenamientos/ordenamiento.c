#include "stdio.h"

void burbuja(int vec[], int lengv){
    int i,f,max,flag=0;
    max=vec[lengv];
    for(i=0;i<lengv;i++){
            vec[i]=rand()%1000;
            printf("%d\n",vec[i]);
        }
    system("pause");
    for(i=0;i<lengv;i++){
        for(f=0;f<lengv;f++)
        {
            if(vec[f]>max)
            {
                max=vec[f];
                vec[f]=vec[lengv-i-1];
                vec[lengv-i-1]=max;
            }
        }
    }
}
main(){
    int v[10],i, ctrl;
    burbuja(v,10);
    for(i=0;i<10;i++)
        printf("%d\n",v[i]);
}
