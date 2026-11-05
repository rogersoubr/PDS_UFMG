#ifndef LIMITEDQUEUE_H
#define LIMITEDQUEUE_H

#include <list>
#include "Exceptions.hpp"

//Fila de numeros inteiros de tamanho limitado
class LimitedQueue {
private:
//lista que vai guardar os itens
    std::list<int> queue;
    int max_size;//tamanho maximo da fila
public:
    // Lanca a excecao InvalidSizeException se max_size <= 0.
    LimitedQueue(int max_size);

    // Retorna o tamanho maximo da fila informado no construtor.
    int get_max_size() const;

    // Insere um elemento no final da fila.
    // Lanca a excecao QueueFullException se a fila estiver cheia.
    void push_back(int k);

    // Retira o elemento do inicio da fila.
    // Lanca a excecao QueueEmptyException se a fila estiver vazia.
    void pop_front();

    // Retorna (sem retirar) o primeiro elemento (inicio da fila).
    // Lanca uma excecao QueueEmptyException se a fila estiver vazia.
    int front();

    // Retorna (sem retirar) o ultimo elemento (final da fila).
    // Lanca a excecao QueueEmptyException se a fila estiver vazia.
    int back();

    // Verifica se um elemento esta na fila e retorna a posicao dele (comecando de 0).
    // Lanca a excecao QueueEmptyException se a fila estiver vazia.
    // Lanca a excecao ItemNotFoundException se o elemento nao estiver na fila.
    int find(int k);

    // Imprime todos os elementos da fila em ordem, sendo um por linha.
    // Lanca a excecao QueueEmptyException se a fila estiver vazia.
    void print();
};

#endif
