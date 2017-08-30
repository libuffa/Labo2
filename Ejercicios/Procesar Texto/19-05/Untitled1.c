#include "stdio.h"

void funcion1(int *cont_clientes,char *max_cat,int *cont_b);
float funcion2(char pcat,float sumc,float sump,float sumb);

main()
{
      int total,tot_b;
      char max;
      funcion1(&total,&max,&tot_b);
      printf("Se ingresaron en total %d clientes\n",total);
      /*if (strcmp(max,"E")==0)printf("Hay un empate\n");
      else*/ printf("La categoria %c dejo mayor ganancia\n",max);
      printf("Hubo un total de %d facturas B\n",tot_b);
      system("Pause");
      }

void funcion1(int *cont_clientes,char *max_cat,int *cont_b){
     int f=1;*cont_clientes=0;*cont_b=0;
     float costo, tot_c=0, tot_p=0,tot_b=0,sumc=0,sump=0,sumb=0;
     char cat;*max_cat=' ';
     while(f !=0){
             (*cont_clientes)++;
             int i, costo_total_cliente=0;
             for(i=0;i<12;i++){
                               printf("Ingrese categoria\n");
                               fflush(stdin);
                               scanf("%c",&cat);
                               printf("Ingrese importe\n");
                               fflush(stdin);
                               scanf("%f",&costo);
                               switch(cat){
                                           case 'C':
                                           case 'c':
                                                tot_c=tot_c+costo;
                                                sumc=sumc+costo;
                                                break;
                                           case 'P':
                                           case 'p':
                                                tot_p=tot_p+costo;
                                                sump=sump+costo;
                                                break;
                                           case 'B':
                                           case 'b':
                                                tot_b=tot_b+costo;
                                                sumb=sumb+costo;
                                                (*cont_b)++;
                                                break;
                                           default:
                                                 printf("Opcion incorrecta\n");
                                                 i--;
                                                 break;  
                                           }
                               }
             costo_total_cliente=funcion2(cat,sumc,sump,sumb);
             printf("El total de importes del cliente es de %f $ \n",costo_total_cliente);
             sumc=0;sump=0;sumb=0;
             printf("¿Desea finalizar? (Ingrese 0)\n");
             fflush(stdin);
             scanf("%d",&f);
             }
             if(tot_c>tot_p && tot_c>tot_b) *max_cat='C';
             else if(tot_p>tot_c && tot_p>tot_b) *max_cat='P';
             else if(tot_b>tot_c && tot_b>tot_p) *max_cat='B';
             else *max_cat='E';
     }

float funcion2(char pcat,float psumc,float psump,float psumb){
      printf("El abono C tuvo un total de %f $\n",psumc);
      printf("El abono P tuvo un total de %f $\n",psump);
      printf("El abono B tuvo un total de %f $\n",psumb);
      float total;
      total = psumc + psump + psumb;
      return total;
      }
