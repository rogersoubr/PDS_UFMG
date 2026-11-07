#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

class Produto{
    public:
        std::string _nome;
        double _preco;
        bool _emPromocao;
};

int main(){
    std::vector<Produto> estoque = {
        {"Notebook", 3500.0, false}, {"Mouse", 150.0, false}, {"Teclado", 250.0, false}
    };

    std::for_each(estoque.begin(), estoque.end(), [](Produto &p){
        if(p._preco > 200){
            p._preco *= 0.9;
            p._emPromocao = true;
        }
    });

    for(const auto &prod: estoque){
        std::cout<<"Produto: "<< prod._nome<<"\tPreco: "<<prod._preco<<(prod._emPromocao ? " [BLACKFRAUDE] " : " [PASTEL DE FLANGO] ")<<std::endl;
    }

    return 0;
}