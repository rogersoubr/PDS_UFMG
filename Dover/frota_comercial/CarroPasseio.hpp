#ifndef CARROPASSEIO_HPP
#define CARROPASSEIO_HPP
#include "Veiculo.hpp"

class CarroPasseio: public Veiculo{
    private:
        bool _isArCondicionadoLigado;
        std::string _apelido;
    public:
        CarroPasseio(std::string modelo, double capacidadeMax, double nivelAtual,  bool isArCondicionadoLigado, std::string apelido);//a ordem importa
        ~CarroPasseio() override;
        double calcularAutonomia() override{
            //Faz 12 km/l se o ar estiver desligado e 10 km/l se o ar estiver ligado
        }
        void exibirDados() const override{

        }
};

#endif