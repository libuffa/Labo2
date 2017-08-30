#include "stdio.h"
#include "stdlib.h"
#define S scanf(
#define P printf(

typedef struct{
    int legajo;
    char categoria;
    float sueldo;
    int baja; //CAMPO BOOLEAN: Campo marca para la baja logica (mantengo el registro pero no lo tengo en cuenta).
}empleado;

int menu(){
    int x;
    P"Qué tarea desea realizar? Ingrese su seleccion presionando un numero del 1 al 4:\n");
    P"1. Emitir datos\n");
    P"2. Agregar datos\n");
    P"3. Modificar sueldos segun categoria\n");
    P"4. Eliminar datos\n");
    P"0. Salir\n");
    S"%d",&x);
    fflush(stdin);
    return x;
}

void leerFile(FILE **archivo){

    system("cls");
    empleado empl;
    if(*archivo!=NULL){
        fseek(*archivo,0,SEEK_SET); //Seteo del marcador de lectura al inicio del archivo.
        fread(&empl,sizeof(empleado),1,*archivo);
        while(!feof(*archivo)){
            if(empl.baja==0) //No considero los registros de empleados que sean BAJA.
                printf("Legajo: %d\nCategoria: %c\nSueldo: %.2f\n\n", empl.legajo, empl.categoria, empl.sueldo);
            fread(&empl,sizeof(empleado),1,*archivo);
        }
    }else perror("");
    fclose(*archivo);
}

void cargaEmpleados(FILE **origen){
    int flag=1;
    while (flag!=0){
        empleado empl;
        system("cls");
        if(origen!=NULL){
            P"Indique numero de legajo del empleado\n");
            S"%d",&empl.legajo);
            fflush(stdin);
            P"Indique categoria del empleado\n");
            S"%c",&empl.categoria);
            fflush(stdin);
            P"Indique sueldo del empleado\n");
            S"%f",&empl.sueldo);
            fflush(stdin);
            empl.baja=0; //El campo baja arranca por defecto como FALSO.
            fwrite(&empl,sizeof(empleado),1,*origen);
        }else perror("");
        P"Presione 1 para continuar, 0 para salir\n");
        S"%d",&flag);
    }
    fclose(*origen);
}

void cargaParametros(char *c, float *f){ //Lectura de parametros de modificaciones de registros.
    P"Reajuste de sueldos segun categoria\n\nIndique categoria a modificar\n");
    S"%c",c);
    fflush(stdin);
    P"Indique reajuste a sueldos en formato porcentual (ej: 5,3 para 5,3/100)\n");
    S"%f",f);
    fflush(stdin);
}

int ajustaSueldos(char c, float f, FILE **archivo){
    empleado empl;
    int i=-1,j=0;   //Inicializo i en -1 porque i es el contador de registros (los cuales se inicializan en 0).
                    //Sirve para la escritura sin uso de un auxiliar.
    if(*archivo!=NULL){
        fseek(*archivo,0,SEEK_SET);
        fread(&empl,sizeof(empleado),1,*archivo);
        while(!feof(*archivo)){
            i++; //Convierto i en 0. Cada paso se suma 1 a la cuenta de registros.
            if(empl.baja==0 && empl.categoria==c){ //Si el empleado NO es baja y pertenece a la categoria, lo modifico.
                j++;//Cuento cuántos registros modifico.
                empl.sueldo=empl.sueldo*(1+(f/100)); //Calculo el ajuste.
                fseek(*archivo,i*sizeof(empleado),SEEK_SET);//Posiciono el cursor en el registro que acabo de leer.
//NOTA: CADA VEZ QUE USO fread, EL CURSOR SE ADELANTA UN REGISTRO. LA CUENTA QUE LLEVA i SIRVE PARA VOLVER UN REGISTRO HACIA ATRAS.
//SE PUEDE IMAGINAR AL PUNTERO MENCIONADO COMO EL CARACTER PARPADEANTE CUANDO SE ESCRIBE.
                fwrite(&empl,sizeof(empleado),1,*archivo);//SOBREESCRIBO EL REGISTRO.
                fseek(*archivo,(i+1)*sizeof(empleado),SEEK_SET);//Vuelvo a posicionar el registro de lectura para leer el próximo registro. SI NO SE HACE ÉSTO, EL PROGRAMA ENTRA EN LOOP (Vuelve a leer el registro ya modificado y vuelve a modificarlo).
            }
            fread(&empl,sizeof(empleado),1,*archivo); //Paso al siguiente registro.
        }
    }else perror("");
    return (j);
}

