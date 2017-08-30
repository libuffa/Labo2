#include "stdio.h"
#include "stdlib.h"
#include "math.h"

void anio(int *total_notas, float *prom_max);
float procesarDatos(float *psuma,int *pconta,float *psumb,int *pcontb,float *psumc,int *pcontc);

main()
{
      int i,total_anio=0;
      float max=0,aux;
      for(i=0;i<5;i++) 
      {
              printf("\n Ingresar notas del %d° anio\n",i+1);
              anio(&total_anio,&aux);  
              if(aux>max) max=aux;   
      }
      printf("\nSe procesaron %d notas\nEl promedio maximo es de %.2f",total_anio,max);
      system("Pause");
}

void anio(int *total_notas, float *prom_max)
{
     float nota,suma=0,sumb=0,sumc=0;
     int legajo,conta=0,contb=0,contc=0;
     char div;
     *total_notas=0;
     printf("Ingrese numero de legajo: (0 para finalizar)\n");
     scanf("%d",&legajo);
     while(legajo!=0)
     {         
            printf("Indique la division:\n");
            fflush(stdin);
            scanf("%c",&div);
            do
            {
                        switch(div)
                        {
                                     case 'A':
                                     case 'a':
                                          printf("Ingrese la nota del alumno:\n");
                                          fflush(stdin);
                                          scanf("%f",&nota); 
                                          suma= suma + nota;
                                          conta++;
                                          *total_notas=*total_notas+conta;
                                          break;
                                     case 'B':
                                     case 'b':
                                          printf("Ingrese la nota del alumno:\n");
                                          fflush(stdin);
                                          scanf("%f",&nota);
                                          sumb= sumb + nota;
                                          contb++;
                                          *total_notas=*total_notas+contb;
                                          break;
                                     case 'C':
                                     case 'c':
                                          printf("Ingrese la nota del alumno:\n");
                                          fflush(stdin);
                                          scanf("%f",&nota);
                                          sumc= sumc + nota;
                                          contc++;
                                          *total_notas=*total_notas+contc;
                                          break; 
                                     default:
                                     break;     
                        }                
            }while(div!='A' && div!='a' && div!='B' && div!='b' && div!='C' && div!='c');
            printf("Por favor ingrese nuevamente legajo, en el caso de querer finalizar ingrese 0\n");
            fflush(stdin);
            scanf("%d",&legajo);
     }
     *prom_max = procesarDatos(&suma,&conta,&sumb,&contb,&sumc,&contc);
}

float procesarDatos(float *psuma,int *pconta,float *psumb,int *pcontb,float *psumc,int *pcontc)
{
     float proma,promb,promc,prommax;
     proma=*psuma / *pconta;
     promb=*psumb / *pcontb;
     promc=*psumc / *pcontc;
     printf("La división A obtuvo un promedio general de %.2f.\nLa división B obtuvo un promedio general de %.2f.\nLa división C obtuvo un promedio general de %.2f.\n",proma,promb,promc);
     if(proma>promb && proma > promc) prommax = proma;
     else if( promb>proma && promb > promc) prommax = promb;
     else prommax=promc;
     return prommax;
}
