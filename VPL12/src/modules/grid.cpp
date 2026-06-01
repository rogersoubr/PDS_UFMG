//Roger Souza Brandao - 2025108154
#include <iostream>
#include <vector>
#include "include/grid.hpp"
//cells tem r lilhas
//toda linha tem um vector de tamanho c nulo
Grid::Grid(int r, int c): rows(r), cols(c), cells(r, std::vector<Organism*>(c, nullptr)){};//vector nulo, posicao vazia
         
Grid::~Grid() {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (cells[i][j] != nullptr) {
                delete cells[i][j]; //libera a memoria de todo mundo pra nao ter vazamento
                cells[i][j] = nullptr;
            }
        }
    }
}

bool Grid::inBounds(int x, int y) const {
    return (x >= 0 && x < rows && y >= 0 && y < cols);
}

bool Grid::isEmpty(int x, int y) const {
    //se estiver dentro do grid e nao tiver nenhum bicho la, ta vazio
    return (inBounds(x, y) && cells[x][y] == nullptr);
}

Organism* Grid::get(int x, int y) const {
    if (inBounds(x, y)) {
        return cells[x][y];
    }
    return nullptr;
}

void Grid::set(int x, int y, Organism* o) {
    if (inBounds(x, y)) {
        cells[x][y] = o;
    }
}

void Grid::set(Organism* o) {
    if (o != nullptr) {
        set(o->getX(), o->getY(), o);
    }
}

void Grid::clear(int x, int y) {
    //so tira o ponteiro mas nao deleta da memoria
    if (inBounds(x, y)) {
        cells[x][y] = nullptr;
    }
}

void Grid::remove(int x, int y) {
    //morreu, precisa apagar de verdade usando delete
    if (inBounds(x, y) && cells[x][y] != nullptr) {
        delete cells[x][y];
        cells[x][y] = nullptr;
    }
}

void Grid::resetMoved() {
    //comeca o turno novo liberando todos para movere de novo
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (cells[i][j] != nullptr) {
                cells[i][j]->setMoved(false);
            }
        }
    }
}

std::ostream& operator<<(std::ostream& os, const Grid& g) {
    for (int i = 0; i < g.rows; i++) {
        for (int j = 0; j < g.cols; j++) {
            if (g.cells[i][j] == nullptr) {
                os << '.';
            } else {
                os << g.cells[i][j]->symbol();
            }
        }
        os << '\n';
    }
    return os;
}

int Grid::getRows() const {
    return rows;
}

int Grid::getCols() const {
    return cols;
}