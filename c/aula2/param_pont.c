#include <stdio.h>

void duplicaValor(int *x)
{
	*x *= 2;
}

int main()
{
	int numero = 5;
	duplicaValor(&numero);
	printf("O dobro de 5 = %d", numero);
	return 0;
}