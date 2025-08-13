#include <stdio.h>


int main()
{
    int numero, decimal;
    printf("digite um numero inteiro:");
    scanf("%d", &numero);
    decimal = (numero / 10) % 10;

    printf("Resultado: %d\n", decimal);

    return 0;
}
