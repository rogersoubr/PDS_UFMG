#include <stdio.h>
#include "stats.h"

float mostraInt(float n)
{
    //retorna o inteiro, mas continua sendo float
    return (int)n;
}

void main() {
    float result = mostraInt(3.8);
    printf("Parte inteira: %.2f",result);
}