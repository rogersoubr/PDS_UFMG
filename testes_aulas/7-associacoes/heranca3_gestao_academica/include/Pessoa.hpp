#include <string>
#include <iostream>
using namespace std;

class Pessoa {
    private:
        string _nome;
        int _cpf;
    public:
        Pessoa(string nome, int cpf) : _nome(nome), _cpf(cpf) { };
        string getNome() { return this->_nome; };
        int getCPF() { return this->_cpf; };
        virtual void meuNome() = 0;
};