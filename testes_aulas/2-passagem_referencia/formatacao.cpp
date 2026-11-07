#include <iostream>
#include <iomanip>

int valor_global = 100;

double dobrar_valor(double input) {
    double dobro = input * 2.0;
    return dobro;
}

int main() {
    int idade = 30;
    double salario = 12000.6;
    double lista[3] = {1.2, 2.3, 3.4};
    std::cout << std::fixed << std::setprecision(2) << dobrar_valor(salario);
    return 0;
}