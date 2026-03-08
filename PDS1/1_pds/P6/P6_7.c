#include <stdio.h>

void removechar(char *A, int tamanhoA, char c) {
    int i, aux = -1;
    for (i = 0; i < tamanhoA; i++)
    {
        if(A[i] == c){
            aux = i; 
            break;
        }
        if(A[i] == '\0') break;
    }

    printf("aux(vetor da letra): %d \n", aux);

    if (aux != -1) {
        while (A[aux] != '\0') {
            A[aux] = A[aux + 1];//coloca a posição posterior na atual. Nao precisa retirar a atual, nem acrescentar as anteriores
            printf("aux2: %d \n", aux);
            aux++;
        }
    }
    printf("Tudo: %s",A);
    
    
}

int main(){
    char str[] = "violeta";
    removechar(&str,10,'l');//quando for passar string, tem que sem em ''

    return 0;
}