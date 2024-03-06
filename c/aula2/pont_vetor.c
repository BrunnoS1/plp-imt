#include <stdio.h>

int main() 
{
	int numeros[] = { 21, 52, 33, 46, 57 };
	int* ponteiroArray = numeros;
	printf("Primeiro elemento do array: %d\n", *ponteiroArray);
	// ponteiro aponta pra primeira posicao do vetor
	printf("Segundo elemento do array: %d\n", *(ponteiroArray + 1));
	return 0;
}