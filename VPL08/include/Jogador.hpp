//rogersoubr
#ifndef JOGADOR_H
#define JOGADOR_H
#include <string>

class Jogador{
    private:
        std::string nome;
        char simbolo;
    public:
        Jogador(std::string nome, char simbolo);
        std::string getNome() const;
        char getSimbolo() const;
};
#endif