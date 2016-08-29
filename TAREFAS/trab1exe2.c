#include<stdio.h>
#include<stdlib.h>

int soma_vetor(int * inicio, int * fim){

	int soma = 0;

	for (; inicio < fim; inicio++)
	{
		
		soma += * inicio;

	}

	return soma;

}


int main(){


	int v[] = {10,10,10,30};
	int *final = v;

	for(int i = 0; i < 4;i++){

		final++;

	}

	printf("%d\n",soma_vetor(v,final));
	

}