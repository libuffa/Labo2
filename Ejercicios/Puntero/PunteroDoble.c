#include "stdio.h"
#include "stdlib.h"
#include "math.h"

main()
{
    int *p;
    int a=1, b=2;
    int **s;
    p=&a;
    b=*p+1;
    s=&p;
    printf("p=%d, *p=%d, &p=%d\n", p,*p, &p); //MOSTRARA: POSICION DE A, VALOR DE A Y POSICION DEL PUNTERO P
    printf("s=%d, *s=%d, &s=%d\n", s,*s, &s);  //MOSTRARA: POSICION DE PUNTERO P, VALOR DE P(OSEA LA POSICION A) Y LA POSICION DEL PUNTERO S
    *s=&b; //S VA A A VALER LO QUE VALGA B
    printf("Se ejecutó *s=&b\n y ahora…\n");
    printf("s=%d, *s=%d, &s=%d\n", s,*s, &s);//MOSTRARA: POSICION DE PUNTERO P, POSICION DE B Y POSICION PUNTERO S
    **s=79;//ASIGNA A B ESTE VALOR
    printf("a=%d, &a=%d\n", a, &a);//MOSTRARA: POSICION DE P , POSICION DE A
    printf("b=%d, &b=%d\n", b, &b);//MOSTRARA: VALOR DE S Y POSICION DE *S
}
