/* PARTE 1
Escreva um programa que:

Leia um número n.

Aloque dinamicamente um vetor de n inteiros.

Peça ao usuário para digitar os n valores.

Imprima os valores digitados.

Dica: use malloc(n * sizeof(int)).
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int n;
    printf("Digite a quantidade do vetor: ");
    scanf("%d",&n);

    int* vetor = (int*)malloc(n * sizeof(int));


    for (int i = 0; i < n; i++)
    {   
        printf("Digite o numero: ");
        scanf("%d",&vetor[i]);
    }

    printf("\n");
    for (int i = 0; i < n; i++)
    {   
        printf(" %d \n", vetor[i]);
    }

    free(vetor);
    return 0;
}