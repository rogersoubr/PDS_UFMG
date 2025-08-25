#include <stdio.h>

void soma1(int *n)
{
    (*n)++; //consulta local e incrementa no valor
}

void troca(float *end_valor1, float *end_valor2)
{


    float test = *end_valor2;
    *end_valor2 = *end_valor1; 
    *end_valor1 = test;
    //consulta local e incrementa no valor

    // printf("\nValor 1 Depois: %p\nValor 2 Depois:%p",end_valor1,end_valor2);
    
} 

int ddd(const char *telefone)
{
    char dd[3];
    strncpy(dd, telefone, 2);
    dd[2] = '\0'; 

    return atoi(dd);

}