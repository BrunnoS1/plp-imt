library(plotrix)

analise_exploratoria <- function(x, y) {
  # boxplot
  boxplot(x, y, col=c("blue", "red"), names=c("X", "Y"),
  main="Boxplot de X e Y",
  xlab="Variáveis", ylab="Valores")

  # Histograma
  par(mfrow=c(1, 2))
  hist(x, col="blue", main="Histograma de X",
  xlab="Valores", ylab="Frequência", xlim=range(c(x, y)))
  
  hist(y, col="red", main="Histograma de Y",
  xlab="Valores", ylab="Frequência")

  # QQ plot
  par(mfrow=c(1, 1))
  qqnorm(x, main="QQ plot de X")

  qqline(x, col="blue")
  qqnorm(y, main="QQ plot de Y")
  qqline(y, col="red")

  # Gráfico de dispersão
  plot(x, y, col="purple", main="Gráfico de dispersão de X
  e Y",
  xlab="Variável X", ylab="Variável Y")

  # Sumário das variáveis
  summary_x <- summary(x)
  summary_y <- summary(y)

  # Coeficiente de correlação
  correlacao <- cor(x, y)

  # Retornando o sumário das variáveis e o coeficiente de correlação
  return(list(sumario_x = summary_x, sumario_y = summary_y,
  correlacao = correlacao))
  }

# Exemplo de uso da função
set.seed(123)
x <- rnorm(100)
y <- 2*x + rnorm(100)

resultado <- analise_exploratoria(x, y)
print(resultado)