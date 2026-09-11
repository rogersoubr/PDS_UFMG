//rogersoubr - 2025108154
#ifndef FILAPROCESSOS_C
#define FILAPROCESSOS_C
#include <iostream>
#include <string>
#include "../include/FilaProcessos.hpp"
#include <iomanip> //casa decimal

FilaProcessos::FilaProcessos(){
    this->id_interno = 1;
    inicio = nullptr;
};

void FilaProcessos::adicionar_processo(std::string nome, int prioridade){
    int id_unico = this->id_interno;
    //alocando memo para novo processo
    Processo* new_processo = new Processo(id_unico, nome, prioridade);
    //alocando memoria para novo no
    No* new_no = new No;
    new_no ->processo = new_processo; //o novo no na lisata, recebe o novo processo
    new_no->prox=nullptr;//comeca com nullo

    if (this->inicio == nullptr) {
        this->inicio = new_no;
    } else if (prioridade > this->inicio->processo->getPrioridade()) {
        new_no->prox = this->inicio;
        this->inicio = new_no;
    } else {
        No* no_atual = this->inicio;
        //avanço ate achar alguem com prioridade menor, empare no fim
        while (no_atual->prox != nullptr && no_atual->prox->processo->getPrioridade() >= prioridade) {
            no_atual = no_atual->prox;
        }
        new_no->prox = no_atual->prox;
        no_atual->prox = new_no;
    }

};

Processo* FilaProcessos::remover_processo_maior_prioridade(){
    if (this->inicio == nullptr) return nullptr;//TEM QUE GARANTIR QUE TEM
    
    No* no_limpado = this->inicio;
    Processo* processo_limpado = no_limpado->processo;
    
    //agora aponta para o segundo elemento
    this->inicio = this->inicio->prox;
    
    //deleta apenas o no da lista, o ptocesso eh retornado intocavel
    delete no_limpado; 
    return processo_limpado;
};

Processo* FilaProcessos::remover_processo_por_id(int id){
    double tempo_max = 0.0;//nao tem nada a ver com limites
    No* no_atual = this->inicio;
    bool achou_no = false;
    std::string nome_processo_passado = "";
    //m
    while (no_atual != nullptr) {
        if (no_atual->processo->getID() == id) {
            achou_no = true;
            nome_processo_passado = no_atual->processo->getNome();
            break;
        }
        tempo_max += no_atual->processo->tempo_reservado_processo();
        no_atual = no_atual->prox;
    }

    if (achou_no) {
        //1 casa decimal
        std::cout << std::fixed << std::setprecision(1); 
        std::cout << "Tempo estimado para execução do processo " << nome_processo_passado 
                  << " $(Id=" << id << ")$ eh " << tempo_max << " segundos.\n";
    }
};

void FilaProcessos::estimativa_tempo_para_execucao(int id){
    double tempo_max = 0.0;
    No* no_atual = this->inicio;
    bool achou_no = false;
    std::string nome_processo_passado = "";

    //SOMA OS TEMPOS DE TODOS QUE ESTAO NA FRENTE ATE ACHAR O ID QUE QUERO
    while (no_atual != nullptr) {
        if (no_atual->processo->getID() == id) {
            achou_no = true;
            nome_processo_passado = no_atual->processo->getNome();
            break;
        }
        tempo_max += no_atual->processo->tempo_reservado_processo();
        no_atual = no_atual->prox;
    }

    if (achou_no) {
        //fica com 1 casa decimal, se Deus quiser
        std::cout << std::fixed << std::setprecision(1); 
        std::cout << "Tempo estimado para execução do processo " << nome_processo_passado 
                  << " $(Id=" << id << ")$ eh " << tempo_max << " segundos.\n";
    }
};

void FilaProcessos::imprimir_fila(){
    No* no_atual = this->inicio;
    while (no_atual != nullptr) {
        no_atual->processo->imprimir_dados();
        no_atual = no_atual->prox;
    }
};


#endif