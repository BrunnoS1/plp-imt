#include <stdio.h> 
#include <stdlib.h> 
#define LINHAS 3
#define COLUNAS 3 

int main(int argc, char* argv[])
{
	// declaração de variável ponteiro para ponteiro 
	int** mat;
	int** matrizB;
	int** matrizC;

	// alocando o vetor de ponteiros 
	mat = (int**)malloc(LINHAS * sizeof(int*));
	matrizB = (int**)malloc(LINHAS * sizeof(int*));
	matrizC = (int**)malloc(LINHAS * sizeof(int*));

	// alocando cada uma das linhas da matriz 
	int i;
	for (i = 0; i < LINHAS; i++)
	{
		mat[i] = (int*)malloc(COLUNAS * sizeof(int));
		matrizB[i] = (int*)malloc(COLUNAS * sizeof(int));
		matrizC[i] = (int*)malloc(COLUNAS * sizeof(int));
	}
	
	// preenchendo a matriz 
	int j;
	for (i = 0; i < LINHAS; i++)
	{
		for (j = 0; j < COLUNAS; j++)
		{
			mat[i][j] = i + j;
			matrizB[i][j] = (i + j) * 2;
			matrizC[i][j] = mat[i][j] + matrizB[i][j];
		}
	}

	// mostrando os elementos da matriz 
	printf("MATRIZ A (mat)\n");
	for (i = 0; i < LINHAS; i++)
	{
		for (j = 0; j < COLUNAS; j++)
		{
			printf("%d\t", mat[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	// mostrando os elementos da matrizB
	printf("MATRIZ B (matrizB)\n");
	for (i = 0; i < LINHAS; i++)
	{
		for (j = 0; j < COLUNAS; j++)
		{
			printf("%d\t", matrizB[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	// mostrando os elementos da matriz C
	printf("MATRIZ C (matrizC)\n");
	for (i = 0; i < LINHAS; i++)
	{
		for (j = 0; j < COLUNAS; j++)
		{
			printf("%d\t", matrizC[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	// liberando o espaço de memória 
	// libera cada linha 
	for (i = 0; i < LINHAS; i++)
	{
		free(mat[i]);
		free(matrizB[i]);
		free(matrizC[i]);
	}

	// libera o vetor de ponteiros 
	free(mat);
	free(matrizB);
	free(matrizC);
	return 0;
}

