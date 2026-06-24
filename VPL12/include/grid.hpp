//Roger Souza Brandao - 2025108154
#ifndef GRID_H
#define GRID_H

#include <vector>//lib dos array auto
#include <ostream>
#include "include/organism.hpp"

class Grid {
private:
    int rows, cols;
    std::vector<std::vector<Organism*>> cells;//matriz, ele vai dar o array bidimencional, vector de vector

public:
    Grid(int r, int c); //constr
    ~Grid(); //destrutor
    
    bool inBounds(int x, int y) const; //retorna true se a posicao esta dentro dos limites da grade
    bool isEmpty(int x, int y) const; //retorna true se a posicao esta dentro dos limites e nao contem organismo

    Organism* get(int x, int y) const; //retorna o ponteiro do organismo na posicao, ou nullptr
    void set(int x, int y, Organism* o); //atribui um ponteiro a celula sem deletar o conteúdo anterior
    void set(Organism* o); //sobrecarga que usa getX()/getY() do próprio organismo para determinar a celula destino
    void clear(int x, int y); //limpa a celula sem deletar o organismo; usado quando um organismo se move para fora da celula

    void remove(int x, int y); //deleta o organismo e limpa a celula; usado exclusivamente em casos de morte por predacao

    int getRows() const;
    int getCols() const;

    void resetMoved(); //reseta a flag moved de todos os organismos; chamado no início de cada turno
    friend std::ostream& operator<<(std::ostream& os, const Grid& g); //imprime o estado atual da grade linha por linha, substituindo um metodo print()
};

#endif