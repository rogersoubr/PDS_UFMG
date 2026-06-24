#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>

int main(){
    int m, n, k = 0;
    while( (m<1 || m>100)||
            (n<1 || n>100)||
            (k<1 || k>100)
        ){
        printf("\nEscreva valores menores ou iguais a 100\n");
        
        printf("Digite o valor de linhas: ");
        scanf("%d",&m);

        printf("Digite o valor de colunas: ");
        scanf("%d",&n);

        printf("Digite o inervalor de sorteamento () : ");
        scanf("%d",&k);
    
    }
    //printf("m: %d, n: %d, k: %d ",m,n,k);

    //gera partida de aleatoriedade
    srand(k);

    //gera metriz
    int matriz[m][n];
    for (int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
           matriz[i][j] = ( (rand()%k) +1);//
        }
        
    }

    //imprime matriz
    for (int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
           printf(" %4d ",matriz[i][j]);
        }
        
        printf("\n");
    }

    //QUESTão 4 
    printf("\n \n");
    int marca[m][n]; // marcação de posições a zerar
    int total_zeros = 0;

// Inicializa marcação
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            marca[i][j] = 0;//a matriz marca vale tudo 0
        }
    }

    // Verifica horizontal e vertical
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {

            // VERIFICAÇÃO Horizontal
            //j <= n - 3 Aqui diz que j deve ser menor que o número de colunas -3. porque depois vai somar +2  
            if (j <= n - 3 && matriz[i][j] != 0 &&
                matriz[i][j] == matriz[i][j + 1] &&
                matriz[i][j] == matriz[i][j + 2]) {

                int v = matriz[i][j];//valor que está
                int col = j;//coluna que está

                while (col < n && matriz[i][col] == v)//vai marcar todas, enquanto forem iguais
                {
                    marca[i][col] = 1;
                    col++;
                }
            }

            // VERIFICAÇÃO Vertical
            if (i <= m - 3 && matriz[i][j] != 0 &&
                matriz[i][j] == matriz[i + 1][j] &&
                matriz[i][j] == matriz[i + 2][j]) {

                int v = matriz[i][j];
                int lin = i;

                while (lin < m && matriz[lin][j] == v) {
                    marca[lin][j] = 1;
                    lin++;
                }
            }
        }
    }

    // Aplica as marcações e conta zeros
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (marca[i][j]) {
                matriz[i][j] = 0;
                total_zeros++;
            }
        }
    }

    // Imprime matriz final
    printf("\nMatriz final:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nTotal de zeros: %d\n", total_zeros);
    
    return 0;
}