/*
 * Empresa recebe 100 cheques numerados de 1 a 100, distintos e fora de ordem. Não há cheques com
 * o mesmo número.
 *
 * Depois, deve-se ordenar os cheques. Vamos desenvolver o algoritmo de ordenação por contagem, um
 * dos piores que existem, mas que é didático para ensinar estruturas de dados indexadas.
 */

// Comentar que em vetores numéricos não temos \0, assim precisamos passar o tamanho do vetor pra sempre.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAXCHEQUES 100

int randomInt(int n){
    return rand() % n;
}

void imprimeVetor(int vec[], int n) {
    printf("Vec:");
    int numPorLinha = 25;
    for (int i = 0; i < n; i++) {
        printf(" %2d", vec[i]);
        if ((i % numPorLinha) == (numPorLinha-1)) printf("\n    ");
    }
    printf("\n");
}

int existe(int cheque, int vec[], int n) {
    for (int i = 0; i < n; i++) {
        if (cheque == vec[i]) return 1;
    }
    return 0;
}

void ordena(int vetor[], int vetorOrdenado[], int n) {
    int contador[MAXCHEQUES];
    for (int i = 0; i < n; i++) {
        contador[i] = 0;
        for (int j = 0; j < n; j++) {
            if (vetor[j] < vetor[i]) contador[i]++;
        }
    }
    for (int i = 0; i < n; i++) {
        vetorOrdenado[contador[i]] = vetor[i];
    }
}

int main() {
    srand(time(NULL)); 
    int vetor[MAXCHEQUES];
    // Numero de cheques gerados em um dia:
    int n = randomInt(MAXCHEQUES);

    for (int i = 0; i < n; i++) {
        int cheque = randomInt(MAXCHEQUES);
        while (existe(cheque, vetor, i)) {
            cheque = randomInt(MAXCHEQUES);
        }
        vetor[i] = cheque;
    }
    printf("Serao gerados %d cheques.\n", n);
    imprimeVetor(vetor, n);

    // Ordenação
    int contador[MAXCHEQUES];
    int vetorOrdenado[MAXCHEQUES];
    /*
    for (int i = 0; i < n; i++) {
        contador[i] = 0;
        for (int j = 0; j < n; j++) {
            if (vetor[j] < vetor[i]) contador[i]++;
        }
    }
    printf("\nContador:\n");
    imprimeVetor(contador, n);
    for (int i = 0; i < n; i++) {
        vetorOrdenado[contador[i]] = vetor[i];
    }
    printf("\nVetor ordenado:\n");
    */
    ordena(vetor, vetorOrdenado, n);
    imprimeVetor(vetorOrdenado, n);



    return 0;
}
