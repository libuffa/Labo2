#include "stdio.h"
#include "stdlib.h"
#include "string.h"

typedef struct
{
    int legajo;
    char cat;
    float sueldo;
}empleado;

int menu()
{
    int op;
    printf("Elija una opcion\n");
    printf("1. Emitir datos\n");
    printf("2. Agregar datos\n");
    printf("3. Buscar registro\n");
    printf("4. Modificar datos\n");
    printf("5. Eliminar datos\n");
    printf("0. Salir\n");
    scanf("%d", &op);
    return op;
}

void guardarDatos(empleado *e)
{
    printf("Ingresar legajo:\n");
    scanf("%d", &e->legajo);
    printf("Ingresar categoria:\n");
    fflush(stdin);
    scanf("%c", &e->cat);
    printf("Ingresar sueldo:\n");
    scanf("%f", &e->sueldo);
}

char leerCaracter()
{
    int c;
    printf("Aumentar sueldo a la categoria:\n");
    fflush(stdin);
    scanf("%c", &c);
    return c;
}

int leerLegajo()
{
    int l;
    printf("Insertar legajo:\n");
    scanf("%d", &l);
    return l;
}

void modificarSueldo(FILE **fa)
{
    FILE *ftemp;
    empleado emp;
    char c;
    c = leerCaracter();
    ftemp = fopen("empleados.tmp", "wb");
    rewind(*fa);
    while(fread(&emp, sizeof(empleado), 1, *fa))
    {
        if(emp.cat == c)
            emp.sueldo = emp.sueldo * 1.15;
        fwrite(&emp, sizeof(empleado), 1, ftemp);
    }
    fclose(ftemp);
    fclose(*fa);
    remove("empleados.bkp");
    rename("empleados.dat", "empleados.bkp");
    rename("empleados.tmp", "empleados.dat");
    *fa = fopen("empleados.dat", "r+b");
    printf("Se han modificado los sueldos de categoria %c\n", c);
    system("pause");
}

void bajaLogica(FILE **fa)
{
    FILE *ftemp;
    empleado emp;
    int l;
    l = leerLegajo();
    ftemp = fopen("empleados.tmp", "wb");
    rewind(*fa);
    while(fread(&emp, sizeof(empleado), 1, *fa))
        if(emp.legajo != l)
            fwrite(&emp, sizeof(empleado), 1, ftemp);
    fclose(ftemp);
    fclose(*fa);
    remove("empleados.bkp");
    rename("empleados.dat", "empleados.bkp");
    rename("empleados.tmp", "empleados.dat");
    *fa = fopen("empleados.dat", "r+b");
    printf("Se ha eliminado el legajo %d\n", l);
    system("pause");
}

main()
{
    empleado emp;
    FILE *fa;
    int opcion, legajo;
    fa = fopen("empleados.dat", "r+b");
    if(!fa) fa = fopen("empleados.dat", "w+b");
    if(fa != NULL)
        do
        {
            system("cls");
            opcion = menu();
            switch(opcion)
            {
            case 1://Emitir datos

                fseek(fa, 0, SEEK_SET);
                fread(&emp, sizeof(empleado), 1, fa);
                while(!feof(fa))
                {
                    printf("Legajo: %d\nCategoria: %c\nSueldo: %.2f\n", emp.legajo, emp.cat, emp.sueldo);
                    fread(&emp, sizeof(empleado), 1, fa);
                }
                system("pause");
                break;

            case 2://Agregar datos

                fseek(fa, 0, SEEK_END);
                guardarDatos(&emp);
                fwrite(&emp, sizeof(empleado), 1, fa);
                break;

            case 3://Buscar registros

                legajo = leerLegajo();
                fseek(fa, legajo*sizeof(empleado), SEEK_SET);
                fread(&emp, sizeof(empleado), 1, fa);
                printf("Legajo: %d\nCategoria: %c\nSueldo: %.2f\n", emp.legajo, emp.cat, emp.sueldo);
                system("pause");
                break;

            case 4://Modificar datos

                modificarSueldo(&fa);
                break;

            case 5://Dar de baja

                bajaLogica(&fa);
                break;

            default:
                break;
            }
        }while(opcion != 0);
    else perror("");
    fclose(fa);
}
