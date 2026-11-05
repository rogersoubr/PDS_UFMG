#ifndef VEICULO_HPP
#define VEICULO_HPP

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
        virtual double calcularAutonomia() = 0;
        virtual void exibirDados() const = 0;
};

#endif