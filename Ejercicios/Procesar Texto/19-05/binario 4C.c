#include "stdio.h"
#include "stdlib.h"

struct empleado
{
	char nombre[20];
	float salario;
};

main()
{
	struct empleado emp;
	int f;
	FILE *archivo,*archivo2;
	archivo=fopen("empresa.dat","wb");
	if (archivo!=NULL)
	{
		do{
			printf("Ingrese nombre:\n");
			scanf("%s",emp.nombre);
			printf("Ingrese su salario:\n");
			scanf("%f",&emp.salario);
			fwrite(&emp,sizeof(struct empleado),1,archivo);
			printf("Para finalizar presione 0\n");
			scanf("%d",&f);
		}while(f!=0);
	}else perror("");
	fclose(archivo);
	archivo=fopen("empresa.dat","rb");
	archivo2=fopen("salario.dat","wb");
	fread(&emp,sizeof(struct empleado),1,archivo);
	emp.salario=emp.salario*1.1;
	while(!feof(archivo))
	{
		fwrite(&emp,sizeof(struct empleado),1,archivo2);
		printf("%s %.2f\n",emp.nombre,emp.salario );
		fread(&emp,sizeof(struct empleado),1,archivo);
		emp.salario=emp.salario*1.1;
	}
	fclose(archivo);
	fclose(archivo2);
    system("Pause");
}
