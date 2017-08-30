#include "stdio.h"
#include "stdlib.h"
#include "math.h"

main()
{
    int a, b,c;
    int *p,*q,*r;
    //a
    float m,n;
    float *s,*t;
    //b
    p=&a;
    q=&b;
    //c
    *q=40;//asigno el valor b mediante puntero q
    printf("%d %d %d %d\n",b,&b,q,*q);
    //d
    scanf("%d",p);
    printf("%d %d %d %d\n",a,&a,p,*p);
    //e
    r=&a;
    //f
    *r=200;
    printf("%d %d %d %d %d %d\n",a,&a,p,*p,r,*r);//Sale todo lo mismo porque ESA POSICION TIENE ASIGNADA TRES VARIABLES
    //g
    if(r==p) printf("%p  p y %p r Valen igual capo\n",r,p);
    //h
    if(q==p) printf("%p q y %p p Valen igual capo\n",q,p);
    //i
    if(*r=*p) printf("Valen igual capo\n");
}
