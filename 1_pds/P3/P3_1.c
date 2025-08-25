#include <stdio.h>

void soma1(int *n)
{
    (*n)++; //consulta local e incrementa no valor
}

void main() {
    int num =  2;//coloca valor na var
    soma1(&num);//local da var
    printf("Soma: %d",num);
}