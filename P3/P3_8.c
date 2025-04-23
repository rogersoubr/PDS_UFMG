#include <stdio.h>

unsigned long long fast_pow_2(int expoente)
{
    long long n = 2;
    n = n << expoente;
    return n;

}

int main(){
    printf("teste %d",fast_pow_2(2));//vai dar 8
}