#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int main(){
    int opcion,i=0;
    int dia,mes,year;
    char letter;
    do {
        do
        {
            printf("Ingrese la opción deseada\n 1.Conversor de fecha\n 2.Clasificador de letras\n 3.Finalizar programa...\n");
            scanf("%d",&opcion);
        }while((opcion<1) || (opcion>3));


        switch(opcion)
        {
            case 1:
                        printf("Ingrese un dia\n");
                        scanf("%d",&dia);
                        printf("Ingrese un mes\n");
                        scanf("%d",&mes);
                        printf("Ingrese un year\n");
                        scanf("%d",&year);

                        if( mes > 0 && mes <= 12){//Validar mes
                            switch (mes)//Corroborar que el mes tiene los dias correspondientes
                            {
                                case 1:
                                case 3:
                                case 5:
                                case 7:
                                case 8:
                                case 10:
                                case 12:
                                    if( dia>0 && dia<=31 )//Mes con 31 dias
                                    {
                                        //Aca traducimos
                                        switch(mes)
                                        {
                                            case 1: printf("Hoy es %d de Enero del %d\n",dia,year); break;
                                            case 3: printf("Hoy es %d de Marzo del %d\n",dia,year);break;
                                            case 5: printf("Hoy es %d de Mayo del %d\n",dia,year);break;
                                            case 7: printf("Hoy es %d de Julio del %d\n",dia,year);break;
                                            case 8: printf("Hoy es %d de Agosto del %d\n",dia,year);break;
                                            case 10: printf("Hoy es %d de Octubre del %d\n",dia,year);break;
                                            default: printf("Hoy es %d de Diciembre del %d\n",dia,year);
                                        }
                                    }else
                                    {
                                        printf("La cantidad de dias no se corresponde con el mes -mayor que 31\n");
                                    }
                                    break;
                                case 4:
                                case 6:
                                case 9:
                                case 11:
                                    if( dia>0 && dia<31 )//Meses con 30 dias
                                    {
                                        //Aca traducimos
                                        switch(mes)
                                        {
                                            case 4: printf("Hoy es %d de Abril del %d",dia,year);break;
                                            case 6: printf("Hoy es %d de Junio del %d",dia,year);break;
                                            case 9: printf("Hoy es %d de Septiembre del %d",dia,year);break;
                                            default: printf("Hoy es %d de Noviembre del %d",dia,year);
                                        }
                                    }else
                                    {
                                        printf("La cantidad de dias no se corresponde con el mes -mayor que 30\n");
                                    }
                                    break;
                                default:
                                    //bisiesto o no
                                    if( year>1900 && ((year%4==0 && year%100!=0)||year%400==0))
                                    {
                                        if( dia>0 && dia<=29) printf("Hoy es %d de Febrero del %d",dia,year);
                                        else printf("El dia ingresado no corresponde a Febrero bisciesto");
                                    }else{
                                        if( dia>0 && dia<29) printf("Hoy es %d de Febrero del %d",dia,year);
                                        else printf("El dia ingresado no corresponde a Febrero Normal");
                                    }
                            }
                        }else{
                                printf("No existe el mes indicado\n");
                        }
                        break;
                case 2:
                        fflush(stdin); //Limpia el BUFFER del teclado, sirve para C (hecho en UNIX);
                        printf("Ingrese una letra mayuscula\n");
                        scanf("%c",&letter);

                        switch(letter){
                            case 'A':
                            case 'E':
                            case 'F':
                            case 'H':
                            case 'I':
                            case 'K':
                            case 'L':
                            case 'M':
                            case 'N':
                            case 'T':
                            case 'V':
                            case 'W':
                            case 'X':
                            case 'Y':
                            case 'Z':
                                printf("Es una letra mayuscula solo con rectas\n");
                                break;
                            case 'Q':
                            case 'U':
                            case 'O':
                            case 'S':
                            case 'C':
                                printf("Es una letra mayuscula solo con curvas\n");
                                break;
                            case 'R':
                            case 'P':
                            case 'D':
                            case 'J':
                            case 'B':
                            case 'G':
                                printf("Es una letra mayuscula con rectas y curvas\n");
                                break;
                            default:
                                printf("Ud no ingreso una letra mayuscula\n");
                        }
                        break;
                case 3:
                        printf("Ha finalizado el programa...\n");
                        system("pause");
        }
    }while (opcion!=3);
    return 0;
}

