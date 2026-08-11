#include <iostream>
using namespace std;
int main(){
    int A = 100;
    int* B=&A;//sempre que declarar ponteiro, vou volocar no lado do tipo
    int** C = &B; //nesse exemplo, só poderia receber o B
    cout<<"RAM de A: " << B <<" | Valor de A: "<< *B << " | RAM de B: "<< &B <<"\n---------\n";
    cout<<"RAM de B: "<< C <<" | Valor de B: "<< **C <<"\n";

    return 0;
}