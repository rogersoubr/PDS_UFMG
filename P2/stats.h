#include <stdio.h>
#include <math.h>

float cauchy(float x)
{
    x = 1/(3.14*(1+x*x));
    printf("Valor %.2f",x);
}

float gumbel(float x,float u,float b)
{
    float z = (x-u)/b;
    float f = (1 / b) * exp(-(z + exp(-z)));
    return f;
}

float laplace(float x,float u,float b)
{
    float modulo = fabs(x - u);
    float exp_calc = exp(-modulo / b);

    float f = (1.0 / (2.0 * b)) * exp_calc;
    return f;
}