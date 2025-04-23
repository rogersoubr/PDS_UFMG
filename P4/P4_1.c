#include <stdio.h>

int main(){
    int aux = 0 ; 
    int big = 0;
    int small = 0 ;
    int numbers[5];
    for (int i = 0; i <= 5; i++)
    {
        //numbers[i] = i;
        printf("Digite um %d numero: ",i);
        scanf("%d",&numbers[i]);//vai ler o valor do vetor
        if (numbers[i] > big){
            big = numbers[i];
        }
        if (numbers[i] < small){
                small = numbers[
                    i];
        }
        if((numbers[i] % 3) == 0){
                aux++;
        }

    }

    printf("Maior numero: %d",big);
    printf("\n Menor numero: %d",small);
    printf("\n Quantidade de divisiveis por 3: %d",aux);
    return 0;   
}