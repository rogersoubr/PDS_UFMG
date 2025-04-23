#include <stdio.h>
#include "minhas_funcoes.h"

void main()
{
    float x,y;
    printf("Digite um numero: ");
    scanf("%f",&x);

    printf("Digite um segundo numero: ");
    scanf("%f",&y);

    printf("\nValor 1 Antes: %.4f\nValor 2 Antes:%.4f",x,y);

    troca(&x,&y);

    printf("\n########################");
    printf("\nValor 1 Depois: %.4f\nValor 2 Depois:%.4f",x,y);
}