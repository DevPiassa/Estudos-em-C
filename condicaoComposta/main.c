#include <stdio.h>

/*
int main()
{
    int n1, n2, soma;
    printf("Informe o primeiro numero: ");
    scanf("%d", &n1);
    printf("Informe o segundo numero: ");
    scanf("%d", &n2);
    soma = n1 + n2;

    if (soma > 10)
    {
        printf("A soma e maior: %d");
    }
    else
    {
        printf("soma e menor %d ");
    }
    return 0;
}
*/

/*
int main ()
{
    int n1, n2;
    printf("digite primeiro valor: ");
    scanf("%d", &n1);
    printf("digite segundo valor: ");
    scanf("%d", &n2);

    if (n1 < n2)
    {
        printf(" %d %d", n1, n2);
    }
    else
    {
        printf (" %d %d ", n2);

    }

    return 0;
}
*/




/*
int main ()


{
    int n;
    printf("informe um numero");
    scanf("%d", &n);
    if (n > 0)
    {
        printf("numero positivo");
    }

     else if (n == 0)
{
    printf("numero nulo!");
}
    {
    else
{
    printf("numero negativo");
}

    return 0;

}
*/

/*
int main()
{
    int n1, n2;

    printf("digite primeiro valor: ");
    scanf("%d", &n1);
    printf("digite o segundo valor: ");
    scanf("%d", &n2);
    n1 = n1 % 2;
    n2 = n2 % 2;

    if (n1 == 0 && n2 == 0 )
    {
        printf("o valor e  par");

    }
    else
    {
        printf("o valor e impar");
    }

    return 0;
}



*/

int main()
{
    char sexo;
    double peso;
    double altura;

    printf("digite seu sexo: ");
    scanf("%c", &sexo);
    printf("digite a altura");
    scanf ("%lf", &altura);

    if(sexo == 'M' || sexo == 'm')
    {
        peso = (72.7 * altura ) - 58 ;
        printf("peso ideal: %.2lf\n");
    }
    else if(sexo == 'F' ||  sexo  ==

            'f')
    {
        peso = (62.1 * altura) - 44.7;
        printf("peso ideal: %.2lf\n");
    }
    else
        {
             printf("opcao invalida");
        }
    return 0;
}
