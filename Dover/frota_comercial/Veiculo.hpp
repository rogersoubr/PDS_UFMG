#include <string>
#include <iostream>
#include "TanqueCombustivel.hpp"


class Veiculo{
    protected:
        std::string _modelo;
        TanqueCombustivel _tanque;
    public:
        Veiculo(std::string modelo, double capacidadeMax, double nivelAtual);
        virtual ~Veiculo();
        virtual void calcularAutonomia() = 0;
        virtual void exibirDados() const = 0;
};