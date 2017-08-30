#include "stdio.h"

void burbuja(int vec[],int ord[], int lengv){
    int i,f,flag=0;
    for(i=0;i<lengv;i++){
            vec[i]=rand()%1000;
            printf("%d\n",vec[i]);
        }
    ord[0]=vec[0];
    system("pause");
    for(i=0;i<lengv;i++){
        for(f=i;f>lengv;f++)
        {
            if(vec[i]<ord[f])
            {
               ord[i+1]=ord[f];
               ord[i]=vec[i];
            }
        }
        printf("%d\n",ord[i]);
    }
}
main(){
    int v[10],i, ctrl,o[10];
    burbuja(v,o,10);
    for(i=0;i<10;i++)
        printf("%d\n",v[i]);
}
