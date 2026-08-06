#include "List.hpp"

void List::insertNo(int valor) {
    No* aux = new No;
    aux->valor = valor;
    aux->proximo = nullptr;
    
    if (cabeca == nullptr) {
        cabeca = aux;
        calda = aux;
    } else {
        calda->proximo = aux;
        calda = aux;
    }
}


void List::removeNo(int valor) {
    No *no_atual = cabeca;
    No *no_antigo = nullptr;
    while (no_atual != nullptr) {

        if (no_atual->valor == valor) {
            //------------------ O NÓ ESTÁ NO INÍCIO DA LISTA
            if (no_antigo == nullptr) { //o nó procurado é a cabeca, não chegou a ir para o fator do loop
                cabeca = no_atual->proximo;//a cabeça passa para o próximo nó

                if (no_atual == calda) calda = nullptr;//se foi o último, tem que deixar como nulo para não bugar

            //------------------ O NÓ ESTÁ NO FINAL DA LISTA
            } else if (no_atual->proximo == nullptr){ //calda
                no_antigo->proximo = nullptr;//nula o local de var do último
                calda = no_antigo;//coloca o nó de trás da lista como seu nó final  

            //------------------ O NÓ ESTÁ NO MEIO DA LISTA
            } else {
                no_antigo->proximo = no_atual->proximo;
            }
            delete no_atual;//aqui desaloca a memória
            return;
        }

        no_antigo = no_atual;
        no_atual = no_atual->proximo;
    }
}

void List::display() {
    No *aux = cabeca;
    while (aux != nullptr) {
        cout << aux->valor << "\t";
        aux = aux->proximo;
    }
    cout << endl;
}