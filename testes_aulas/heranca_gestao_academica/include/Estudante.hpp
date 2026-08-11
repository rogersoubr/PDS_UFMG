#include <string>
#include <iostream>
using namespace std;
#include "../include/Pessoa.hpp"
#include "../include/Curso.hpp"

class Estudante : public Pessoa {
    private:
        int _matricula;
        Curso* _curso;
    public:
        Estudante(string nome, int cpf, int matricula, Curso* curso) :Pessoa(nome, cpf), _matricula(matricula), _curso(curso) { }void meuNome() override {
        cout << "ESTUDANTE: " << getNome() << endl;
        }
        void meuCurso() {
        cout << "ESTUDANTE->Curso: " << _curso->getNome() << endl;}
};