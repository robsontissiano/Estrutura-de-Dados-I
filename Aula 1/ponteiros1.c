#include<stdio.h>
#include<stdlib.h>


void altera_x(int * ptr_x){
	*ptr_x = 10;
}


int main(){
	// & obtem o endereco de memoria
	/// * deferencia - permite deslocamento na memoria

	int x = 3;
	printf("Valor de x :%d \n", x);
	printf("End. de x: %d \n", &x);

	int * ptr = &x;
	printf("Valor de ptr: %d \n", ptr);
	printf("End. de ptr: %d \n", &ptr);
	printf("Conteudo apontado por ptr: %d \n", *ptr);

	*ptr = 8;
	printf("Novo valor de x: %d \n", x);

	altera_x(&x);
	// ou altera_x(ptr) para referenciar o valor de x 
	printf("Novo valor alterado de x: %d \n", x);

}