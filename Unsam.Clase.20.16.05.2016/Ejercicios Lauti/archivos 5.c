#include "stdio.h"

main()
{
    int i,numero;
    FILE *archivo;
    archivo=fopen("divis.dat","wt");
    if(archivo!=NULL)
    {
        printf("Ingrese el numero: \n");
        scanf("%d",&numero);
        for(i=1;i<=numero;i++)
        {
            if((numero%i)==0)fprintf(archivo,"%d es divisor de %d\n",i,numero);
        }
    }else
    {
        perror("");
    }
    fclose(archivo);
}
