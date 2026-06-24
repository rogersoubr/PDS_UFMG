#include <string>
#include <iostream>
using namespace std;

class Curso {
    private:
        string _nome;
        int _codigo;
    public:
        Curso(string nome, int codigo) : _nome(nome), _codigo(codigo) { };
        string getNome() { return this->_nome; };
        int getCodigo() { return this->_codigo; };
};