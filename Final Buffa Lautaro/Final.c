#include "stdio.h"
#include "stdlib.h"

typedef struct
{
    int id;
    char nombre[20];
    int stock;
    float precio;
}producto;

int menu()
{
    int op;
    printf("Elegir una opcion:\n");
    printf("1.Guardar producto.\n");
    printf("2.Emitir todo.\n");
    printf("3.Buscar producto.\n");
    printf("4.Aumentar stock.\n");
    printf("5.Dar de baja un producto.\n");
    printf("0.Salir.\n");
    scanf("%d", &op);
    return op;
}

void guardarDatos(producto *p)
{
    printf("Ingresar id:\n");
    scanf("%d", &p->id);
    printf("Ingresar nombre producto:\n");
    scanf("%s", &p->nombre);
    printf("Ingresar stock:\n");
    scanf("%d", &p->stock);
    printf("Ingresar precio unitario:\n");
    scanf("%f", &p->precio);
}

void emitirDatos(FILE **fa)
{
    producto p;
    fseek(*fa, 0, SEEK_SET);
    while(fread(&p, sizeof(producto), 1, *fa))
        printf("Id: %d\nNombre: %s\nStock: %d\nPrecio: %.2f\n", p.id, p.nombre, p.stock, p.precio);
    system("pause");
}

int leerId()
{
    int id;
    printf("Ingresar id:\n");
    scanf("%d", &id);
    return id;
}

void buscarProducto(FILE **fa)
{
    int i = leerId();
    producto p;
    fseek(*fa, 0, SEEK_SET);
    while(fread(&p, sizeof(producto), 1, *fa))
        if(i == p.id) printf("Id: %d\nNombre: %s\nStock: %d\nPrecio: %.2f\n", p.id, p.nombre, p.stock, p.precio);
    system("pause");
}

void aumentarStock(FILE **fa)
{
    int nstock, i = leerId();
    printf("Ingresar cantidad de productos a aumentar:\n");
    scanf("%d", &nstock);
    producto p;
    FILE *ftemp;
    ftemp = fopen("stock.temp", "wb");
    rewind(*fa);
    while(fread(&p, sizeof(producto), 1, *fa))
    {
        if(i == p.id) p.stock = p.stock + nstock;
        fwrite(&p, sizeof(producto), 1, ftemp);
    }
    fclose(*fa);
    fclose(ftemp);
    remove("stock.bkp");
    rename("stock.dat", "stock.bkp");
    rename("stock.temp", "stock.dat");
    *fa = fopen("stock.dat", "r+b");
    printf("\nSe ha aumentado el stock\n");
    system("pause");
}

void darBaja(FILE **fa)
{
    int nstock, i = leerId();
    producto p;
    FILE *ftemp;
    ftemp = fopen("stock.temp", "wb");
    rewind(*fa);
    while(fread(&p, sizeof(producto), 1, *fa))
        if(i != p.id)
            fwrite(&p, sizeof(producto), 1, ftemp);
    fclose(*fa);
    fclose(ftemp);
    remove("stock.bkp");
    rename("stock.dat", "stock.bkp");
    rename("stock.temp", "stock.dat");
    *fa = fopen("stock.dat", "r+b");
    printf("\nSe ha dado de baja el producto\n");
    system("pause");
}

main()
{
    int opcion, i;
    producto prod;
    FILE *fa;
    fa = fopen("stock.dat", "r+b");
    if(!fa) fa = fopen("stock.dat", "w+b");
        if(fa != NULL)
            do
            {
                system("cls");
                opcion = menu();
                switch(opcion)
                {
                case 1://Guardar datos
                    fseek(fa, 0, SEEK_END);
                    guardarDatos(&prod);
                    fwrite(&prod, sizeof(producto), 1, fa);
                    break;
                case 2://Emitir datos
                    emitirDatos(&fa);
                    break;
                case 3://Buscar datos
                    buscarProducto(&fa);
                    break;
                case 4://Aumentar stock
                    printf("\nAumentar stock de un producto\n\n");
                    aumentarStock(&fa);
                    break;
                case 5://Dar de baja
                    printf("\nDar de baja un producto\n\n");
                    darBaja(&fa);
                    break;
                default:
                    break;
                }
            }while(opcion != 0);
        else
            perror("");
    fclose(fa);
}
