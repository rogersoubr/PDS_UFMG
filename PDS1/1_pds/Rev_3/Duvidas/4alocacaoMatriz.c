/*
Com base no exercício anterior:

Crie um função recursiva chamada que calculaM, que calcule a média de todos os elementos da matriz.

Mostre o resultado.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int calculaS(int **M, int lin, int col, int posicao){

    if (posicao == lin*col){
        return 0;
    }

    //posição linear
    int linha = posicao / col;
    int coluna = posicao % col;

    return M[linha][coluna] + calculaS(M, lin, col, posicao +1);
    
}

int main(){

    int lin, col;
    printf("Digite a linha: ");
    scanf("%d",&lin);
    printf("Digite a coluna: ");
    scanf("%d",&col);


    int** matriz = (int** )malloc(lin * sizeof(int)); 

    for (int i = 0; i < lin; i++){
            matriz[i] = (int* )malloc(col * sizeof(int));//tem que alocar cada coluna, que é cada valor 

        for (int j = 0; j < col; j++){
            printf("Digite valor da %d|%d: ",i+1, j+1);
            scanf("%d",&matriz[i][j]);
        }
    }
    
    printf("\nMATRIZ: \n");

    for (int i = 0; i < lin; i++){
        for (int j = 0; j < col; j++){
            printf("%6d",matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nINICIO DOS VETORES: \n");
    for (int i = 0; i < lin; i++){
        //for (int j = 0; j < col; j++){
            printf("%d",*matriz[i]);
        //}
        printf("\n");
    }

        printf("\nINICIO DAS COLUNAS: \n");
    for (int i = 0; i < lin; i++){
        for (int j = 0; j < col; j++){
            printf("%4d",*matriz[j]);
        }
        printf("\n");
    }

    printf("\nMEDIA: \n");

    int soma = calculaS(matriz, lin, col, 0);
    int media = soma/(lin*col);
    printf("soma: %d | ME DIA: %d",soma, media);

    for (int i = 0; i < lin; i++)
    {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}