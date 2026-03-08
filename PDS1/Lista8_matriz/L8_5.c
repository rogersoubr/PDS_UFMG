//Roger Souza Brandao  2025108154
/* RODAR O ARQUIVO:
1) Vai para o caminho do arquivo
2) Rode o GCC: gcc NOME_ARQUIVO.c
3) Rode o executável gerado: ./a.exe
*/
#include <stdio.h>
#include <stdlib.h>

int simetrica(int n, float A[100][100]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (A[i][j] != A[j][i]) {
                return 0;
            }
        }
    }
    return 1;
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
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%.2f ", matriz[i][j]);
        }
        printf("\n");
    }
    n = linhas;
    
    if (simetrica(n, matriz)) {
        printf("\nA matriz eh simetrica\n");
    } else {
        printf("\nA matriz NAO eh simetrica\n");
    }
    
    return 0;
}