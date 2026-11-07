#ifndef ESTUDANTE_HPP
#define ESTUDANTE_HPP
#include "Curso.hpp"

class Estudante{
    private:
        Curso _curso;
    public:
        Estudante(std::string nomeCurso);
        void exibir() const;

};

#endif