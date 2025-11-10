//Roger Souza Brandao  2025108154
/* RODAR O ARQUIVO:
1) Vai para o caminho do arquivo
2) Rode o GCC: gcc NOME_ARQUIVO.c
3) Rode o executável gerado: ./a.exe
*/
#include <stdio.h>
#include <stdlib.h>

void identidade(int n, float A[100][100]) {
    for (int m = 0; m < n; m++) {
        for (int nn = 0; nn < n; nn++) {
            if (m == nn) {
                A[m][nn] = 1.0;
            } else {
                A[nn][m] = 0.0;
            }
        }
    }
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
        }
    }
    printf("\nDEBUG: %d\n",n);
    
    printf("\nMatriz original:\n");
    for (int k = 0; k < linhas; k++) {
        for (int l = 0; l < colunas; l++) {
            printf("%.2f ", matriz[k][l]);
        }
        printf("\n");
    }
    n = linhas;
    identidade(n, matriz);
    
    printf("\nMatriz transformada em identidade:\n");
    for (int o = 0; o < n; o++) {
        for (int p = 0; p < n; p++) {
            printf("%.2f ", matriz[o][p]);
        }
        printf("\n");
    }
    
    return 0;
}