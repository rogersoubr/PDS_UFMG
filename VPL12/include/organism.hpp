//Roger Souza Brandao - 2025108154
#ifndef ORGANISM_H
#define ORGANISM_H

class Grid;

class Organism {
    protected:
        int x, y;
        bool moved;

    public:
        //levar em consideracao que o padrao dos metodos é false
        Organism(int x, int y);
        virtual ~Organism();

        virtual char symbol() const = 0; //organismo 'C' ou grid'O'
        virtual void move(Grid& grid) = 0; //comportamento do organismo no turno
        bool tryMoveToEmpty(Grid& grid); //movimanta e atualiza o grid cima→direita→baixo→esquerda

        virtual bool tryPredation(Grid& grid); //predacao da celula, predador vai sobrescrever
        virtual bool isPreyFor(const Organism* predator) const; //eh presa do predador

        void setMoved(bool m); //
        bool hasMoved() const;

        int getX() const;
        int getY() const;
        void setPosition(int nx, int ny);

};

#endif