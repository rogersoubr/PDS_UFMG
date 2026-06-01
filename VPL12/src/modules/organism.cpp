//Roger Souza Brandao - 2025108154
#include "include/organism.hpp"
#include "include/grid.hpp"

Organism::Organism(int x, int y) : x(x), y(y), moved(false) {};

Organism::~Organism() {};

bool Organism::tryMoveToEmpty(Grid& grid) {
    //vetor das direcoes cima→direita→baixo→esquerda
    int dx[] = {-1, 0, 1, 0};
    int dy[] = {0, 1, 0, -1};

    for (int i = 0; i < 4; i++) {
        int novox = x + dx[i];
        int novoy = y + dy[i];

        if (grid.isEmpty(novox, novoy)) {
            //limpa a posicao velha da grade, muda as variáveis de posicao interna do bicho e entao bota ele na posicao nova da grade
            grid.clear(x, y);
            setPosition(novox, novoy);
            grid.set(this);
            return true;
        }
    }
    return false;
}

bool Organism::tryPredation(Grid& grid) {
    //o organismo comum nao pega ninguem, so o jaguar
    return false;//padrao
}

bool Organism::isPreyFor(const Organism* predator) const {
    return false;
}

void Organism::setMoved(bool m) {
    moved = m;
}

bool Organism::hasMoved() const {
    return moved;
}

int Organism::getX() const {
    return x;
}

int Organism::getY() const {
    return y;
}

void Organism::setPosition(int nx, int ny) {
    x = nx;
    y = ny;
}