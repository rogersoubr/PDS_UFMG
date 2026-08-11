//Roger Souza Brandao - 2025108154
#ifndef CAPYBARA_H
#define CAPYBARA_H

#include "include/organism.hpp"

class Capybara : public Organism {
public:
    Capybara(int x, int y);

    char symbol() const override; //presa, retorna 'o'
    bool isPreyFor(const Organism* predator) const override;//retorna true se for predador da onca (symbol() == 'O')

    void move(Grid& grid) override; // pega o result de moved e dmanda pra tryMoveToEmpty
};

#endif