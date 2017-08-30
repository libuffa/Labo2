#include "stdio.h"
#define N 4

typedef struct
{
    char nom[20];
    char calle[20];
    int cnum;
    char sexo;
    int saldo;
}clientes;

FILE *cl, *va, *mu;

void asignar(clientes c)
{
    cl = fopen("clientes.dat", "r");
    va = fopen("varones.dat", "w");
    mu = fopen("mujeres.dat", "w");
    if(cl != NULL)
    {
        while(!feof(cl))
        {
            fscanf(cl,"%s %s %d %c %d", c.nom, c.calle, &c.cnum, &c.sexo, &c.saldo);
            if(c.sexo == 'F')
                fprintf(mu, "%s %s %d %c %d\n", c.nom, c.calle, c.cnum, c.sexo, c.saldo);
            else
                fprintf(va, "%s %s %d %c %d\n", c.nom, c.calle, c.cnum, c.sexo, c.saldo);
        }
    }else perror("");
    fclose(cl);
    fclose(va);
    fclose(mu);
}

void calcularPromedio(clientes c)
{
    int contva = 0, contmu = 0, sumva = 0, summu = 0,total;
    float promva, prommu;
    va = fopen("varones.dat", "r");
    mu = fopen("mujeres.dat", "r");
    if(va!=NULL && mu!=NULL)
    {
        while(!feof(va))
        {
            fscanf(va,"%s %s %d %c %d", c.nom, c.calle, &c.cnum, &c.sexo, &c.saldo);
            sumva = sumva + c.saldo;
            if(c.saldo > 0)
                contva++;
            c.saldo = 0;
        }
        while(!feof(mu))
        {
            fscanf(mu,"%s %s %d %c %d", c.nom, c.calle, &c.cnum, &c.sexo, &c.saldo);
            summu = summu + c.saldo;
            if(c.saldo > 0)
                contmu++;
            c.saldo = 0;
        }
    }else perror("");
    fclose(va);
    fclose(mu);
    promva = (float) sumva / contva;
    prommu = (float) summu / contmu;
    total = contva + contmu;
    printf("Numero total de clientes: %d \nNumero de varones: %d \nNumero de mujeres: %d \nPromedio de saldos para mujeres: %.2f \nPromedio de saldos para hombres: %.2f", total, contva, contmu, prommu, promva);
}

main()
{
    clientes cliente;
    int contv, contm;
    asignar(cliente);
    calcularPromedio(cliente);
}
