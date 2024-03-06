#include <stdio.h>
#include <math.h>

main()
{
    int num = 0;
    int cubo = 0;

    printf("Digite um valor: ");
    scanf("%d", &num);

    cubo = pow(num, 3);
    printf("\ncubo de %d = %d\n", num, cubo);

}
