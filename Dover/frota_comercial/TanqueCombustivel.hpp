#include <string>
#include <iostream>

class TanqueCombustivel {
    private:
        double _capacidadeMaxima;
        double _nivelAtual;
    public: 
        TanqueCombustivel(double capacidadeMaxima, double nivelAtual);
        void abastecer(double litros);
        void gastar(double litros);
};