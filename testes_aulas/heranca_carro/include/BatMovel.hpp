#ifndef BATMOVEL_HPP
#define BATMOVEL_HPP
#include <iostream>
#include "../include/Carro.hpp"
#include "../include/Turbina.hpp"
#include <string>


class BatMovel : public Carro {
    private:
        Turbina turbina;
    public:
        BatMovel(std::string nome, std::string cor, int ano, int num_portas, std::string tipo_gasolina);
        void acelerar_turbo();
        void frear() override;
    private:
        void acionar_turbina();
};

#endif