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
    
    
    
    return 0;
}