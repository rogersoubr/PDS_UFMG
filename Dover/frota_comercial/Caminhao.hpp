#ifndef CAMINHAO_HPP
#define CAMINHAO_HPP
#include "Veiculo.hpp"

class Caminhao: public Veiculo{
    private:
        std::string _apelido;
        double _cargaAtual;
    public:
        Caminhao(std::string modelo, double capacidadeMax, double nivelAtual, double cargaAtual, std::string _apelido);
        ~Caminhao() override;
        double calcularAutonomia() override{
            //o caminhão faz 3 km/l quando vazio, mas perde 0.2 km/l para cada tonelada de carga transportada.
        }
        void exibirDados() const override{
            
        }
};

#endif