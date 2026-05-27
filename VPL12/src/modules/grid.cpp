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
