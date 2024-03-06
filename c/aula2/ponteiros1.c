#include <stdio.h>

int main() 
{
	int numero = 42; // Uma variável int
	int* ponteiro; // Declarando um ponteiro para o int
	ponteiro = &numero; // Atribuindo o endereço de 'numero' ao ponteiro
	// Imprime o valor de numero (42)
	printf("Valor de 'numero': %d\n", numero); 

	// Imprime o endereço de memoria (%p placeholder pra endereço)
	printf("Endereco de 'numero': %p\n", (void*)&numero);

	// Imprime o valor apontado pelo ponteiro
	printf("Valor apontado por 'ponteiro': %d\n", *ponteiro); // 
	return 0;
}