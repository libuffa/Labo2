/*Busqueda Binaria
Este algoritmo permite buscar de una manera más eficiente un dato dentro de un
arreglo, para hacer esto se determina el elemento central del arreglo y se
compara con el valor que se esta buscando, si coincide termina la busqueda y
en caso de no ser asi se determina si el dato es mayor o menor que el elemento
central, de esta forma se elimina una mitad del arreglo junto con el elemento
central para repetir el proceso hasta encontrarlo o tener solo un elemento en
el arreglo. Para poder aplicar este algorimo se requiere que el arreglo este o
rdenado. Su implementación es la siguiente:*/
	#include <stdio.h>
	#include <stdlib.h>
	#include <time.h>
	#define TAM 10

	main(){
	int a[TAM], busca, temp, bajo, alto, central,i,j;
	printf("Completando el array con números aleatorios\n");
	srand(time(NULL)); //Inicializa el generador de aleatorios
    /*carga del array*/
	for (i=0;i<TAM;i++) a[i]=1+rand()%100;
	/*emisión del array*/
	printf ("\n\nEl array desordenado es\n");
	for (i=0; i< TAM; i++) printf ("%d-", a[i]);
	/*ordenamiento del array*/
    printf ("\n\n"); //Implementacion de Ordenamiento por burbuja de menor a mayor
	printf ("Ordenando array...\n");
	for (j=1; j <= TAM; j++)
		for (i=0; i< TAM-1; i++)
{    		if (a[i] > a[i+1])
    		{	   temp = a[i];
				   a[i] = a[i+1];
				   a[i+1] = temp;
			}
}
/*emisión del array ordenado*/
printf ("\n\nEl array ordenado es\n\n");
for (i=0; i< TAM; i++) printf ("%d-", a[i]);
printf("\n");

	/*Implementacion de busqueda binaria*/
	printf ("\nIntroduce un numero a buscar: \n");
	scanf ("%d",&busca);
	bajo = 0;
	alto = TAM-1;
	central = (bajo+alto)/2;
	while ((bajo < alto) && (busca != a[central])){
		if(busca > a[central])
			bajo = central+1;
		else
			alto = central-1;
		central=(bajo+alto)/2;
	}
	if (busca == a[central])
		printf("\n%d encontrado en posicion %d\n", busca, central);
	else
		printf("\n%d no existe\n", busca);
	system("pause");
	return 0;
}
