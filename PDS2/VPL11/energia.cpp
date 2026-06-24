#include "energia.hpp"

Energia::Energia(int carga_inicial):carga_(carga_inicial){
}


int Energia::getCarga() const {
}

void Energia::consumir(int quantidade) {
    carga -= quantidade;
}