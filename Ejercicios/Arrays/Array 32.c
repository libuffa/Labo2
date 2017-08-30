#include "stdio.h"
#include "string.h"
#define DIM 2

void insertarMedico(char nombreMedico[DIM][50],char especialidad[DIM], int disponibilidad[DIM])
{
    int i;
    char nombre[50];
    for(i=0;i<DIM;i++)
    {
        printf("Ingrese nombre del medico\n");
        fflush(stdin);
        scanf("%s",nombre);
        fflush(stdin);
        strcpy(nombreMedico[i],nombre);
        printf("Ingrese especialidad del medico\n");
        fflush(stdin);
        scanf("%c",&especialidad[i]);
        fflush(stdin);
        printf("Ingrese disponibilidad del medico\n");
        scanf("%d",&disponibilidad[i]);
    }
}

void insertarPaciente(char nombrePaciente[20],char *especialidadPaciente)
{
    printf("Ingresar nombre del paciente:\n");
    scanf("%s",nombrePaciente);
    printf("Ingresar especialidad requerida\n");
    fflush(stdin);
    scanf("%c",especialidadPaciente);
    fflush(stdin);
}

void asignarMedico(char nombrePaciente[20],char especialidadPaciente,char especialidad[DIM], int disponibilidad[DIM],char nombreMedico[DIM][50])
{
    int i=0;
    printf("A continuacion se procedera a asignar al paciente un profesional\n");
    while(i>=0 && i<DIM)
    {
        i=rand()%DIM;
        if(especialidad[i]==especialidadPaciente)
        {
            if(disponibilidad[i]==0)
            {
                disponibilidad[i]=1;
                printf("El paciente %s ha sido asignado al doctor %s, por lo tanto no estara disponible\n",nombrePaciente,nombreMedico[i]);
                i=-1;
            }
        }
    }
}

main()
{
    char nMedico[DIM][50],esp[DIM],nPaciente[20],espPaciente;
    int disp[DIM];
    insertarMedico(nMedico,esp,disp);
    insertarPaciente(nPaciente,&espPaciente);
    asignarMedico(nPaciente,espPaciente,esp,disp,nMedico);
}
