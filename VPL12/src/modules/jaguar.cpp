//Roger Souza Brandao - 2025108154
#include "Jaguar.h"
#include "Grid.h"

Jaguar::Jaguar(int x, int y) : Organism(x, y) {};

char Jaguar::symbol() const {
    return 'o';
};
//mesma coisa de organism
bool Jaguar::tryPredation(Grid& grid) {
    //cima→direita→baixo→esquerda prioridade
    int dx[] = {-1, 0, 1, 0};
    int dy[] = {0, 1, 0, -1};

    for (int i = 0; i < 4; i++) {
        int novox = x + dx[i];
        int novoy = y + dy[i];

        if (grid.inBounds(novox, novoy)) {
            Organism* org = grid.get(novox, novoy);
            // e tiver alguem na celula e ele for uma presa para mim
            if (org != nullptr && org->isPreyFor(this)) {//remove deleta o bicho da memoria. clear deixa o quadrado velho da onca vazio e set coloca a onca no novo lugar e diz que comeu
                grid.remove(novox, novoy);
                grid.clear(x, y);
                setPosition(novox, novoy);
                grid.set(this);
                return true;
            }
        }
    }
    return false;
}

void Jaguar::move(Grid& grid) {
    if (hasMoved()) return;

    setMoved(true);
    
    //tenta comer e ja anda. se nao conseguir, tenta andar para espaco vazio
    if (!tryPredation(grid)) {
        tryMoveToEmpty(grid);
    }
}