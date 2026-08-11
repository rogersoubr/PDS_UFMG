#include <iostream>
using namespace std;
void imprimir (int num){
    cout<<"na funcao esta: " << num;
    num = 80;

}
int main(){

    int idade = 35;
    imprimir(idade);
    cout<<"no main esta: " << idade;

    return 0;
}