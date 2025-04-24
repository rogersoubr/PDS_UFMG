#include <stdio.h>

int main() {
    float A, B, C;

    printf("Digite o primeiro lado do triangulo: ");
    scanf("%f", &A);
    printf("Digite o segundo lado do triangulo: ");
    scanf("%f", &B);
    printf("Digite o terceiro lado do triangulo: ");
    scanf("%f", &C);


    // verifica se é um triangulo valido pela desigualdade triangular
    if ((A >= B + C) || (B >= A + C) || (C >= A + B)) {
        printf("Triangulo invalido");
    }

    // Verifica o tipo do triângulo
    if (A == B && B == C && A == C) {
        printf("Triangulo equilatero\n");
    } else if (A == B || A == C || B == C) {
        printf("Triangulo isosceles\n");
    } else {
        printf("Triangulo escaleno\n");
    }

    return 0;
}