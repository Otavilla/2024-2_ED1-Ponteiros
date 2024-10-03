#include <stdio.h>
#include <math.h>

void calcular(double *A, double *V, double R)
{
    *A = (4.0 * M_PI) * pow(R, 2);

    *V = (4.0/3.0) * M_PI * pow(R, 3);

}

int main() {

    double A, V, R;

    printf("Raio: ");

    scanf("%lf", &R);

    calcular(&A, &V, R);

    printf("Area da superficie: %.2f\n", A);
    printf("Volume: %.2f\n", V);

    return 0;
}
