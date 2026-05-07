//Roger Souza Brandão - 2025108154
//contrato  
#include "Pessoa.hpp"
#ifndef CARRO_H
#define CARRO_H
struct Carro{
    double x, y, th;

    Carro(double x, double y, double th);
    
    double getX();/*retornam valores do construtor e armazenados*/
    double getY();/*retornam valores do construtor e armazenados*/
    double getTH();/*retornam valores do construtor e armazenados*/

    void girar(double w, double t); //atualiza orientacao. w=valocidade angular t=tempo da velocidade

    void mover(double v, double t);//atualiza a posicao. v=metros por segundo t=tempo da velocidade

    double calcular_angulo_pessoa(Pessoa* pessoa);//calcula angulo de uma pessoa em relacao ao carro

    double calcular_distancia_pessoa(Pessoa* pessoa);//calcula e retorna a distancia euclidiana ate a pessoa

    bool movimentacao_permitida(Pessoa** pessoas, int n);//recebe um *array de poessoas e quantidade. Verifica se pode ou não se mover se tiver pessoa
    
    void navegar(Pessoa** pessoas, int n, double w, double v, double t);//faz o trajeto. 1.verifica pessoa 2.faz um giro 3.movese para frente

};

#endif