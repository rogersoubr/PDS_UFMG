//Roger Souza Brandão - 2025108154
//contrato  
#include "Pessoa.hpp"//um carro tem uma pessoa
#ifndef CARRO_H
#define CARRO_H

#include <cmath>
#include <iostream>

struct Carro{
    double x, y, th; //atributos

    //construtor
    Carro (double x, double y, double th);

    //metodos
    double getX();
    double getY();
    double getTH();

    void girar(double w, double t);
    void mover(double v, double t);
    double calcular_angulo_pessoa(Pessoa* pessoa);
    double calcular_distancia_pessoa(Pessoa* pessoa);
    bool movimentacao_permitida(Pessoa** pessoas, int n);
    void navegar(Pessoa** pessoas, int n, double w, double v, double t);

};

#endif