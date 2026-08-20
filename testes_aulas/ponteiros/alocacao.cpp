#include <iostream>

int main(){
    //nao eh bom deixar sem nullptr
    int *a, b;//todas estão no stack
    b= 10;
    a= new int;//coloca a valendo uma área de memória do heap

    *a =20; 
    a = &b;
    *a =30;
    std::cout<<a<<"\n"<<*a;

    return 0;
}