#include <iostream>
//#include "../include/Motor.hpp"
#include "../include/Carro.hpp"

 
Carro::Carro(std::string nome, std::string cor, int ano, int num_portas, std::string tipo_gasolina) :
    nome(nome), cor(cor), ano(ano), num_portas(num_portas), tipo_gasolina(tipo_gasolina) {
        std::cout<<"Nome: " << getNome() <<"\n"
        <<"Cor: " << getCor() <<"\n"
        <<"Ano: " << getAno() <<"\n"
        <<"Número de portas: " << getNum_portas() <<"\n"
        <<"Tipo de gasolina: " << getTipo_gasolina() <<"\n"
        <<std::endl;
    }

void Carro::acelerar() {
    this->acionar_motor();
}

void Carro::frear() {
    this->acionar_discos_freio();
}

int Carro::getNum_portas() {
    return this->num_portas;
}
std::string Carro::getNome(){return this->nome;};
std::string Carro::getCor(){return this->cor;};
int Carro::getAno(){return this->ano;};
std::string Carro::getTipo_gasolina(){return this->tipo_gasolina;};


void Carro::setNome(std::string _nome){this->nome = _nome;};
void Carro::setCor(std::string _cor){this->cor = _cor;};
void Carro::setAno(int _ano){this->ano = _ano;};
void  Carro::setNum_portas(int _num_portas){ this->num_portas = _num_portas;};
void Carro::setTipo_gasolina(std::string _tipo_gasolina){this->tipo_gasolina = _tipo_gasolina;};

void Carro::acionar_motor() {
    this->motor.injetar_gasolina();
}

void Carro::acionar_discos_freio() {
    std::cout << "Acionando discos de freio." << std::endl;
};
