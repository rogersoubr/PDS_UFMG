#include <stdio.h>
#include <stdlib.h>//mallo vem dessa lib

int main(){
    float x = 3.14;
    float *p = NULL;

    //p =&x;
    //printf("P = %p, local de X = %p, *P = %.2f", p, &x, *p);

    p = (float*)malloc(sizeof(float));//você sabe o tamanho de byte, mas sabe a bar
    p[0] = 2.78;
    //reserva o endereço de memório
    //reserva local de byts no computador
    //se não clocara o floar, ele vai reconehcer como nul
    printf("Valor: %.2f | endereco: %p\n se | sizeof: %ld", *p, p, sizeof(float));
    free(p);//precisa liberar a memória, aqui libera p
    // printf("Valor: %.2f | endereco: %p\n", *p, p);
    // return 0;

    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d",&n);

    int* pp;
    pp = (int* ) malloc(sizeof(int)*n);
    for (int i = 0; i < n; i++)//for para preencher os locais da memória
    {
        pp[i] = i+1;
    }

    printf("vetor: \n");
    for(int i = 0; i < n; i++)//for para imprimir o vetor
    {
        printf("%.2d", pp[i]);
    }
    
}