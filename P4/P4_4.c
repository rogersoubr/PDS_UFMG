#include <stdio.h>

int main() {
    float valor, valorFinal;
    char estado;

    printf("Digite o valor e o identificador do estado (ex: 100.00 G): ");
    scanf("%f %c", &valor, &estado);

    switch (estado) {
        case 'G': // MG
            valorFinal = valor * 1.07;
            printf("Valor final: %.2f\n", valorFinal);
            break;
        case 'P': // SP
            valorFinal = valor * 1.12;
            printf("Valor final: %.2f\n", valorFinal);
            break;
        case 'J': // RJ
            valorFinal = valor * 1.15;
            printf("Valor final: %.2f\n", valorFinal);
            break;
        case 'S': // MS
            valorFinal = valor * 1.08;
            printf("Valor final: %.2f\n", valorFinal);
            break;
        default:
            printf("Estado invalido\n");
            break;
    }

    return 0;
}