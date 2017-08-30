/* Ordenación de un vector de números enteros, mostrando resultados intermedios */
/* Método: insercion */ 
/* Ejemplo de paso de vectores como parámetros */
/* Entrada: teclado */
/* Salida: pantalla  */
/* Tamaño maximo del vector definido en la constante TAMANYO */
#include <stdio.h>
#define TAMANYO 16 
/* probar con los 16 números: 16 15 14 13 12 11 10  9  4  3  1  2  5  6  7  8  */
void imprime_vector (int v[], int n){
	int i;
	for (i = 0; i<=n-1; i++)
		printf ("%5d", v[i]);
	printf("\n");}
main(){
	int v[TAMANYO];
	int n;		/* tamaño de la parte a considerar */
	int cont;	/* índice de recorrido */
	int k;		/* elemento que se compara */
	int aux; 	/* elemento a colocar en cada iteracion*/
	/* Lee y valida tamanio */
	printf ("Número de elementos:");
	scanf ("%d", &n);
	printf ("\n");
	while (n<0 || n>TAMANYO) {
		printf ("Entre 1 y %d\n", TAMANYO);
		scanf ("%d", &n);	}
	/* Leer elementos y mostrar vector inicial*/
	for (cont = 0; cont <= n-1; cont++){
		printf ("Elemento %d = :", cont+1);
		scanf ("%d", &v[cont]);	}
	/* Ordenamiento*/
	for (cont = 1; cont<n; cont++){
		/* Colocar v[cont] */
		aux = v[cont];
		k = cont-1; /* posicion del elemento a comparar */
		while ((v[k] > aux) && (k>0)){
	 		/* Desplazar elementos */
			v[k+1] = v[k];
			k--; }
		if (v[k] <= aux){
				v[k+1] = aux;
		}
		else{ /* colocar el primero */
			v[1] = v[0];
			v[0] = aux;
		}}
	/* Fin ordenamiento*/
 imprime_vector(v,n);
 system("pause");
 return 0;
}
