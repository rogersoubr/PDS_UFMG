#include <iostream>
using namespace std;
int b = 9;
//espera um ponterio duplo que forneci lá em cima
void muda_ponteiro_duplo(int** pp){
    *pp = &b; //a referencia de pp (que é o valor da variável ponteiro), é trocada para o valor da variável b
} 

int main(){
    int* ponteiro = nullptr;
    int** duplo_ponteiro = nullptr;
    int a = 4;

    cout<<"Nulo: "<< ponteiro<<endl; //qualquer coisa, porque eu não tornei nulo
    cout<<"Nulo: "<<  duplo_ponteiro<<endl; //qualquer coisa, porque eu não tornei nulo

    ponteiro = &a; //recebe o local de a
    cout<<"Valor de ponterio: "<<ponteiro<<endl; //agora vale o local de a
    cout<<"Referencia de ponteiro: "<<*ponteiro<<endl; //valor de a 

    duplo_ponteiro = &ponteiro; //agora eu tenho um ponteiro que aponta para o ponteiro (só funciona assim)
    cout<<"Vador de duplo_ponteiro: "<<duplo_ponteiro<<endl; //vai mostrar o local (ram) da variável ponteiro
    cout<<"Referencia de duplo_ponteiro: "<<*duplo_ponteiro<<endl; //vai mostrar o local de a (porque esse é o valor da variável ponterio)

    muda_ponteiro_duplo(duplo_ponteiro); //passando para baixo o local da variável do ponteiro_duplo
    /*
    PODE COLOCAR COMO: muda_ponteiro_duplo(&ponteiro);
    */
   
    cout<<"RAM de b: "<<**duplo_ponteiro<<endl;//imprime o local de b
    cout<<"Referencia de ponteiro: "<<*ponteiro<<endl;//imprime 9
    cout<<"Valor de a: "<<a<<endl;//imprime 9

    return 0;
}

