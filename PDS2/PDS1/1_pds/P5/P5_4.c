int main(){
    int aux =0 ; 
    int big = 0;
    int small = 0;
    int numbers[16];
    

    for (int i = 1; i < 16; i++)//vai fazer 15 vezes, na 15 vai retornar erro
    {
        //numbers[i] = i;
        printf("Digite a %d altura sem virgula: ",i);
        scanf("%d",&numbers[i]);//vai ler o valor do vetor
        if (numbers[i] > big){
            big = numbers[i];
        }

        if (numbers[i] < small){
                small = numbers[i];
        }else if(small == 0){
            small = numbers[1];//se permanecer 0, vai rceber o primeiro valor
        }

    }
    printf("Maior altura: %d",big);
    printf("\n Menor artura: %d",small);
    return 0;   
}