/* Ejemplo 2. Cuando una matriz se pasa a una función, ésta SIEMPRE se pasa por REFERENCIA,
ya que su nombre es un puntero a su primer elemento o lo que es lo mismo
un puntero a la propia matriz. y no es necesario utilizar el operador de
dirección (&) para pasarla por referencia. Ahora el parámetro formal, es decir,
el parámetro que recibe a la matriz debe ir acorde al tipo de matiz que se está pasando.
Si pasas una matriz unidimensional, podrías declararlo como:
- Un puntero
- Un vector delimitado (matriz unidimensional)
- Un vector no limitado
Si pasas una matriz bidimensional, podrías declararlo como
- Un vector limitado de punteros.
- Una matriz bidimensional limitada (especificar ambos índices)
- Una matriz bidimensional limitada (especificar sólo segundo indice) */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define p printf
#define s scanf

int validar(int,char[]);
void cargar(int[][5],int,int);
void mostrar(int[][5],int,int);
void trans(int[][5],int);
void triang(int[][5],int);
void inf(int[][5],int);

int main(){
	int mat[5][5],fil,col;
	fil=validar(5,"Filas");
	col=validar(5,"Columnas");
	cargar(mat,fil,col);
	p("\nMatriz Cargada!!!!\n\n\n");
	mostrar(mat,fil,col);
	if(fil==col){
		trans(mat,fil);
		p("La matriz es cuadrada!!\n");
		p("\nMatriz Transpuesta!!!!\n\n\n");
		mostrar(mat,fil,col);
		trans(mat,fil);
		mostrar(mat,fil,col);
		p("La matriz triangular Superior !!\n\n");
		triang(mat,fil);
		p("La matriz triangular Inferior !!\n\n");
		inf(mat,fil);
	 } else p("La matriz no es cuadrada!!");
	system("pause");
	return 0;}

int validar(int y,char x[]){
int n;
	do{
			p("\nIngrese cantidad de %s [1-%d]:",x,y);
			s("%d",&n);
		}while((n<1)||(n>y));
return n;}

void cargar(int x[][5],int y,int z){
int i,j;
  srand(time(NULL));
	for(i=0;i<y;i++)
		for(j=0;j<z;j++)
		 x[i][j]=rand()+10;}

void mostrar(int x[][5],int y,int z){
int i,j;
for(i=0;i<y;i++){
    p("\n");
	for(j=0;j<z;j++)
		p("%10d",x[i][j]);}
p("\n");}

void triang(int x [][5],int y){
int i,j;
 for(i=0;i<y;i++){
		for(j=0;j<i;j++)
			 p("    ");
		for(j=i;j<y;j++)
		 p("%10d",x[i][j]);
		p("\n\n");}
}

void inf(int x [][5],int y){
int i,j;
 for(i=1;i<y;i++){
		for(j=0;j<i;j++)
		 p("%10d",x[i][j]);
		p("\n\n");}
}

void trans(int x[][5],int y)
{int i,j;
	int aux;
	for(i=0;i<y;i++)
		for(j=i;j<y;j++){
            aux=x[i][j];
			x[i][j]=x[j][i];
			x[j][i]=aux;}
}
