#include <iostream>
using namespace std;
int main(){
    int A = 100;
    int* B=&A;//sempre que declarar ponteiro, vou volocar no lado do tipo
    int** C = &B; //nesse exemplo, só poderia receber o B
    cout<<"\033[1m Usando o B:\033[0m \n";
    cout<<"RAM de A: " << B <<" | Valor de A: "<< *B << " | RAM de B: "<< &B <<"\n \n";
    cout<<"\033[1m Usando o C:\033[0m \n";
    cout<<"RAM de B: "<< C <<" | RAM de A (primeira referencia de C): "<< *C <<" | Valor de B (segunda referencia de C): "<< **C <<"\n";
    //a primeira referência de C se comporta como ponteiro comúm, e pega o valor
    //A segunda referência de C vai no valor da primeira referência, QUE É UM PONTERO e busca o valor dela.

    return 0;
}