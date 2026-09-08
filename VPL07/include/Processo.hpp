//rogersoubr - 2025108154
#ifndef PROCESSO_H
#define PROCESSO_H
#include <iostream>
#include <string>

class Processo{
public:
    int _id; 
    int _prioridade; 
    std::string _nome;
    Processo(int id, std::string nome, int prioridade);//Método construtor para a inicialização dos atributos. A prioridade poderá ser BAIXA (0), MÉDIA (1) ou ALTA (2)

    double tempo_reservado_processo(); //Método que retorna o tempo reservado para execução do processo de acordo com a prioridade. Prioridade: BAIXA (0.5), MÉDIA (1.5), ALTA (3.0).

    void imprimir_dados(); //Método que faz a impressão dos atributos do processo no seguinte formato: "id nome prioridade", com uma quebra de linha ao final. Atenção, nesse caso utilize tab (\t) para separar os elementos. Além disso, substitua o código da prioridade por: BAIXA, MEDIA ou ALTA.

    int getID();
    int getPrioridade();
    std::string getNome();
};

#endif

