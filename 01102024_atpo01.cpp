#include<stdio.h>

void comparar(int *a, int *b)

{

    if (*a > *b)
    {
        printf("O Maior numero e: %d\n", *a);
    }
    else if (*b > *a)
    {
        printf("O Maior numero e: %d\n", *b);
    }
    else
    {
        printf("Os numeros sao iguais.\n");
    }

}

    int main()
    {

        int a, b;

    printf("Digite o primeiro numero: ");

    scanf("%d", &a);

    printf("Digite o segundo numero: ");

    scanf("%d", &b);

    comparar(&a, &b);

    }
