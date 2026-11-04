#include "TanqueCombustivel.hpp"

TanqueCombustivel::TanqueCombustivel(double capacidadeMaxima, double nivelAtual):
_capacidadeMaxima(capacidadeMaxima), _nivelAtual(nivelAtual) {
    std::cout<<"FUNCIONA"<<std::endl;
}

void TanqueCombustivel::abastecer(double litros){
    std::cout<<"Recebendo "<<litros<<" litros"<<std::endl;
    this->_nivelAtual = _nivelAtual+litros;
}

void TanqueCombustivel::gastar(double litros){
    std::cout<<"Bebeu "<<litros<<" litros visse"<<std::endl;
    this->_nivelAtual = _nivelAtual-litros;
}