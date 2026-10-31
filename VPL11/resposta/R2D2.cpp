#include "R2D2.hpp"
#include <cmath>

R2D2::R2D2(int energia_inicial, int limite_corredor, int obstaculo)
    : bateria_(energia_inicial), posicao_(0), limite_corredor_(limite_corredor),
      obstaculo_(obstaculo), tocou_terminal_(false) {}

int R2D2::getPosicao() const {
    return posicao_;//nome da variavel para o que mais se repete -> erro de sintaxe
}

int R2D2::getEnergiaRestante() const {
    return bateria_.getCarga();//colocanso retorno do get para buscar a carga
}

bool R2D2::mover(int distancia) {
    //retorna falso se nao pode mover -> pior caso primeiro
    if (bateria_.getCarga() <= 0 || distancia == 0) {
        return false;
    }

    //corrigi falta do sinal de igualdade
    int nova_posicao = posicao_ + distancia;

    if (nova_posicao < 0) {
        nova_posicao = 0;
    }

    if (nova_posicao > limite_corredor_) {
        nova_posicao = limite_corredor_;
    }

    // Responsavel pela movimentacao do R2-D2
    if (obstaculo_ != -1) {
        if ((posicao_ <= obstaculo_ && nova_posicao >= obstaculo_) ||
            (posicao_ >= obstaculo_ && nova_posicao <= obstaculo_)) {
            if (posicao_ <= obstaculo_) {
                //para imediatamente antes do obstaculo indo
                nova_posicao = obstaculo_ - 1;
            } else {
                //para imediatamente antes do obstaculo voltando
                nova_posicao = obstaculo_ + 1;
            }
        }
    }

    //corrigi, faltava sinal negativo
    int distancia_real = std::abs(nova_posicao - posicao_);

    //limita pela carga da bateria
    if (distancia_real > bateria_.getCarga()) {
        distancia_real = bateria_.getCarga();

        if (distancia > 0) {
            nova_posicao = posicao_ + distancia_real;
        } else {
            
            nova_posicao = posicao_ - distancia_real;//corrigida falta de sinal negativo
        }
    }

    if (nova_posicao == limite_corredor_) {
        tocou_terminal_ = true;
    }

    //corrigi o parametro
    bateria_.consumir(distancia_real);
    posicao_ = nova_posicao;

    //retorna verdadeiro se chegou no limite e voltou
    if (tocou_terminal_ == true && posicao_ == 0) {
        return true;
    }
    return false;
}
