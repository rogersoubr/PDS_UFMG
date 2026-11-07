#include <iostream>
#include <string>
#include <stdexcept>

int main(){
    std::string texto = "Roger Souza Brandao";

    try{
        char c = texto.at(50);
        std::cout<<"cartere: "<<c<<std::endl;//vai ter que dar erro
    }
    catch(const std::out_of_range& e){
        std::cerr<<"Exeção capturada: "<<e.what()<<std::endl;
    }

    return 0;
}