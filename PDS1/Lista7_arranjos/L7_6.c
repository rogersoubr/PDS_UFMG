//Roger Souza Brandao  2025108154
/* RODAR O ARQUIVO:
1) Vai para o caminho do arquivo
2) Rode o GCC: gcc NOME_ARQUIVO.c
3) Rode o executável gerado: ./a.exe
*/
#include <stdio.h>
#include <stdlib.h>

float produtoEscalar(float u[1000], float v[1000], int n){
    float soma =0.0f;
    for (int k = 0; k < n; k++){
        soma+= u[k]*v[k] ;
    };
    return soma;
    
}


int main(){
    float V[1000];
    float U[1000];
    int n = 0;
    printf("Digite o espaco Rn dos vetores: \n");
    scanf("%d",&n);
    printf("\n------PRIMEIRO VETOR-----\n");
    for(int i=0; i<n;i++){
        printf("Digite o coeficiente %d real do R%d: ",i+1,n);
        scanf("%f",&V[i]);
    
    };
    printf("\n------SEGUNDO VETOR-----\n");
    for(int j=0; j<n;j++){
        printf("Digite o coeficiente %d real do R%d: ",j+1,n);
        scanf("%f",&U[j]);
    };

    printf("PRODUTO ESCALAR:  %.2f",produtoEscalar(V, U, n));
    
    


    return 0;
}