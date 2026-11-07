#include <iostream>
#include <vector>

int main(){
    std::vector<int> anos = {1975, 2000, 2006};

    std::cout<<"\tCom 'auto' (pega tipo do container): "<<std::endl;
    for(auto ano : anos){
        std::cout<<"Ano que nasceu: " << ano<<std::endl;
    }

    std::cout<<"\tCom 'size_t' (int que cresce sozinho, nao fica negativo): "<<std::endl;
    for(size_t ano : anos){
        std::cout<<"Ano que nasceu: " << ano<<std::endl;
    }

    std::cout<<"\tCom 'int' (igual for normal): "<<std::endl;
    for(int ano : anos){
        std::cout<<"Ano que nasceu: " << ano<<std::endl;
    }

    return 0;
}