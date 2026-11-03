#ifndef CURSO_HPP
#define CURSO_HPP
#include <string>

class Curso{
    private:
        std::string _nome;
    public:
        Curso(std::string nome);
        std::string getNome() const;
};

#endif