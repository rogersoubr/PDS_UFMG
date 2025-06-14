#include <stdio.h>


int main(){
    int tamanho, i, j, maior, aux;
    //PEGA TAMANHO
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int vetor[tamanho+1]; 
    //COLOCANO VETOR
    for (int i = 0; i < tamanho; i++)
    {
        printf("Digite %d numero: ", i+1);
        scanf("%d", &vetor[i]);
    }


    //ORGANIZA
    //for que vai ate penultimo
    for (int i = 0; i < tamanho-1; i++){
        maior = i;//maior é o primeiro
        for(j = i+1;j<tamanho; j++)//percorrer o restante do vetor
        {
            if(vetor[j] > vetor[maior]){
                maior = j;
            }
        }

        if(i != maior){
            aux = vetor[i];
            vetor[i] = vetor[maior];
            vetor[maior] = aux;
        }
    }
    
    //RESULTADO
    for (int i = 0; i < tamanho; i++)
    {
        printf(" %d ", vetor[i]);
    }


    return 0;
}