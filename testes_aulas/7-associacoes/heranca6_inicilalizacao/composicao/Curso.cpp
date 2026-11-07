#include "Curso.hpp"

Curso::Curso(std::string nome): _nome(nome){};

std::string Curso::getNome() const{
    return _nome;
}