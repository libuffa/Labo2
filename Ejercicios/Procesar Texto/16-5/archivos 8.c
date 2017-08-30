#include "stdio.h"
#include "stdlib.h"
#include "conio.h"

struct antiguedad
{
    int mes;
    int anio;
};

struct empleado
{
    char nombre[20];
    int sueldo;
    struct antiguedad antig;
};


main()
{
    struct empleado a;
    FILE *archivo;
    archivo=fopen("sueldos.dat","w");
    a.nombre[20]="carlos";
    a.sueldo=10000;
    a.antig.mes = 6;
    a.antig.anio=  4;
    if(archivo != NULL)
    {
        //while(!feof(archivo))
        //{
            fprintf(archivo,"%s\n",a.nombre);
        //}
        fclose(archivo);
    }
    else {perror("");}
    system("Pause");
}
