//Roger Souza Brandao - 2025108154
#ifndef JAGUAR_H
#define JAGUAR_H

#include "include/organism.hpp"

class Jaguar : public Organism {
public:
    Jaguar(int x, int y);

    char symbol() const override; //predador='o'
    bool tryPredation(Grid& grid) override; //ordem de prioridade. achou organismo isPreyFor(this)=true, dar remove do grid. ocupa a célula com clear + set. atualiza a posição interna e retorna true
    void move(Grid& grid) override; //Verifica moved, tenta tryPredation primeiro. Catch, chama tryMoveToEmpty
};

#endif