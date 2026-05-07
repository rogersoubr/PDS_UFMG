//Roger Souza Brandão - 2025108154
//contrato,especificação
#ifndef PESSOA_H
#define PESSOA_H //cria a macro pessoa

#include <iostream>
#include <cmath>

struct Pessoa{
    double x, y;//atriburos

    Pessoa(double x, double y);

    double getY();//metodos de retorno
    double getX();//metodos de retorno
    void mover(double dx, double dy);
};


#endif