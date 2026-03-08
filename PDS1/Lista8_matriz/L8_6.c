//Roger Souza Brandao  2025108154
/* RODAR O ARQUIVO:
1) Vai para o caminho do arquivo
2) Rode o GCC: gcc NOME_ARQUIVO.c
3) Rode o executável gerado: ./a.exe
*/
#include <stdio.h>
#include <stdlib.h>

void soma_matriz(int n, float A[100][100], float B[100][100], float S[100][100]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            S[i][j] = A[i][j] + B[i][j];
        }
    }
}

int main() {
    int n = 0;
    float matriz[100][100], matrizB[100][100], soma[100][100];
    int linhas, colunas;
    
    FILE *arquivo1 = fopen("matriz.txt", "r+t");
    FILE *arquivo2 = fopen("matrizb.txt", "r+t");
    
    if (arquivo1 == NULL || arquivo2 == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }
    
    fscanf(arquivo1, "%d %d", &linhas, &colunas);
    
    printf("Dimensoes das matrizes: %dx%d\n", linhas, colunas);
    
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            fscanf(arquivo1, "%f", &matriz[i][j]);
        }
    }
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            fscanf(arquivo2, "%f", &matrizB[i][j]);
        }
    }
    printf("\nDEBUG: %d\n",n);
    
    printf("\nMatriz original A:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%.2f ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\nMatriz original B:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%.2f ", matrizB[i][j]);
        }
        printf("\n");
    }
    n = linhas;
    
    soma_matriz(n, matriz, matrizB, soma);
    
    printf("\nMatriz Soma (A + B):\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%.2f ", soma[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}