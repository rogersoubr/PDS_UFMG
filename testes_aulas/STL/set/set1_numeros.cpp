#include <iostream>
#include <set>
int main(){
    std::set<int> conjunto;//já ordena sozinho

    conjunto.insert(15);
    conjunto.insert(10);
    conjunto.insert(5);
    conjunto.insert(0);
    conjunto.insert(15);//duplicado, vai ser ignorado
    std::cout<<"Conjunto = { ";
    for(auto x : conjunto){
        std::cout<<x<<", ";
    }
    std::cout<<"}"<<std::endl;



    return 0;
}