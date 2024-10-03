#include <stdio.h>

void encontrarMinMax(int *vetor, int tamanho, int *min, int *max) {

    *min = *max = vetor[0];

    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] < *min) {
            *min = vetor[i];
        }
        if (vetor[i] > *max) {
            *max = vetor[i];
        }
    }
}

int main() {
    int vetor[] = {4, 27, 13, 25, -10, 5};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    int min, max;

    encontrarMinMax(vetor, tamanho, &min, &max);

    printf("Menor elemento: %d\n", min);
    printf("Maior elemento: %d\n", max);

    return 0;
}
