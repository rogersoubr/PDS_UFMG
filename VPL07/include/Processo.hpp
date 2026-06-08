#include <iostream>
#include <string>

using namespace std;

class Processo{       // The class
  private:  
    int _id;
    int _prioridade; 
    std::string _nome; 

    Processo(int id, std::string nome, int prioridade);

    double tempo_reservado_processo();//retorna o tempo reservado para execução do processo de acordo com a prioridade. Prioridade: BAIXA (0.5), MÉDIA (1.5), ALTA (3.0).
    void imprimir_dados();//imprimir no formato 'id nome prioridade'

    int getId();//id comeca com 1
    int getPrioridade(); 
    std::string getNome();

    void setId(int id);//id comeca com 1
    void setPrioridade(int prioridade); 
    void setNome(std::string nome);

};