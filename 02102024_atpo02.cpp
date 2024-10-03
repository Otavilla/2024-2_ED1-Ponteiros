#include <stdio.h>

void imprimirEnderecos(int *vetor)
{
    printf("Enderecos das posicoes do vetor:\n");

    for (int i = 0; i < 10; i++) {

        printf("Endereco do array[%d]: %d\n", i, &vetor[i]);
    }
}

int main() {

    int vetor[10];

    imprimirEnderecos(vetor);

    return 0;
}
