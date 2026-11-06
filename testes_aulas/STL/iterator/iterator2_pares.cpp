#include <iostream>
#include <vector>

int main(){
    std::vector<int> valores ={1,2,3,4,5,6,7,8,9,10};

    std::cout << "Removendo neumeros impares..." << std::endl;
    for (auto it = valores.begin(); it != valores.end(); it++){
        if(*it %2 != 0){
            it = valores.erase(it);//deleta o que é impares
        }else{
            ++it;
        }
    }

    std::cout<<"Vector Resultante: ";
    for(auto it = valores.cbegin(); it != valores.cend(); it++){
        std::cout<<*it<<"\t";
    }
    

    return 0;
}