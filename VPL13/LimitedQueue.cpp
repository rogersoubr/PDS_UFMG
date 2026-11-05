#include "LimitedQueue.hpp"
#include <iostream>

//construtor da fila
LimitedQueue::LimitedQueue(int max_size) {
    //verifica se o tamanho eh invalido
    if (max_size <= 0) {
        //
        throw InvalidSizeException();//lancs excecao de tamanho invalido
    }
    this->max_size = max_size;//salva o tamanho maximo na variavel da classe
}

int LimitedQueue::get_max_size() const {
    return this->max_size;
}

//insere um elemento no fim
void LimitedQueue::push_back(int k) {
    //verifica se a lista ja chegou no limite
    if (this->queue.size() >= this->max_size) {
        //chegou, lanca excecao de fila cheia
        throw QueueFullException();
    }
    //adiciona o elemento no final da lista
    this->queue.push_back(k);
}

//retira o primeiro elemento
void LimitedQueue::pop_front() {
    //verifica se a fila ta vazia
    if (this->queue.empty()) {
        //se sim lanca excecao de fila vazia
        throw QueueEmptyException();
    }
    //remove o primeiro elemento
    this->queue.pop_front();
}

//pegar o primeiro elemento
int LimitedQueue::front() {
    //verifica se ta vazia antes de pegar
    if (this->queue.empty()) {
        //lanca erro se estiver vazia
        throw QueueEmptyException();
    }
    
    return this->queue.front();//retorna o elemento da frente
}

//pega o ultimo elemento
int LimitedQueue::back() {
    //verifica se ta vazia
    if (this->queue.empty()) {
        //lanca erro
        throw QueueEmptyException();
    }
    
    return this->queue.back();//retorna o de tras
}

//acha a posicao de um elemento
int LimitedQueue::find(int k) {
    //se estiver vazia nao tem como procurar
    if (this->queue.empty()) {
        throw QueueEmptyException();//erro de vazia
    }

    int pos = 0;//comeca a contar a posicao do zero

    //olhando cada elemento na da fila
    for (auto it = this->queue.begin(); it != this->queue.end(); ++it) {
        
        if (*it == k) {//se o elemento for o correto
            //devolve a posicao dele
            return pos;
        }
        
        pos++;//vai para a proxima posicao
    }
    //se nao achou de jeito nenhum da erro de nao encontrado
    throw ItemNotFoundException();
}

void LimitedQueue::print() {
    //se estiver vazia reclamamos

    if (this->queue.empty()) {
        //excecao vazia
        throw QueueEmptyException();
    }

//passa por todos os elementos
    for (auto it = this->queue.begin(); it != this->queue.end(); ++it) {
        //primindo o elemento
        std::cout << *it << std::endl;
    }

}
