//rogersoubr - 2025108154
#ifndef PROCESSO_C
#define PROCESSO_C
#include <iostream>
#include <string>
#include "../include/Processo.hpp"

Processo::Processo(int id, std::string nome, int prioridade){
    this->_id = id;
    this->_nome = nome;
    this->_prioridade = 0;//BAIXA (0), MÉDIA (1) ou ALTA (2)
};

 double Processo::tempo_reservado_processo(){
    if(getPrioridade() == 2){
        return 3.0;
    }else if(getPrioridade() == 1){
        return 1.5;
    }else{
        return 0.5;
    }
 };

void Processo::imprimir_dados(){
    std::string tipo_prioriadde = "";
    if(getPrioridade() == 2){
        tipo_prioriadde = "ALTA";
    }else if(getPrioridade() == 1){
        tipo_prioriadde = "MEDIA";
    }else{
        tipo_prioriadde = "BAIXA";
    }
    std::cout<<getID() <<"\t"<<getNome() <<"\t"<< tipo_prioriadde<<std::endl;
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