int buscaEmpleados(FILE **archivo){

    int valBuscado,i=-1, flag=0; //Inicializo i en -1 porque i es el contador de registros (los cuales se inicializan en 0). Sirve para la escritura sin uso de un auxiliar.
    system("cls");
    P"Indique el numero de legajo\n");
    S"%d",&valBuscado);
    empleado empl;
    if(*archivo!=NULL){
        fseek(*archivo,0,SEEK_SET);
        fread(&empl,sizeof(empleado),1,*archivo);
        while(!feof(*archivo)&&flag!=1){
            i++;//Convierto i en 0. Cada paso se suma 1 a la cuenta de registros.
            if(empl.baja==0 && empl.legajo==valBuscado) flag=1; //Si encuentro el registro, termino la búsqueda.
                else fread(&empl,sizeof(empleado),1,*archivo);
        }
    }else perror("");
    if (flag==1) return i; //Devuelvo a main la posición del registro buscado.
        else return -1; //Devuelvo un valor marcado para determinar que el registro no existe.
}

void bajaLogica(FILE **archivo,int x){

    empleado empl;
    //el valor x es i en la función anterior; es la marca de registro a dar de baja.
    fseek(*archivo,x*sizeof(empleado),SEEK_SET); //x*sizeof(empleado) me da la posición en bytes del empleado a dar de baja.
    fread(&empl,sizeof(empleado),1,*archivo); //leo el registro y lo cargo en memoria. EL BUFFER SE ADELANTA UN REGISTRO.
    empl.baja=1; //Cambio el campo baja a VERDADERO.
    fseek(*archivo,x*sizeof(empleado),SEEK_SET);//ahora retorno el valor del buffer de lectura a la posición previa a la lectura.
    fwrite(&empl,sizeof(empleado),1,*archivo);//sobreescribo el registro con el campo baja = VERDADERO.
    printf("Legajo: %d\nCategoria: %c\nSueldo: %.2f\nHA SIDO DADO DE BAJA EXITOSAMENTE\n\n", empl.legajo, empl.categoria, empl.sueldo);
    fclose(*archivo);
}

main(){
    int x,i;
    char c;
    float f;
    FILE *origen;
    P"Bienvenido al sistema de administracion de empleados\n");
    system("pause");
    system("cls");
    x=menu();
    while(x!=0){
        switch(x){
        case 1:
            origen=fopen("empleados.dat","rb");//abro solo como lectura
            if (!origen) P"No hay registros cargados\n"); //si no existe, lo creo.
                else leerFile(&origen);
            break;
        case 2:
            origen=fopen("empleados.dat","ab");//lo abro como archivo al que adicionar.
            if (!origen) origen=fopen("empleados.dat","wb");//si no existe, lo creo.
            cargaEmpleados(&origen);
            break;
        case 3:
            origen=fopen("empleados.dat","rb+");//abro como lectura y modificación.
            if (!origen) P"No hay registros cargados\n");
                else{
                    cargaParametros(&c,&f);
                    P"MODIFICADOS EXITOSAMENTE %d REGISTROS\n",ajustaSueldos(c,f,&origen));//Indicador de registros modificados con éxito.
                }
            fclose(origen);
            break;
        case 4:
            origen=fopen("empleados.dat","rb+");
            if (!origen) P"No hay registros cargados\n");
                else{
                    i=buscaEmpleados(&origen);
                    if (i!=-1) bajaLogica(&origen, i);//Si i no da error, procede a la baja logica.
                    else P"Valor no encontrado\n");
                    }
            break;
        }
        system("pause");
        system("cls");
        x=menu();
    }
}
