#include <stdio.h>
#include <stdlib.h>


void pause() {
    #ifdef WIN32
        system("PAUSE");
    #else
        printf("Press any key to continue...");
        getchar();
    #endif
}

int **alocaMatriz(int n, int m) {
    int**M = (int**) malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++) {
        M[i] = (int*) malloc(n * sizeof(int));
        for (int j = 0; j < m; j++) M[i][j] = 0;
    }
    return M;
}

void liberaMatriz(int** M, int n) {
    for (int i = 0; i < n; i++) {
        free(M[i]);
    }
    free(M);
}

void imprimeMatriz(int **M, int n, int m) {

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf(" %3d", M[i][j]);
        }
        printf("\n");
    }
}

int main() {
    
    int n, m;
    int** M;

    printf("Digite as dimensões da matriz: ");
    scanf("%d %d", &n, &m);
    getchar();
    printf("Dimensoes da matriz: %d x %d\n", n, m);

    //int M2[10000][10000];
    

    M = alocaMatriz(n, m);
    pause();
    //imprimeMatriz(M, n, m);
    //
    printf("\nLiberando memoria...\n\n");
    liberaMatriz(M, n);
    pause();
    
}