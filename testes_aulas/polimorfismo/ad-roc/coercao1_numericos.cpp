#include <iostream>
//se fosse Narrowing, aqui seria um tipo int
void processarValor(double val) { 
    std::cout << "Valor recebido como double: " << val << std::endl; 
}
int main() { 
    int numero = 42; //se fosse Narrowing, aqui seria um valor boleano
    processarValor(numero); // Coerção implícita (widening / promoção de int para double) return 0; }
    return 0;
}
