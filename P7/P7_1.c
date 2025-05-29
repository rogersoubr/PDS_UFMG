#include <stdio.h>

#define MAX 100

int main(){
    int quant,i = 0;
    int vetor[MAX];

    printf("Quantos numeros que digitar? ");
    scanf("%d",&quant);
    


    for(i = 0; i < quant; i++)
    {
    printf("Digite o %d numero: ",i+1);
    scanf("%d",&vetor[i]);
    }

    for(i = quant-1; i >= 0; i--)//quant -1 pq array começa do 0
    {
        printf(" %d ",vetor[i]);
    }

    return 0;
}

