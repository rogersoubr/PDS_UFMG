// NÃO ALTERE ESSA LINHA, mantive como a sua especificação pediu
#include "avaliacao_basica_controle.hpp" 
#include "../include/FilaProcessos.hpp"
#include <iostream>
#include <string>

int main() {
    FilaProcessos fila_processo;
    char input;

    // Fica lendo comandos enquanto houver entrada
    while (std::cin >> input) {
        if (input == 'a') {
            std::string nome;
            int prioridade;
            std::cin >> nome >> prioridade;
            fila_processo.adicionar_processo(nome, prioridade);
        } 
        else if (input == 'r') {
            Processo* p__ = fila_processo.remover_processo_maior_prioridade();
            // A especificação diz "não é necessário desalocar a memória" do processo,
            // então não damos 'delete p__' aqui.
        } 
        else if (input == 'i') {
            int id;
            std::cin >> id;
            Processo* p__ = fila_processo.remover_processo_por_id(id);
        } 
        else if (input == 'p') {
            fila_processo.imprimir_fila();
        } 
        else if (input == 'e') {
            int id;
            std::cin >> id;
            fila_processo.estimativa_tempo_para_execucao(id);
        } 
        else if (input == 'b') {
            avaliacao_basica();
        }
    }

    return 0;
}