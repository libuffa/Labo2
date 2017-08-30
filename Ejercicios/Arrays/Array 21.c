#include <stdio.h>
#include <ctype.h>

void insertarValor(int *array,int n)
{
    int i,flag=0;
    for(i=0;i<10;i++) if(n==array[i]) flag=1;
    if(flag==1) printf("El numero %d ya se encuentra en el arreglo en la posicion %d",n,i);
    else ordenarValor(array,n);
}

void ordenarValor(int *array2,int n2)
{
    int i,f;
    for(i=0;i<10;i++)
    {
        if(n2<array2[i])
        {
            for(f=9;f>i;f--) array2[f]=array2[f-1];
            array2[i]=n2;
            i=10;
        }
    }
}

mostrarDatos(int *array)
{
    int i;
    printf("Listado de valores del arreglo\n");
    for(i=0;i<10;i++) printf("%d\n",array[i]);
}

main()
{
    int arreglo[10],f=1,num;
    while(f!=0)
    {
        printf("Ingresar numero:\n");
        scanf("%d",&num);
        insertarValor(arreglo,num);
        mostrarDatos(arreglo);
        printf("Para finalizar presione 0\n");
        scanf("%d",&f);
    }
}
