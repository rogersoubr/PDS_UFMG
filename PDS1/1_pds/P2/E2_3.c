#include <stdio.h>
#include <math.h>

float laplace(float x,float u,float b)
{
    float modulo = fabs(x - u);
    float exp_calc = exp(-modulo / b);

    float f = (1.0 / (2.0 * b)) * exp_calc;
    return f;
}


int main() {
    float result = laplace(0.0,0.0,1);
    printf("Resultado: %f",result);
}