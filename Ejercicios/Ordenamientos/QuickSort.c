#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int contint=0, ciclo=0;


void quicksort(int a[], int primero, int ultimo){
    int pivote, i, j, central, tmp;
    central = (primero + ultimo)/2;
    pivote = a[central];
    i = primero;
    j = ultimo;
    do {
        while (a[i] < pivote) i++;
        while (a[j] > pivote) j--;
        if (i<=j){
            tmp = a[i];
            a[i] = a[j];
            a[j] = tmp; /* intercambia a[i] con a[j] */
            i++;
            j--;
            printf("Intercambio Nro. %d\n", contint++);
        }
        ciclo++;
    }while (i <= j);
    if (primero < j) quicksort(a, primero, j);/* mismo proceso con sublista izqda */
    if (i < ultimo) quicksort(a, i, ultimo); /* mismo proceso con sublista drcha */
} //fin do-while

main(){
    const int b=10;
    int A[10]={8,1,4,9,6,3,5,2,7,0},c;
    quicksort (A, 0, 9);// llamado recursivo
    printf("\nValores ordenados: \n");
    for(c=0;c<b;c++){ printf("%d, ",A[c]); }
        printf("\n");
        system("PAUSE");
    return 0;
}
