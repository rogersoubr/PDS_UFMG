#include <stdio.h>
#include <string.h>

int main(){
    int lin, col, maior = 0;

    printf("Digite a quantidade de LINHAS: ");
    scanf("%d",&lin);

    printf("Digite a quantidade de COLUNAS: ");
    scanf("%d",&col);

    int matriz[lin][col];

    printf("Digite as linhas separado por espaco: \n");

    for (int i = 0; i < lin; i++){
        for(int j=0;j<col; j++){

            scanf("%d",&matriz[i][j] );

            if(j == 0){

                if(matriz[i][j] >maior ){
                    maior = matriz[i][j];
                }
            } 
        }
    }

    for (int i = 0; i < lin; i++){
        for(int j=0;j<col; j++){
            printf(" %4d ", matriz[i][j]);
        }
        printf("\n");
    }    
    printf("Maior numero da primeira coluna: %d",maior);
    

    return 0;
}

// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

// int main() {
//     char texto[51]; // 50 + 1 para o '\0'
//     fgets(texto, 51, stdin);//nome,tamanho com \0,stdin
//     printf("%s",texto);
// 		return 0;
// }