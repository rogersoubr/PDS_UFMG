#include <iostream>
#include <string>
#include "../include/Processo.hpp"

Processo::Processo(int id, std::string nome, int prioridade){
    this->_id = id;
    this->_nome = nome;
    this->_prioridade = 0;//BAIXA (0), MÉDIA (1) ou ALTA (2)
}
int Processo::getId(){return this->_id;};//id comeca com 1
int Processo::getPrioridade(){return this->_prioridade;}; 
std::string Processo::getNome(){return this->_nome;};

double tempo_reservado_processo(){
    if(getPrioridade() == 0){

    }


};


