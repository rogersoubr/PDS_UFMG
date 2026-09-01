//rogersoubr 2025108154

#ifndef ROBOD_H
#define ROBO2D_H
#include "../include/Ponto2D.hpp"

using namespace std;

struct Robo{
    int id;
    Ponto2D ponto_plano;
    double _energia = 100;//Após o deslocamento, a distância percorrida deve ser deduzida do atributo '_energia', decomposição vetorial e cinemática?
    bool _com_bola;

    Robo(int id, Ponto2D ponto_plano, bool _com_bola);//id, plano, combola

    void mover(double v, double th, double t);//v (magnitude do vetor velocidade), th (orientação, em radianos, do vetor velocidade, t (o tempo que a velocidade foi aplicada)

    double calcular_distancia(Robo* robo);//etorna a distância euclidiana para outro robo passado. usar ponto2D

    Robo* determinar_robo_mais_proximo(Robo** naves, int n);//array de ponteiros para robos (ou seja, o time), quantidade de robos no array | determinar qual o robô mais próximo do robô que invocou o método e retornar um ponteiro para ele
    
    void passar_bola(Robo** time, int n);//recebe um array de ponteiros para robos (ou seja, o time), quantidade de elementos no arary | modificar os valores do atributo '_com_bola' e imprimir: "Estou sem a bola!" usar   \n

    void imprimir_status();//'id x y com_bola energia' usar \t

};

#endif