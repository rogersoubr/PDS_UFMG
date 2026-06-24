#include <stdio.h>
#include <stdlib.h>

int main(){
    int m,n,k =0;
    while(
        (m<1 || m>100)||
        (n<1 || n>100)||
        (k<1)
    ){
        printf("\nDigite um valor maior de linha e colunas entre 1 e 100, e para o sorteador, a partir de 1\n");

        printf("Digite as linhas: ");
        scanf("%d",&m);

        printf("Digite as colunas: ");
        scanf("%d",&n);

        printf("Digite de onde comeca o sortador: ");
        scanf("%d",&k);

    }

    int matriz[m][n];
    srand(k);

    for(int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            matriz[i][j] = ( (rand()%k) +1);
        }
    }

    for (int i = 0; i <m; i++){
        for (int j = 0; j < n; j++){
            printf(" %4d ",matriz[i][j]);
        }
        printf("\n");
    }


    //PARTE 2
    printf("\n \n");
    int cont =0;
    //matriz que vou usar para substituir da outra
    int zerada[m][n];
    for(int i= 0; i<m; i++){
        for(int j=0; j<n; j++){
            zerada[i][j] = 0;
        }
    }

    //varrer cada um
    for(int i=0;i<m;i++){
        for(int j = 0; j<n; j++){
            
            //varificando horizontal
            if(j <=n-3 &&
                matriz[i][j]!= 0 &&
                matriz[i][j]  == matriz[i][j+1] &&
                matriz[i][j] == matriz[i][j+2] ){
                    int v = matriz[i][j];
                    int col = j;
                    while (col<n && matriz[i][col] == v){
                        zerada[i][col] = 1;
                        col++;
                    }
            }


            //verificação vertical
            if(i<=m -3 &&
                matriz[i][j] !=0 &&
                matriz[i][j] == matriz[i+1][j] &&
                matriz[i][j] == matriz[i+2][j] ){
                int v= matriz[i][j];
                int lin = j;
                while (lin<n && matriz[i][lin] == v){
                    zerada[i][lin] = 1;
                    lin++;
                }            

            }

        }
    }

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            if(zerada[i][j]){
                matriz[i][j] = 0;
                cont++;
            }
        }
        
    }

    for (int i = 0; i <m; i++){
        for (int j = 0; j < n; j++){
            printf(" %4d ",matriz[i][j]);
        }
        printf("\n");
    }


    return 0;
}