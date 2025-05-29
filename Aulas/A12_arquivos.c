#include <stdio.h>

#define MAX 50

void imprimeMatriz(float M[][MAX], int l, int c) {
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            printf("%6.1f", M[i][j]);
        }
        printf("\n");
    }
}

int main() {
    FILE* arquivo;
    // r, w ou a
    arquivo = fopen("matriz.txt", "r");
    
    int l, c;
    fscanf(arquivo, "%d %d", &l, &c);
    printf("Dimensoes da matriz: %d x %d\n", l, c);

    float M1[MAX][MAX];
    float M2[MAX][MAX];
    float SOMA[MAX][MAX];
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            fscanf(arquivo, "%f", &M1[i][j]);
        }
    }
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            fscanf(arquivo, "%f", &M2[i][j]);
            SOMA[i][j] = M1[i][j] + M2[i][j];
        }
    }
    printf("M1:\n");
    imprimeMatriz(M1, l, c);
    printf("\n");
    printf("M2:\n");
    imprimeMatriz(M2, l, c);
    printf("\n");
    printf("SOMA:\n");
    imprimeMatriz(SOMA, l, c);
    printf("\n");
    fclose(arquivo);

    arquivo = fopen("skunk.txt", "w");
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            fprintf(arquivo, "%5.1f", SOMA[i][j]);
        }
        fprintf(arquivo, "\n");
    }
    fclose(arquivo);
    return 0;
}