//rogersoubr - 2025108154
#ifndef FILAPROCESSOS_H
#define FILAPROCESSOS_H
#include <iostream>
#include <string>
#include "../include/Processo.hpp"

class FilaProcessos{
public:
    FilaProcessos(/* args */);

    void adicionar_processo(std::string nome, int prioridade);//Método que recebe os dados de um processo e o adiciona na lista de maneira ORDENADA considerando a prioridade informada. A ordenação da prioridade deve ser DECRESCENTE, ou seja, do maior para o menor. Logo, um processo de prioridade ALTA (2) deve ficar à frente na fila que um processo com prioridade BAIXA (0). Em caso de prioridades iguais, a ordem de inserção deve ser respeitada, ou seja, o último processo inserido fica ao final daquele grupo de prioridade. Além disso, no momento da inserção deve ser atribuída ao processo um id único, que é um número inteiro sequencial e gerenciado pela própria fila (deve começar com valor 1).

    Processo* remover_processo_maior_prioridade();//remove da fila o processo de maior prioridade, para facilitar, o primeiro da lista. Você deve retornar um ponteiro para o processo removido da lista (não é necessário desalocar a memória). Se a fila estiver vazia deve retornar nullptr.

    Processo* remover_processo_por_id(int id);//remove da fila um processo de acordo com o id. Você deve retornar um ponteiro para o processo removido da lista (não é necessário desalocar a memória). Caso não exista na lista um processo com o id informado deve-se retornar nullptr.

    void estimativa_tempo_para_execucao(int id);//Método que faz uma estimativa do tempo de espera para execução de um determinado processo (id). Para isso, deve-se apenas fazer o somatório dos tempos reservados de acordo com a prioridade dos processos à sua na frente da fila. Ao final deve-se imprimir uma mensagem no seguinte formato: "Tempo estimado para execução do processo NOMEPROCESSO (id=ID) eh X segundos.", com quebra de linha ao final. O tempo sempre deve ser impresso com uma casa decimal de precisão (veja o último link das referências abaixo).

    void imprimir_fila();//imprime a situação atual da fila, ou seja, percorre toda a lista (do início para o final) e chama o método 'imprimir_dados()' de cada processo.

};

#endif