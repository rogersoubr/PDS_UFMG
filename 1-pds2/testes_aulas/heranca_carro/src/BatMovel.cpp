#include <iostream>
#include "../include/Carro.hpp"
#include "../include/Turbina.hpp"
#include "../include/BatMovel.hpp"
//não precisa declarar a turbina, porque a composição já está no contrato

BatMovel::BatMovel(std::string nome, std::string cor, int ano, int num_portas, std::string tipo_gasolina) : Carro(nome,cor, ano,num_portas,tipo_gasolina) {
    std::cout << " nao suporto mais essa linguagem " << std::endl;
}

void BatMovel::acelerar_turbo() {
    this->acelerar();
    this->acionar_turbina();
}
void BatMovel::frear(){
    std::cout << "Acionando freios especiais." << std::endl;
}

void BatMovel::acionar_turbina() {
    this->turbina.ligar_turbo();
}
