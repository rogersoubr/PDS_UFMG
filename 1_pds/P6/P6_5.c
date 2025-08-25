#include <stdio.h>

// corretor, aqui vai um exemplo de entrada substring:  
//string
//str

int main() {
    char A[50], B[50], aux[50];
    int i, j, achou, tamA, tamB, tamanhoA, tamanhoB=0;

    printf("Digite 2 palavras:");
    fgets(A,50,stdin);
    fgets(B,50,stdin);

    tamA = strlen(A);
    tamB = strlen(B);

    tamanhoA = tamA -1;
    tamanhoB = tamB -1;

    for (i = 0; i < tamanhoA - tamanhoB; i++)//=1
    {
        printf("A-B: %d\n",i);

        for(j=0; j<tamanhoB;j++){

            printf("Tamanho B: %d\n",j);

            if(A[i+j] != B[j]){
                break;
            }

        }

        if(j == tamanhoB){
            achou = 1;
            printf("Achou? %d\n",achou);
            break;
        }

    }
    //aux[i] = '\0';

    if (achou) {
        printf("E substring\n");
    } else {
        printf("Nao e substring\n");
    }   
    
    

    return 0;
}
