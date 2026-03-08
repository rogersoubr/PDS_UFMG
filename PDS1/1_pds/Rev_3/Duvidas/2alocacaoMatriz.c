/* parte 2
Com base no exercício anterior:

Some todos os elementos do vetor, usando uma função recursiva chamada somaVetor.

Mostre a soma na tela.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int somaVetor(int* v, int n){
    if(n <=0) return 0;
    return v[n - 1] + somaVetor(v, n-1);

};

int main(){
    int n;
    printf("Digite a quantidade de termos no V: ");
    scanf("%d",&n);
    
    int* vetorAloca = (int*)malloc(n*sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("Digite o numero %d: ",i);
        scanf("%d",&vetorAloca[i]);
    }

    int soma = somaVetor(vetorAloca, n);


    printf("Soma: %d ",soma);
    free(vetorAloca);


    return 0;
}