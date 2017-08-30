void unsam_promecal(int nota, int *notajus);

//
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
    int nota , final;


printf("ingrese nota \n");
scanf ("%d", &nota);

printf ("variable nota antes %d\n", nota);

unsam_promecal(nota,&final);

printf ("variable nota despues %d\n", nota);

printf ("su nota es %d\n", final);

system("Pause");
return 0;}

void unsam_promecal(int nota, int *notajus)
{
    int notaajustada;
    if (nota ==4)
        notaajustada=nota+1;
        else if (nota>=8)
        notaajustada=10;
    else notaajustada=nota;

    *notajus=notaajustada;

    return;  
}

