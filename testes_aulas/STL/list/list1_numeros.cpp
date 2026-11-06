#include <iostream>
#include <list>

int main(){
    std::list<int> listinha = {10,20,30,40,10};
    
    listinha.push_front(50);
    listinha.push_back(5);

    std::cout << "Lista: "<< std::endl;
    for(const auto l : listinha){
         std::cout << "\t" << l;
    }

    std::cout << "\nPrimeiro elemento: " << listinha.front() << std::endl;
    std::cout << "Ultimo elemento: " << listinha.back() << std::endl;

    listinha.pop_front(); // Remove o 50
    listinha.pop_back(); // Remove o 5

    std::cout << "Depois, novo primeiro elemento: " << listinha.front() << std::endl;
    
    return 0;
}