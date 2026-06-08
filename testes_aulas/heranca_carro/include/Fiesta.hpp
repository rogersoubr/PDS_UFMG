#ifndef FIESTA_HPP
#define FIESTA_HPP
#include <iostream>
#include "../include/Carro.hpp"
#include <string>

class Fiesta : public Carro{        
    public: 
        Fiesta(std::string nome, std::string cor, int ano, int num_portas, std::string tipo_gasolina);//tem que iniciar o outro, porque o pai vem antes do filho
        void acabou_gasolina(std::string tipo_gasolina);
};

#endif 
