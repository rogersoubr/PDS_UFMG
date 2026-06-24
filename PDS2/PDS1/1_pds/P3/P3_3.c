#include <stdio.h>

void troca(float *end_valor1, float *end_valor2)
{


    float test = *end_valor2;
    *end_valor2 = *end_valor1; 
    *end_valor1 = test;
    //consulta local e incrementa no valor

    // printf("\nValor 1 Depois: %p\nValor 2 Depois:%p",end_valor1,end_valor2);
    
} 

void main()
{
    float x,y;
    printf("Digite um numero: ");
    scanf("%f",&x);

    printf("Digite um segundo numero: ");
    scanf("%f",&y);

    printf("\nValor 1 Antes: %f\nValor 2 Antes:%f",x,y);

    troca(&x,&y);

    printf("\n########################");
    printf("\nValor 1 Depois: %f\nValor 2 Depois:%f",x,y);
}