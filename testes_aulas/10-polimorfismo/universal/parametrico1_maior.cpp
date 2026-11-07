#include<iostream>
template <typename T>
T obterMaior(T a, T b){
    return (a>b) ? a : b;
}
int main(){
    std::cout << "Maior int: " << obterMaior<int>(10,20)<<std::endl;//int explicito
    std::cout << "Maior double: " << obterMaior<double>(55.3,2.87)<<std::endl;//double explicito
    return 0;
}