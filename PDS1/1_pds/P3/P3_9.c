#include <stdio.h>
unsigned int soma1SePar(unsigned int number) 
{
    return number + ((~(number & 1)) & 1);
    //(number & 1) = se for par vai dar 0, se for impar vai dar 1
    //(~(number & 1)) = se der como par 0, vai inverter como 1
    //((~(number & 1)) & 1) = & só para confirmar que deu 1
}

int main()
{
    printf("Numero: %d",soma1SePar(2));
}