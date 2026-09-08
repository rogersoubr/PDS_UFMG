//rogersoubr - 2025108154
#ifndef PROCESSO_C
#define PROCESSO_C
#include <iostream>
#include <string>
#include "../include/Processo.hpp"

Processo::Processo(int id, std::string nome, int prioridade){

};

 double Processo::tempo_reservado_processo(){

 };

 void Processo::imprimir_dados(){

 };

int Processo::getID(){
    return this->_id;
};
int Processo::getPrioridade(){
    return this->_prioridade;
};
std::string Processo::getNome(){
    return this->_nome;
};

#endif