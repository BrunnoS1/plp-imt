#include <stdio.h>

int main() 
{
	int numero = 42;
	int *ponteiro = &numero;
	printf("Valor original de 'numero': %d\n", numero);
	*ponteiro = 100; // Modificando o valor diretamente atrav�s do ponteiro
	printf("Novo valor de 'numero' atraves do ponteiro: %d\n", numero);
	return 0;
}