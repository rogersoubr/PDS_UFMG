/*
Você é livre para adicionar nos TADs quaisquer outros atributos ou métodos auxiliares que julgar necessário. Além disso, você também pode escolher entre utilizar uma Lista Simplesmente ou Duplamente Encadeada. Não deve-se utilizar nenhum tipo já pronto na linguagem para armazenar/manipular os elementos!
*/

/*
-   'a nome prioridade': comando para adicionar um novo processo na fila de acordo com os parâmetros passados. Você pode assumir que o nome sempre será uma única palavra.
-   'r': comando para remover um processo da fila considerando a prioridade (maior) e ordem de inserção (inserido primeiro).
-   'i id': comando para remover um processo da fila considerando o id informado.
-   'p': comando para imprimir o estado atual fila.
-   'e id': comando para imprimir a estimativa de tempo para execução do processo com o id informado.
-   'b': deve chamar a função 'avaliacao_basica()' implementada no arquivo 

"avaliacao_basica_controle.hpp" (já incluído no main.cpp). Essa função faz uma avaliação do código (não apenas dos resultados).
*/

#ifndef AVALIACAO_H
#define AVALIACAO_H

#include <iostream>
#include "FilaProcessos.hpp"

using namespace std;

void avaliacao_basica() {
    
    FilaProcessos fila;

    cout << "----------" << endl;
    Processo *maior_prioridade = fila.remover_processo_maior_prioridade();
    if (maior_prioridade == nullptr) {
        cout << "CORRECT" << endl; 
    } else {
        cout << "ERROR"; 
    }
    cout << "----------" << endl;

    fila.adicionar_processo("Proc1", 0);
    fila.adicionar_processo("Proc2", 1);
    fila.adicionar_processo("Proc3", 2);
    fila.adicionar_processo("Proc4", 0);
    fila.adicionar_processo("Proc5", 1);
    fila.adicionar_processo("Proc6", 2);

    fila.imprimir_fila();
    cout << "----------" << endl;

    maior_prioridade = fila.remover_processo_maior_prioridade();
    maior_prioridade->imprimir_dados();
    delete maior_prioridade;
    cout << "----------" << endl;

    fila.imprimir_fila();
    cout << "----------" << endl;
    
    Processo *processo_id = fila.remover_processo_por_id(1);
    processo_id->imprimir_dados();
    delete processo_id;
    cout << "----------" << endl;

    processo_id = fila.remover_processo_por_id(1);
    if (processo_id == nullptr) {
        cout << "CORRECT" << endl; 
    } else {
        cout << "ERROR"; 
    }
    cout << "----------" << endl;

    fila.imprimir_fila();
    cout << "----------" << endl;
}

#endif