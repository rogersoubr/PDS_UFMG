#include <string>
#include <iostream>
#include "Veiculo.hpp"

Veiculo::Veiculo(std::string modelo, double capacidadeMax, double nivelAtual):
_tanque(capacidadeMax, nivelAtual), _modelo(modelo){
    std::cout<<"construindo VEICULO: "<<this->_modelo<<std::endl;
}

Veiculo::~Veiculo(){
    std::cout<<"Destruindo VEICULO: "<<this->_modelo<<std::endl;
};
