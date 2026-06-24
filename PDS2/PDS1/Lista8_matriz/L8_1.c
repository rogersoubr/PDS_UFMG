//Roger Souza Brandao  2025108154
/* RODAR O ARQUIVO:
1) Vai para o caminho do arquivo
2) Rode o GCC: gcc NOME_ARQUIVO.c
3) Rode o executável gerado: ./a.exe
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    float matriz[100][100];
    int linhas, colunas;
    
    FILE *arquivo = fopen("matriz.txt", "r");
    
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }
    
    // Lê número de linhas e colunas
    fscanf(arquivo, "%d %d", &linhas, &colunas);
    
    printf("Dimensoes da matriz: %dx%d\n", linhas, colunas);
    
    // Lê todos os coeficientes
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            fscanf(arquivo, "%f", &matriz[i][j]);
        }
    }
    
    fclose(arquivo);
    
    // Imprime a matriz lida
    printf("\nMatriz lida do arquivo:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%.2f ", matriz[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}