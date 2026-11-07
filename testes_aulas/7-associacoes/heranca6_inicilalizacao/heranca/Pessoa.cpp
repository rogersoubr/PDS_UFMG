#include "Pessoa.hpp"

Pessoa::Pessoa(std::string nome): _nome(nome){}
std::string Pessoa::getNome() const{ 
    return _nome;
}