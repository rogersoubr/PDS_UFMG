#include <stdio.h>
#include <math.h>

float gumbel(float x,float u,float b)
{
    float z = (x-u)/b;
    float f = (1 / b) * exp(-(z + exp(-z)));
    return f;
}


int main() {
    float result = gumbel(2.5,2.5,0.5);
    printf("Resultado: %f",result);
}