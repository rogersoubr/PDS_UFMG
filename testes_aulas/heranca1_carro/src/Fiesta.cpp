
#include <iostream>
#include "../include/Carro.hpp"
#include "../include/Fiesta.hpp"

Fiesta::Fiesta(std::string nome, std::string cor, int ano, int num_portas, std::string tipo_gasolina): Carro(nome,cor,ano,num_portas,tipo_gasolina){};//tem que iniciar o outro, porque o pai vem antes do filho
void Fiesta::acabou_gasolina(std::string tipo_gasolina){
    std::cout <<" estou cansado chefe, coloque mais: "<< tipo_gasolina<<std::endl;
};

