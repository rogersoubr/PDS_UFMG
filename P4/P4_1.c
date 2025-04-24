#include <stdio.h>

int main(){
    int aux =0 ; 
    int big = 0;
    int small = 0;
    int numbers[6];
    

    for (int i = 1; i < 6; i++)//vai fazer 7 vezes, na 7 vai retornar erro
    {
        //numbers[i] = i;
        printf("Digite um %d numero: ",i);
        scanf("%d",&numbers[i]);//vai ler o valor do vetor
        if (numbers[i] > big){
            big = numbers[i];
        }

        if (numbers[i] < small){
                small = numbers[i];
        }else if(small == 0){
            small = numbers[1];//se permanecer 0, vai rceber o primeiro valor
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