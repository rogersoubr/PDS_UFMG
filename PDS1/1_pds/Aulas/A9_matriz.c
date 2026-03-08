#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define VEZES 36000
#define MAX 6
#define MAXSUM 13

int main() {
    srand(time(NULL)); 
    int M[MAX][MAX];
    int somas[MAXSUM];

    // Inicializar matriz com zero
    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) {
            M[i][j] = 0;
        }
    }

    for (int i = 0; i < MAXSUM; i++) {
        somas[i] = 0;
    }

    for (int i = 0; i < VEZES; i++) {
        int d1 = randomInt(MAX);
        int d2 = randomInt(MAX);
        // De 0 a 5
        M[d1][d2]++;
        // Posicao
        somas[(d1+1) + (d2+1)]++;
    }
    
    printf("Matriz: |");
    for (int i = 0; i < MAX; i++) {
        printf(" %4d |", i+1);
    }

    printf("\n");

    for (int i = 0; i < MAX; i++) {
        printf("%6d: |", i+1);
        for (int j = 0; j < MAX; j++) {
            printf(" %4d |", M[i][j]);
        }
        printf("\n");
    }

    printf("Somas:\n");

    for (int i = 2; i < MAXSUM; i++) {
        printf("%3d: %4d\n", i, somas[i]);
    }

    printf("\n");
    
    return 0;
}
