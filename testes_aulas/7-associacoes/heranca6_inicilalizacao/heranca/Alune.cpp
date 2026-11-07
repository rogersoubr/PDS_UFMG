#include "Alune.hpp"
#include <iostream>

Alune::Alune(std::string nome, int matricula): Pessoa(nome), _matricula(matricula){}

void Alune::exibir() const{
    std::cout<<"Alune: "<<getNome()<<" | Matricula: "<< _matricula<<std::endl;
}