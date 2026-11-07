#include <iostream>
#include <vector>

int main(){
    std::vector<int> numeros = {10,20,30};//criando um vector de inteiros, 4 de tamanho. com esses numeros

    numeros.push_back(40);
    numeros.push_back(50);

    std::cout << "Primeiro elemento: " << numeros.front() << std::endl;
    std::cout<<"tamanho elemento: "<<numeros.size()<<std::endl;

    return 0;
}