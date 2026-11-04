#include <string>
#include <iostream>
#include "Veiculo.hpp"

Veiculo::Veiculo(std::string modelo, double capacidadeMax, double nivelAtual):
_tanque(capacidadeMax, nivelAtual), _modelo(modelo){}

Veiculo::~Veiculo(){
    std::cout<<"Destruindo VEICULO"<<std::endl;
};
