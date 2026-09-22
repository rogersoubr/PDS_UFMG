#ifndef JOGADOR_C
#define JOGADOR_C
#include "../include/Jogador.hpp"

Jogador:: Jogador(std::string nome, char simbolo){
    this->nome = nome;
    this->simbolo = simbolo;
}

std::string Jogador::getNome() const{
    return this->nome;
}

char Jogador::getSimbolo() const{
    return this->simbolo;
}
#endif JOGADOR_C