#include "stdio.h"
#include "stdlib.h"

struct numero
{
	int num;
};

main()
{
	struct numero n;
	FILE *archivo;
	archivo=fopen("num.dat","wb");
	if (archivo!=NULL)
	{
		for (n.num = 100; n.num <= 200; n.num=n.num+2)
		{
			fwrite(&n,sizeof(struct numero),1,archivo);
		}
	}else perror("");
	fclose(archivo);
	archivo=fopen("num.dat","rb");
	fread(&n,sizeof(struct numero),1,archivo);
	while(!feof(archivo))
	{
		printf("%d\n",n.num);
		fread(&n,sizeof(struct numero),1,archivo);
	}
	fclose(archivo);
    system("Pause");
}
