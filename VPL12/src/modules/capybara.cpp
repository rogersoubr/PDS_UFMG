//Roger Souza Brandao - 2025108154
#include "include/capybara.hpp"
#include "include/grid.hpp"

Capybara::Capybara(int x, int y) : Organism(x, y) {}

char Capybara::symbol() const {
    return 'c';//comida
}

bool Capybara::isPreyFor(const Organism* predator) const {
    if (predator != nullptr && predator->symbol() == 'o') {//checa se nao eh um ponteiro nulo e se o simbolo do predador eh a onca
        return true;
    }
    return false;
}

void Capybara::move(Grid& grid) {
    if (hasMoved()) return;//consulta

    setMoved(true);//
    tryMoveToEmpty(grid);
}