#include <stdio.h> 
#include <stdlib.h>

int main() {
    int linha, coluna;

    printf("Quantidade de linhas: ");
    scanf("%d", &linha);

    printf("Quantidade de colunas: ");
    scanf("%d", &coluna);

    int matriz[linha][coluna];

    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            printf("Coloque o valor da celula %d.%d: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Limites
    int esquerda = 0, direita = coluna - 1;
    int superior = 0, inferior = linha - 1;

    while (superior <= inferior && esquerda <= direita) {
        // Linha de cima
        for (int i = esquerda; i <= direita; i++) {
            printf("%d ", matriz[superior][i]);
        }
        superior++;

        // Coluna da direita
        for (int i = superior; i <= inferior; i++) {
            printf("%d ", matriz[i][direita]);
        }
        direita--;

        // Linha de baixo (se sobrou linha)
        if (superior <= inferior) {
            for (int i = direita; i >= esquerda; i--) {
                printf("%d ", matriz[inferior][i]);
            }
            inferior--;
        }

        // Coluna da esquerda (se sobrou coluna)
        if (esquerda <= direita) {
            for (int i = inferior; i >= superior; i--) {
                printf("%d ", matriz[i][esquerda]);
            }
            esquerda++;
        }
    }

    return 0;
}