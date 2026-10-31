//rogersoubr
#include "energia.hpp"

Energia::Energia(int carga_inicial) {
    
    //impede carga_inicial negativa
    if (carga_inicial < 0) {
        carga_ = 0;
    } else {
        carga_ = carga_inicial;
    }
}

int Energia::getCarga() const {

    //retorna a carga
    return carga_;
}

void Energia::consumir(int quantidade) {

    //ignora quantidades negativas
    if (quantidade > 0) {
        carga_ -= quantidade;
        //impede carga negativa
        if (carga_ < 0) {
            carga_ = 0;
        }
    }
}
