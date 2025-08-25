#include <stdio.h>
#include <math.h>

float cauchy(double x)
{
    x = 1/(3.14*(1+x*x));
    printf("Valor %.2f",x);
}


int main() {
    cauchy(10);
}