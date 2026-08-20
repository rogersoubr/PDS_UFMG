#include <iostream>

int main(){
    //nao eh bom deixar sem nullptr quando nao sabe valor do ponteiro, inicia como lixo
    int *a = nullptr;//inicia um ponteiro que não sabe
    int b= 10;//todas estão no stack

    a= new int;//coloca a valendo uma área de memória do heap do tipo int -> AQUI VOCE DECIDIU
    *a =20;

    //librando a area de memoria apontada por a
    delete a;// a falta é memory leak

    a = &b;
    *a =30;
    std::cout<<a<<"\n"<<*a;

    return 0;
}