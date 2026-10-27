#include <string>
#include <iostream>
using namespace std;

class Departamento {
    private:
        string _nome;
        int _codigo;
    public:
        Departamento(string nome, int codigo) : _nome(nome), _codigo(codigo) { };
        string getNome() { return this->_nome; };
        int getCodigo() { return this->_codigo; };
};