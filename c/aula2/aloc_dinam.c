#include <stdio.h>
#include <stdlib.h>

void main()
{
	int *ptr_a;

	ptr_a = malloc(sizeof(int));
	//cria area necessaria para 1 int e coloca em ptr_a o endereco

	if (ptr_a == NULL)
	{
		printf("Memoria insuficiente!\n");
		exit(1);
	}

	printf("Endereco de ptr_a: %p\n", ptr_a);
	*ptr_a = 90;
	printf("Conteudo de ptr_a: %d\n", *ptr_a);
	free(ptr_a); //liberar memoria alocada
}