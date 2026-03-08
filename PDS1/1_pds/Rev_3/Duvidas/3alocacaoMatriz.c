/*
Escreva um programa que:

Leia dois inteiros lin e col.

Aloque uma matriz de lin x col inteiros dinamicamente.

Peça ao usuário para preencher a matriz.

Imprima a matriz na tela.

Dica: aloque um vetor de ponteiros e, em seguida, aloque cada linha individualmente.
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int lin, col;
    printf("Digite quantas linhas: ");
    scanf("%d",&lin);
    printf("Digite quantas colunas: ");
    scanf("%d",&col);

    int** M = (int** )malloc(lin * sizeof(int));//um ponteiro que vai armazenar muitos ponteiros do tipo int
    
    for (int i = 0; i < lin; i++){
         matriz[i] = (int* )malloc(col * sizeof(int));//tem que alocar cada coluna, que é cada valor 
         
        for (int j = 0; j < col; j++){
            printf("Coloque o valor da coluna %d|%d: ",i,j);
            scanf("%d",&M[i][j]);
        }

    }

    for (int i = 0; i < lin; i++){
        for (int j = 0; j < col; j++){
            printf("%6d",M[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < lin; i++){
        free(M[i]);
    }

    return 0;
}