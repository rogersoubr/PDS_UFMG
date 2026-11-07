#include <string>
#include <iostream>
using namespace std;
#include "../include/Departamento.hpp"
#include "../include/Pessoa.hpp"

class Professor : public Pessoa {
    private:
        Departamento* _departamento;
    public:
        Professor(string nome, int cpf, Departamento* departamento) : Pessoa(nome, cpf), _departamento(departamento) { };
        void meuNome() override {
            cout << "PROFESSOR: " << getNome() << endl;
        }
        void meuDepartamento() {
            cout << "PROFESSOR->Departamento: " << _departamento->getNome() << endl;
        }
};