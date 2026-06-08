#include <iostream>
#include <string>
#include "../include/Processo.hpp"

using namespace std;

class FilaProcessos {     
  private:
    struct No{
      Processo* _processo;
      No* _proximo;
    }; 
    No* inicio___;
    int proximo_id___;
    
  public:  
    void adicionar_processo(string nome, int prioridade);//adiciona em ordem de prioridade, maior para menor
    Processo* remover_processo_maior_prioridade();//retornar um ponteiro para o processo removido da lista, se for vazia, nullpt
    Processo* remover_processo_por_id(int id);//retornar um ponteiro para o processo removido da lista
    void estimativa_tempo_para_execucao(int id);//somatório dos tempos reservados "Tempo estimado para execução do processo NOMEPROCESSO (id=ID) eh X segundos."
    void imprimir_fila();//situação atual da fila, percorre toda lista
};