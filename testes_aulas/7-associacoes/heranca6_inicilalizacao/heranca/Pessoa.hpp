#ifndef PESSO_HPP
#define PESSOA_HPP
#include <string>

class Pessoa{
    private:
        std::string _nome;
    public:
        Pessoa(std::string nome);
        std:: string getNome() const;
};

#endif