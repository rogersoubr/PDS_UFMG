#ifndef CARROPASSEIO_HPP
#define CARROPASSEIO_HPP
#include "Veiculo.hpp"

class CarroPasseio: public Veiculo{
    private:
        bool isArCondicionadoLigado;
        double cargaAtualTonas;
    public:
        CarroPasseio();
        ~CarroPasseio() override;
        void calcularAutonomia() override{
            //Faz 12 km/l se o ar estiver desligado e 10 km/l se o ar estiver ligado
        }
};

#endif