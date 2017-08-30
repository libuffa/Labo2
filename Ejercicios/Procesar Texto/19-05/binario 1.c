#include "stdio.h"
#include "stdlib.h"

struct fecha
{
	int mes;
	int anio;
};

struct socio
{
	char nombre[20];
	char sexo;
	int edad;
	struct fecha fpago;
};

main()
{
	struct socio a;
	int f=1;
	FILE *archivo;
	archivo=fopen("San antonio de padua.dat","wb");
	if (archivo!=NULL)
	{
		while(f!=0)
		{
			printf("Escriba nombre:\n");
			scanf("%s",a.nombre);
			printf("Escriba sexo:\n");
			fflush(stdin);
			scanf("%c",&a.sexo);
			printf("Escriba edad:\n");
			scanf("%d",&a.edad);
			printf("Escriba mes de pago:\n");
			scanf("%d",&a.fpago.mes);
			printf("Escriba año de pago:\n");
			scanf("%d",&a.fpago.anio);
			fwrite(&a,sizeof(struct socio),1,archivo);
			printf("Si desea finalizar presione 0\n");
			scanf("%d",&f);
		}
	}else perror("");
	fclose(archivo);
	archivo=fopen("San antonio de padua.dat","rb");
	if (archivo!=NULL)
	{
		fread(&a,sizeof(struct socio),1,archivo);
		while(!feof(archivo))
		{
			printf("%s %c %d %d/%d\n",a.nombre,a.sexo,a.edad,a.fpago.mes,a.fpago.anio );
			fread(&a,sizeof(struct socio),1,archivo);
		}
	}else perror("");
	fclose(archivo);
    system("Pause");
}