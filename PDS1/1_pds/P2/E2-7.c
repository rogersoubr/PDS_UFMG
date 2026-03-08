#include <stdio.h>
#include "stats.h"

float divideFloat(int x, int y)
{
    //vai retornar a divisao em float
    return (float)x/y;
}

void main() {
    float result = divideFloat(7,3);
    printf("Divisao com float: %.2f",result);
}