#include <stdio.h>

int main() {
    float num1, num2, resultado;
    char operador;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o operador + (adicao), - (subtracao), * (multiplicacao) e / (divisao): ");
    scanf(" %c", &operador); // espaço antes de %c 

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    switch (operador) {
        case '+': //SOMA
            resultado = num1 + num2;
            printf("%.2f + %.2f = %.2f\n", num1, num2, resultado);
            break;
        case '-': //SUB
            resultado = num1 - num2;
            printf("%.2f - %.2f = %.2f\n", num1, num2, resultado);
            break;
        case '*': //VEZES
            resultado = num1 * num2;
            printf("%.2f * %.2f = %.2f\n", num1, num2, resultado);
            break;
        case '/': //DIVIDE
            if (num2 == 0) {
                printf("Erro! Divisao por zero nao e permitida.\n");
            } else {
                resultado = num1 / num2;
                printf("%.2f / %.2f = %.2f\n", num1, num2, resultado);
            }
            break;
        default:
            printf("Operador invalido!\n");
    }

    return 0;
}