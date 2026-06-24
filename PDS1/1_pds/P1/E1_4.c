#include <stdio.h>

int main() {
    //acho que coloquei juros a mais
    //primeiro mês
    double valor = 789.54;
    valor *= 1.0056;
    printf("Valor 1 mes: %.2lf \n",valor);
    //segundo mes
    valor += 303.2;
    valor *= 1.0056;
    printf("Valor 2 mes: %.2lf \n",valor);
    //terceiro mes
    valor -= 58.25;
    valor *= 1.0056;
    printf("Valor 3 mes: %.2lf \n",valor);
}