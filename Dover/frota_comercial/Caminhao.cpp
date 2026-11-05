#include "Caminhao.hpp"


Caminhao::Caminhao(std::string modelo, double capacidadeMax, double nivelAtual, double cargaAtual, std::string apelido):
Veiculo(modelo, capacidadeMax, nivelAtual), _cargaAtual(cargaAtual), _apelido(apelido){
    capacidadeMax = 300;
    std::cout<<"construindo PESADO: "<< this->_modelo<<std::endl;
}

Caminhao::~Caminhao(){
    std::cout<<"Destruindo CAMINHAO: "<<this->_modelo<<std::endl;
}

double Caminhao::calcularAutonomia() {
    if(_tanque.getNivelAtual() == 0) {
        std::cout<<"TA ZERADO, nao tem nem como gastar amor"<<std::endl;
        return;
    }
    //o caminhão faz 3 km/l quando vazio, mas perde 0.2 km/l para cada tonelada de carga transportada.
    double capacidade =0.0;
    if(_cargaAtual == 0){
        capacidade = 3.0/_tanque.getNivelAtual();
    }else{
        capacidade = 3.0/_tanque.getNivelAtual()-( _cargaAtual * 0.2);
    }
    return capacidade;
}
void Caminhao::exibirDados() const{
    std::cout<<"Apelido: "<<_apelido;
}