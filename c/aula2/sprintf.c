#include <stdio.h>
#include <stdlib.h>

int main()
{
	float* decimal;
	char** ptr_string;
	
	decimal = malloc(sizeof(float));

	printf("Digite um decimal: ");
	scanf("%f", decimal);

	ptr_string = malloc(sizeof(char *) + 50);

	sprintf(*ptr_string, "%.2f", *decimal);

	printf("\nValor decimal = %f\nString resultante = %s", *decimal, *ptr_string);

	free(decimal);
	free(ptr_string);

	return 0;
}