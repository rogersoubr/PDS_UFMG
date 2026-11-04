#ifndef CAMINHAO
#define CAMINHAO
#include "Veiculo.hpp"

class Caminhao: public Veiculo{
    private:
        double cargaAtualTonas;
    public:
        Caminhao();
        ~Caminhao() override;
        void calcularAutonomia() override{
            //o caminhão faz 3 km/l quando vazio, mas perde 0.2 km/l para cada tonelada de carga transportada.
        }
};

#endif