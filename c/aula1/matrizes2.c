#include <stdio.h>

// Função para ler a matriz
void lerMatriz(int m[3][3]) {
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Digite o valor da linha %d, coluna %d da matriz: ", i + 1, j + 1);
            scanf("%d", &m[i][j]);
        }
    }
}

// Função para imprimir a matriz
void imprimirMatriz(int m[3][3]) {
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}

// Função para multiplicar matrizes
void multiplicarMatrizes(int a[3][3], int b[3][3], int c[3][3]) {
    int i, j, k;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            c[i][j] = 0;
            for (k = 0; k < 3; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

// Função para somar matrizes
void somarMatrizes(int a[3][3], int b[3][3], int c[3][3]) {
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}

// Função para subtrair matrizes
void subtrairMatrizes(int a[3][3], int b[3][3], int c[3][3]) {
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            c[i][j] = a[i][j] - b[i][j];
        }
    }
}

// Função para transpor a matriz
void transporMatriz(int m[3][3], int t[3][3]) {
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            t[j][i] = m[i][j];
        }
    }
}

int main() {
    int matrizA[3][3], matrizB[3][3], matrizC[3][3], matrizT[3][3], opcao;

    // Lendo as matrizes A e B
    printf("Digite os valores da matriz A:\n");
    lerMatriz(matrizA);
    printf("Digite os valores da matriz B:\n");
    lerMatriz(matrizB);

    // Menu de opções
    do {
        printf("\nEscolha uma operacao:\n");
        printf("1. C = A * B\n");
        printf("2. C = A - B\n");
        printf("3. C = A + B\n");
        printf("4. Transposta da matriz C (C = A * B)\n");
        printf("5. Sair do programa\n");
        scanf("%d", &opcao);

        switch (opcao) {
        case 1:
            multiplicarMatrizes(matrizA, matrizB, matrizC);
            printf("Matriz C (A * B):\n");
            imprimirMatriz(matrizC);
            break;
        case 2:
            subtrairMatrizes(matrizA, matrizB, matrizC);
            printf("Matriz C (A - B):\n");
            imprimirMatriz(matrizC);
            break;
        case 3:
            somarMatrizes(matrizA, matrizB, matrizC);
            printf("Matriz C (A + B):\n");
            imprimirMatriz(matrizC);
            break;
        case 4:
            multiplicarMatrizes(matrizA, matrizB, matrizC);
            transporMatriz(matrizC, matrizT);
            printf("Matriz transposta de C (C = A * B)\n");
            imprimirMatriz(matrizT);
            break;
        case 5:
            printf("Saindo do programa\n");
            break;
        default:
            printf("Opcao invalida, tente novamente");
            break;
        }
    } while (opcao != 5);

    return 0;
}