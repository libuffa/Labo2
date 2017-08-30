#include "stdio.h"

void funcion1(int *cont_clientes,char *max_cat,int *cont_b);
void funcion2(char *div,float *sumc,float *sump,float *sumb,int *contb,float *costo);

main()
{
    int total,cont_b;
    char max;
    funcion1(&total,&max,&cont_b);
    printf("Se ingresaron en total %d clientes \n",total);
    if(max == 'E') printf("Hay un empate\n");
    else printf("La categoria %c dejo mayor ganancias\n",max);
    printf("Hay un total de %d facturas B \n",cont_b);
    system("Pause");
}

void funcion1(int *cont_clientes,char *max_cat,int *cont_b)
{
    int f=1,contb=0;
    *cont_clientes=0;
    *cont_b=0;
    float costo,tot_c=0,tot_p=0,tot_b=0,sumc,sump,sumb,total_cliente=0;
    char cat;
    while(f!=0)
    {
        sumc=0;
        sump=0;
        sumb=0;
        (*cont_clientes)++;
        int i;
        for(i=0;i<3;i++)
        {
            printf("Ingrese categoria\n");
            fflush(stdin);
            scanf("%c",&cat);
            printf("Ingrese importe:\n");
            scanf("%f",&costo);
            funcion2(&cat,&sumc,&sump,&sumb,&contb,&costo);
        }
        total_cliente=sumc+sump+sumb;
        printf("El costo total del cliente es de %.2f $ \n",total_cliente);

        tot_c=tot_c+sumc;
        tot_p=tot_p+sump;
        tot_b=tot_b+sumb;
        *cont_b=*cont_b+contb;
        printf("Desea finalizar? (presione 0)\n");
        fflush(stdin);
        scanf("%d",&f);
    }
    if(tot_c>tot_p && tot_c>tot_b) *max_cat='C';
    else if(tot_p>tot_c && tot_p>tot_b) *max_cat='P';
    else if(tot_b>tot_c && tot_b>tot_p) *max_cat='B';
    else *max_cat='E';
}

void funcion2(char *cat,float *sumc,float *sump,float *sumb,int *contb,float *costo)
{
    switch(*cat)
    {
    case 'C':
    case 'c':
        *sumc=*sumc+*costo;
        break;
    case 'P':
    case 'p':
        *sump=*sump+*costo;
        break;
    case 'B':
    case 'b':
        *sumb=*sumb+*costo;
        (*contb)++;
        break;
    default:
        break;
    }
}
