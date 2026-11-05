#include "CarroPasseio.hpp"


CarroPasseio::CarroPasseio(std::string modelo, double capacidadeMax, double nivelAtual, bool isArCondicionadoLigado, std::string apelido):
Veiculo(modelo, capacidadeMax, nivelAtual), _isArCondicionadoLigado(isArCondicionadoLigado), _apelido(apelido){
    capacidadeMax = 50;
    std::cout<<"construindo CARRO: "<< this->_modelo<<std::endl;
}

CarroPasseio::~CarroPasseio(){
    std::cout<<"Destruindo CARRO: "<<this->_modelo<<std::endl;
}

double CarroPasseio::calcularAutonomia() {
    if(_tanque.getNivelAtual() == 0) {
        std::cout<<"TA ZERADO, nao tem nem como gastar amor"<<std::endl;
        return;
    }
    //o caminhão faz 3 km/l quando vazio, mas perde 0.2 km/l para cada tonelada de carga transportada.
    double capacidade =0.0;
    if(_isArCondicionadoLigado == 0){
        capacidade = 12.0/_tanque.getNivelAtual();
    }else{
        capacidade = 10.0/_tanque.getNivelAtual();
    }
    return capacidade;
}
void CarroPasseio::exibirDados() const{
    std::cout<<"Apelido: "<<_apelido;
}