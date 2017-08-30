#include "stdio.h"
#include "stdlib.h"


typedef struct
{
    int legajo;
    char categoria;
    float sueldo;

}empleado;


int menu ()
{
    int opcion;
    do
    {
        printf("Ingrese un el numero de la opcion deseada o cero para finalizar\n");
        printf("---------------------\n");
        printf("1: Cargar empleados\n");
        printf("2: Emitir planilla empleados\n");
        printf("3: Agregar empleados\n");
        printf("4: Modificar Sueldo\n");
        printf("5: Dar de baja empleado\n");
        printf("0: Salir\n");

    fflush(stdin);
    scanf("%d", &opcion);

    }while ((opcion<0)&&(opcion>6));



    return (opcion);
}





void cargar (empleado *aux)
{

        printf("ingrese el numero de legajo\n");
        fflush(stdin);
        scanf("%d", &aux->legajo);
        printf("ingrese categoria\n");
        fflush (stdin);
        scanf("%c", &aux->categoria);
        printf("Ingrese sueldo\n");
        fflush(stdin);
        scanf("%f", &aux->sueldo);

        system ("cls");
}

int leercaracter ()
{
    char cat;

    printf("Ingrese la categoria a aumentar\n");
    fflush(stdin);
    scanf("%c", &cat);

    return cat;
}

int leerporcentaje()
{
    float porc;

    printf("Ingrese el porcentaje a aumentar\n");
    fflush(stdin);
    scanf("%f", &porc);

    return (porc);
}

void transcribir(empleado aux, FILE **archivo, FILE **archivo2)
{
    fclose(*archivo);
    fclose(*archivo2);
    *archivo = fopen("empleados.dat", "w+b");
    *archivo2 = fopen("empleados.bkp", "r+b");
    fseek(*archivo, 0, SEEK_SET);
    fseek(*archivo2, 0, SEEK_SET);
    fread(&aux, sizeof(empleado), 1, *archivo);
    while(!feof(*archivo))
    {
        fwrite(&aux, sizeof(empleado), 1, *archivo2);
        fread(&aux, sizeof(empleado), 1, *archivo);
    }
}

int leerlegajo()
{
    int leg;

    printf("Ingrese el legajo a eliminar\n");
    fflush(stdin);
    scanf("%d", &leg);

    return (leg);
}




main ()
{
    FILE *archivo;
    FILE *archivo2;
    int opcion, numero, leg;
    empleado aux;
    char caracter;
    float porcentaje;

    archivo = fopen("empleados.dat", "w+b");
    archivo2 = fopen("empleados.bkp", "w+b");

    if (archivo != NULL)
    {


        opcion = menu();

        while (opcion != 0)
        {
            system ("cls");

            switch (opcion)
            {
                case 1:
                    {
                        fseek(archivo, 0, SEEK_SET);

                        printf("Ingrese 1 para comenzar a cargar o cero para finalizar\n");
                        fflush(stdin);
                        scanf("%d", &numero);

                            while(numero !=0)
                            {
                                cargar (&aux);
                                fwrite (&aux, sizeof(empleado), 1, archivo);

                                printf("Ingrese 1 para seguir cargando o cero para finalizar\n");
                                fflush(stdin);
                                scanf("%d", &numero);
                            }

                            break;


                        }



                case 2:
                    {
                        fseek(archivo, 0, SEEK_SET);
                        fread (&aux, sizeof(empleado), 1, archivo);

                        while(!feof(archivo))
                        {
                            printf("LEGAJO: %d CATEGORIA: %c SUELDO: %.2f\n", aux.legajo, aux.categoria, aux.sueldo);

                            fread (&aux, sizeof(empleado), 1, archivo);

                        }

                        system("pause");
                        system ("cls");

                        break;
                    }
                case 3:
                    {
                        fseek(archivo, 0, SEEK_END);

                        cargar (&aux);

                        fwrite (&aux, sizeof(empleado), 1, archivo);

                        break;

                    }
                case 4:
                    {
                        caracter = leercaracter();
                        porcentaje = leerporcentaje();

                        fseek(archivo, 0, SEEK_SET);
                        fread(&aux, sizeof(empleado), 1, archivo);
                        while(!feof(archivo) )
                        {
                            if(aux.categoria == caracter)
                            aux.sueldo = aux.sueldo * (1+ (porcentaje/100));
                            fwrite(&aux, sizeof(empleado), 1, archivo2);
                            fread(&aux, sizeof(empleado), 1, archivo);
                        }
                        transcribir(aux, &archivo2, &archivo);

                        break;
                    }
                case 5:
                    {
                        leg = leerlegajo();

                        fseek(archivo, 0, SEEK_SET);
                        fread(&aux, sizeof(empleado), 1, archivo);

                        while(!feof(archivo) )
                        {
                            if(aux.legajo != leg)
                            fwrite(&aux, sizeof(empleado), 1, archivo2);
                            fread(&aux, sizeof(empleado), 1, archivo);
                        }
                        transcribir(aux, &archivo2, &archivo);
                        break;
                    }

            }

            opcion = menu();

       }


   }

   fclose(archivo);
   fclose(archivo2);
}


