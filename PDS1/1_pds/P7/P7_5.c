#include <stdio.h>


int main(){
    int linha, coluna, inverso = -1;


    printf("Quantidade de linhas: ");
    scanf("%d",&linha);

    printf("Quantidade de colunas: ");
    scanf("%d",&coluna);
    int matriz[linha][coluna];
    int matrizO[linha][coluna];


    for (int i = 0; i < linha; i++){

        for (int j = 0; j < coluna; j++){
            printf("Coloque o valor da celula %d.%d:  ",i+1,j+1 );
            scanf("%d", &matriz[i][j]);
        }
        
    }

    printf("\nMatriz comum:\n");

    for (int i = 0; i < linha; i++){
        for (int j = 0; j < coluna; j++){
            printf("%6d", matriz[i][j]);
        }
            printf("\n");
    }

    printf("\nMatriz oposta:\n");

        for (int i = 0; i < linha; i++){
        for (int j = 0; j < coluna; j++){
            if(matriz[i][j > 0])  matrizO[i][j] = matriz[i][j] * inverso; 
            printf("%6d", matrizO[i][j]);
        }
            printf("\n");
    }
    

    return 0;
}