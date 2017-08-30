/* ordenaci�n de un vector de n�meros enteros */
/* m�todo: seleccion */ 
/* ejemplo de paso de vectores como par�metros */
#include <stdio.h>
#define TAMANYO 16 
/* probar con los 16 n�meros: 16 15 14 13 12 11 10  9  4  3  1  2  5  6  7  8  */
int posicion_maximo (int x[], int n){
	/* devuelve la posici�n del elemento mayor del vector x */
	/* entrada: vector x, de tama�o efectivo n */
	/* salida : posici�n entre 1 y n-1 */
	int mprov ; 
	int pprov ;
	int i;
	mprov = x[0];
	pprov = 0;
	for (i = 1; i<=n-1; i++)
		if (x[i]> mprov)
        {	mprov = x[i];
			pprov = i;}
	return pprov;}
void intercambia (int * px, int * py) {
	int n;
	n = *py;
	*py = *px;
	*px = n;}
void coloca_el_ultimo (int x[], int n){
	/* intercambia los elementos m�ximo de x y �ltimo de x
	   colocando en �ltimo lugar el m�ximo elemento */
	/* n es el tama�o efectivo de x */
	int p;
	p = posicion_maximo (x, n);
	printf ("%*s%*s\n", 5*p+4 , "M", 5*(n-p)-4, "P");
	getchar();
	if (x[p] != x[n-1])
		intercambia (&x[n-1], &x[p]);}
void imprime_vector (int m[], int n){
	int i;
	for (i = 0; i<=n-1; i++)
		printf ("%5d", m[i]);}
main(){
	int m[TAMANYO];
	int n;		/* tama�o de la parte a considerar */
	int cont;	/* �ndice de recorrido */
	printf ("N�mero de elementos:");
	scanf ("%d", &n);
	printf ("\n");
	while (n<0 || n>TAMANYO) {
		printf ("Entre 1 y %d\n", TAMANYO);
		scanf ("%d", &n);}
	for (cont = 0; cont <= n-1; cont++){
		printf ("Elemento %d valor:", cont+1);
		scanf ("%d", &m[cont]);	}
	imprime_vector (m, n);
   /*Ordenamiento*/ 
	for (cont = n; cont>1; cont--){ 
		/* tama�o desde el inicial hasta 2 */
		coloca_el_ultimo (m, cont);	}
	 /*Fin ordenamiento*/ 
	 system("pause");
        return 0;
}
