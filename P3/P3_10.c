#include <stdio.h>
unsigned int parImpar(unsigned int number) 
{
    return ((~(number & 1)) & 1);
    //(number & 1) = se for par vai dar 0, se for impar vai dar 1
    //(~(number & 1)) = se der como par 0, vai inverter como 1
}

int main()
{
    printf("0 = impar\n1=par\n############");
    printf("\nResultado: %d",parImpar(3));
}