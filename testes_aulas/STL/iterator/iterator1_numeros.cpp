#include <iostream>
#include <vector>

int main(){
    std::vector<int> dados = {100,200,300};

    //funcionam como ponteiro
    std::vector<int>::iterator it;//declarando iterador

    std::cout<<"PERCORRENDO INTERATOR:"<<std::endl;
    for(it = dados.begin(); it != dados.end(); it++){
        std::cout << *it << "\t";//desreferenciação, vai mostrar o valor 
    }

    for (auto it = dados.begin(); it != dados.end(); ++it) {
        std::cout <<"\n\nSem saber o tipo do container:\n"<< *it << "\t";
    }

    return 0;
}