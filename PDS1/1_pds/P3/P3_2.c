#include <stdio.h>
#include "minhas_funcoes.h"

int testaSoma1(int x)
{
    soma1(&x);//local da var
    return x;
}
/*
void main() {
    int num =  2;//coloca valor na var
    printf("Soma: %d",testaSoma1(num));
}
*/