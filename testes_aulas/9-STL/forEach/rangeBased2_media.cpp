//calcular média de velocidade
#include <iostream>
#include <vector>

int main(){
    std::vector<double> velocidades = {100.3, 200.6, 186.5};
    int tamanho =0;
    double soma =0.0;
    //caloca cada elemento do container da direita na variável da esquerda em cada laço.
    for(auto velocidade : velocidades){
        //std::cout<<"Teste: " << velocidade<<std::endl;
        soma += velocidade;
        tamanho++;//lado ruim do foreach. Nao faz a quantidade que passou
        //std::cout<<"Teste_tamanho: " << tamanho<<std::endl;
    }
    std::cout<<"Media " <<soma/tamanho <<std::endl;
    
    return 0;
}