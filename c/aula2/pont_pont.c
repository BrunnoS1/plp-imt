#include <stdio.h>

int main()
{
	int a = 231;
	int* pd; //ponteiro direto
	int** pi; //ponteiro indireto, equivale a int *(*p)
	pd = &a; //pd recebe o endereço do int a
	pi = &pd; //pi recebe o endereço de um ponteiro pra int (pd)
	printf("a esta em %p e vale %d\n", &a, a);
	printf("pd esta em %p e vale %p\n", &pd, pd);
	printf("pi esta em %p e vale %p\n", &pi, pi);
	printf("*pd vale %d\n", *pd);
	printf("*pi vale %p\n", *pi);
	printf("**pi vale %d\n", **pi);
	return 0;
}