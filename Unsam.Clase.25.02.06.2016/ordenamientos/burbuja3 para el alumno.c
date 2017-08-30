/* Ordenaci�n de un vector de n�meros enteros, mostrando resultados intermedios */
/* M�todo: burbuja mejorado con centinela */
/* Ejemplo de paso de vectores como par�metros */
/* Entrada: teclado */
/* Salida: pantalla  */
/* Tama�o maximo del vector definido en la constante TAMANYO */
#include <stdio.h>
#define TAMANYO 16 
#define TRUE 1
#define FALSE 0
/* probar con los 16 n�meros: 16 15 14 13 12 11 10  9  4  3  1  2  5  6  7  8  */
void imprime_vector (int v[], int n){
	int i;
	for (i = 0; i<=n-1; i++)
		printf ("%5d", v[i]);
	printf("\n");}

main(){
	int v[TAMANYO];
	int n;		/* tama�o de la parte a considerar */
	int i,j;	/* elemento que se compara */
	int aux; 	/* elemento a colocar en cada iteracion*/
	int b;		/* contador de blancos*/
	int cambio = TRUE;	/* var. logica */
	/* Lee y valida tamanio */
	printf ("N�mero de elementos:");
	scanf ("%d", &n);
	printf ("\n");
	while (n<0 || n>TAMANYO) {
		printf ("Entre 1 y %d\n", TAMANYO);
		scanf ("%d", &n);}
	/* Leer elementos y mostrar vector inicial*/
	for (i = 0; i <= n-1; i++){
		printf ("Elemento %d = :", i+1);
		scanf ("%d", &v[i]);}
	/* Ordenamiento*/
	for (i = 0; (i < n-1) && (cambio == TRUE); i++)
    {  cambio = FALSE; 
	   for (j = 0; j < n-(i+1); j++)
       {if (v[j] > v[j+1])
        {	aux = v[j];
			v[j] = v[j+1];
			v[j+1] = aux;
			cambio = TRUE;
		}}}
	  	/* Fin ordenamiento*/ 	
 	printf ("Resultado final: \n");
    imprime_vector(v,n);
    system("pause");
    return 0;
}
