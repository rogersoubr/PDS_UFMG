#ifndef ALUNE_HPP
#define ALUNE_HPP
#include "Pessoa.hpp"

class Alune: public Pessoa{
    private:
        int _matricula;
    public:
        Alune(std::string nome, int matricula);
        void exibir() const;
};

#endif