//Roger Souza Brandao  2025108154
/* RODAR O ARQUIVO:
1) Vai para o caminho do arquivo
2) Rode o GCC: gcc NOME_ARQUIVO.c
3) Rode o executável gerado: ./a.exe
*/
#include <stdio.h>
#include <stdlib.h>

float media_matriz(int n, float mat[100][100]) {
    float soma = 0.0;
    
    for (int k = 0; k < n; k++) {
        for (int l = 0; l < n; l++) {
            soma += mat[k][l];
        }
    }
    
    return (soma / (n * n));
}

int main() {
    int n = 0;
    float matriz[100][100];
    int linhas, colunas;
    
    FILE *arquivo = fopen("matriz.txt", "r+t");
    
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }
    
    fscanf(arquivo, "%d %d", &linhas, &colunas);
    
    printf("Dimensoes da matriz: %dx%d\n", linhas, colunas);
    
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            fscanf(arquivo, "%f", &matriz[i][j]);
            n++;
        }
    }
    printf("\nDEBUG: %d\n",n);
    
    float media = media_matriz(n, matriz);
    
    printf("\nMatriz:\n");
    for (int m = 0; m < linhas; m++) {
        for (int n = 0; n < colunas; n++) {
            printf("%.2f ", matriz[m][n]);
        }
        printf("\n");
    }
    
    printf("\nMedia dos elementos: %.2f\n", media);
    
    return 0;
}