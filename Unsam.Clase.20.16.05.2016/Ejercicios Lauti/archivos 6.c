#include "stdio.h"


main()
{
    char alumno[20];
    int n1,n2,n3;
    float prom;
    FILE *archivo;
    archivo=fopen("alumnos.dat","rt");
    if(archivo!=NULL)
    {
        while(!feof(archivo))
        {
            fscanf(archivo,"%s %d %d %d",alumno,&n1,&n2,&n3);
            prom = (float)(n1+n2+n3)/3;
            printf("\n El promedio de este boludo que se llama %s es de %.2f\n",alumno,prom);
        }
    }else
    {
        perror("");
    }
    fclose(archivo);
}
