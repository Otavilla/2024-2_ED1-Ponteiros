#include <stdio.h>

void numReal(int *inteiro, int *real) {
    printf("Parte Inteira: %d\n", *inteiro);
    printf("Parte Fracionária: %d\n", *real);
}

int main() {

    int inteiro, real;

    printf("Escreva um número real (Exemplo: 123.321): ");

    scanf("%d.%d", &inteiro, &real);

    numReal(&inteiro, &real);

    return 0;
}
