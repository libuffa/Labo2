/* ordenamiento de un vector de números enteros */
/* método: quicksort */
/* ejemplo de paso de vectores como parámetros */
#include <conio.h>
#include <stdio.h>
#include <stdlib.h> //libreria con el prototipo de la funcion rand()
#include <time.h>

int contint=0;

void quicksort(int a[], int primero, int ultimo)
{
    int pivote, i, j, central, tmp,c;
    central = (primero + ultimo)/2;
    printf("Valor de central -(primero + ultimo)/2- indica posicion del pivote: %d\n", central);
    pivote = a[central];
    printf("Valor de pivote -a[central]- indica valor del pivote: %d\n", pivote);
    i = primero;
    printf("Valor de primero -%d- se asigna a i\n", i);
    j = ultimo;
    printf("Valor de ultimo -%d- se asigna a j\n\n", j);

    printf("Comienzo del ciclo do while = pivote:%d, i:%d, j:%d\n\n", pivote, i, j);
        do {
        printf("Dentro del ciclo do while = pivote:%d, i:%d, j:%d\n", pivote, i, j);
        while (a[i] < pivote) {i++;
        printf("while->variable i (V:se incrementa) %d\n", i);}
        while (a[j] > pivote) {j--;
        printf("while->variable j (V:se decrementa %d\n", j);}
            if (i<=j)
            {
            tmp = a[i];
            a[i] = a[j];
            a[j] = tmp; /* intercambia a[i] con a[j] */
            i++;
            printf("Dentro del intercambio, variable i:%d\n",i);
            j--;
            printf("Dentro del intercambio, variable j:%d\n",j);
            contint++;
            printf("Intercambio Nro. %d\n\n", contint);
            }
  
    for(c=0;c<10;c++) printf("%d-",a[c]);
    printf("\n\n");
    //printf("Dentro del ciclo do while = pivote:%d, i:%d, j:%d\n\n", pivote, i, j);
    }while (i <= j);
    printf("Si i es > a j, termino el do-while, hubo %d intercambio/s, pivote:%d, i:%d, j:%d\n\n", contint, pivote, i, j);
    system("PAUSE");
    printf("\n\nLlamado recursivo comparando primero:%d con j:%d\n\n", primero, j);
        if (primero < j)
        quicksort(a, primero, j);/* mismo proceso con sublista izqda */
    printf("\n\nLlamado recursivo comparando ultimo:%d con j:%d\n\n", ultimo, j);
        if (i < ultimo)
        quicksort(a, i, ultimo); /* mismo proceso con sublista drcha */
}
main(){
const int b=10;
int A[b]={8,1,4,9,6,3,5,2,7,0},c;
//clrscr();
/*
srand( time( NULL ) );
//carga del vector
for(c=0;c<b;c++)
          {
          A[c]=rand()%100;
          printf("%d, ",A[c]);
          }
*/

quicksort(A,0,9);

printf("\nValores ordenados: \n");
for(c=0;c<b;c++){ printf("%d-, ",A[c]); }
printf("\n");
system("PAUSE");
return 0;
}
