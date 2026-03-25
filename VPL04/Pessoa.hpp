//Roger Souza Brandão - 2025108154
//contrato  
#ifndef PESSOA_H
#define PESSOA_H

#include <cmath>
#include <iostream>


struct Pessoa{
    double x, y;//atributos

    //metodo construtor
    Pessoa (double x, double y);

    //metodo
    double getY();
    double getX();
    void mover(double dx, double dy);
};
#endif