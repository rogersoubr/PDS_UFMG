#include <stdio.h>

int main() {
    int ano;

    printf("Digite um ano:");
    scanf("%d", &ano);

    if (ano % 400 == 0) {
        printf("O ano de %d e bissexto.\n", ano);
    } else {
        printf("O ano de %d nao e bissexto.\n", ano);
    }

    return 0;
}