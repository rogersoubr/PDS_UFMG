#include <stdio.h>
#include "stats.h"

float mostraFacionaria(float n)
{
    //vai tirar a parte inteira
    float partFacionaria = n - (int)n;
    return partFacionaria;
}

void main() {
    float result = mostraFacionaria(3.8);
    printf("Parte fracionária: %f",result);
}