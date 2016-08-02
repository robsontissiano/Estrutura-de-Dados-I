#include<stdio.h>
#include<stdlib.h>





int main(){
	// & obtem o endereco de memoria
	/// * deferencia - permite deslocamento na memoria

	int x = 3;
	double y = 2.2;
	char z = 'z';

	printf("Valor de x :%d \n", x);
	printf("End. de x: %d \n", &x);
	int * ptrx = &x;
	printf("Valor de ptrx: %d \n", ptrx);
	printf("End. de ptrx: %d \n", &ptrx);
	printf("Conteudo apontado por ptrx: %d \n\n", *ptrx);

	printf("Valor de y :%d \n", y);
	printf("End. de y: %d \n", &y);
	double * ptry = &y;
	printf("Valor de ptry: %d \n", ptry);
	printf("End. de ptry: %d \n", &ptry);
	printf("Conteudo apontado por ptry: %d \n\n", *ptry);

	printf("Valor de z :%c \n", z);
	printf("End. de z: %d \n", &z);
	char * ptrz = &z;
	printf("Valor de ptrz: %c \n", ptrz);
	printf("End. de ptrz: %d \n", &ptrz);
	printf("Conteudo apontado por ptrz: %c \n", *ptrz);	


}