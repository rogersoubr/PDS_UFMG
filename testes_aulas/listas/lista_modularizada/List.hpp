#ifndef LIST_H
#define LIST_H
#include <iostream>
using namespace std;

struct No {
    int valor;
    No* proximo;
};

struct List {
    No* cabeca = nullptr;
    No* calda = nullptr;
    void insertNo(int valor);
    void removeNo(int valor);
    void display();
};
#endif