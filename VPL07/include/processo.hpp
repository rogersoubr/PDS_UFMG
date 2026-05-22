#include <iostream>
#include <string>

using namespace std;

class Processo{       // The class
  public:  
    int _id;
    int _prioridade; 
    std::string _nome; 

    void getID(); 
    void getPrioridade(); 
    void getNome();
    double tempo_reservado_processo();
    void imprimir_dados();
};