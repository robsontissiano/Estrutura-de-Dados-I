#include<stdio.h>
#include<stdlib.h>



int main(){
	// & obtem o endereco de memoria
	/// * deferencia - permite deslocamento na memoria

	int x = 3;
	printf("Valor de x %d \n", x);
	printf("End. de x %d \n", &x);

	int * ptr = &x;
	printf("Valor de ptr %d \n", ptr);
	printf("End. de ptr %d \n", &ptr);
	printf("Conteudo apontado por ptr %d \n", *ptr);

}