# Definindo as matrizes
matriz1 <- matrix(1:9, nrow=3, ncol=3)
matriz2 <- matrix(9:1, nrow=3, ncol=3)

# Função para multiplicação de matrizes
multiplicar_matrizes <- function(matriz1, matriz2) {
    if (ncol(matriz1) != nrow(matriz2)) {
    
    stop("Número de colunas da primeira matriz deve ser igual ao número de linhas da
    segunda matriz.")
    }

    resultado <- matrix(0, nrow=nrow(matriz1), ncol=ncol(matriz2))
    
    for (i in 1:nrow(matriz1)) {
        for (j in 1:ncol(matriz2)) {
        resultado[i, j] <- sum(matriz1[i,] * matriz2[,j])
        }
    }

return(resultado)
}

# Multiplicação das matrizes
resultado_multiplicacao <- multiplicar_matrizes(matriz1, matriz2)

# Exibindo o resultado
print("Matriz 1:")
print(matriz1)
print("Matriz 2:")
print(matriz2)
print("Resultado da multiplicação:")
print(resultado_multiplicacao)