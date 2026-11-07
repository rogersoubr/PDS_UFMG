#include <iostream>
using namespace std;

struct No{
    int valor;
    No* proximo;
};

void insere_inicio(No** lista, int num){
    //tem que colocar que recebe um ponteiro para ponteiro, porque o proximo é um ponteiro
    No* novo = new No;
    if(novo){
        novo -> valor = num;//essa seta é como se colocasse um *ponteiro.variavel
        novo -> proximo = *lista;//*novo.proximo
        *lista = novo;
    }
    else cout << "Erro ao alocar memoria";
};

void imprime_lista(No* lista){
    No* atual = lista;

    if(atual){

        while(atual != nullptr){
            cout << atual->valor << " | ";
            atual = atual ->proximo;
        }
    cout << endl;

    }else{
        cout << "Erro ao criar lista\n";
    }
}

int main(){

    No* minha_lista = nullptr;

    insere_inicio(&minha_lista, 1);
    insere_inicio(&minha_lista, 100);
    insere_inicio(&minha_lista, 548);
    cout << "Lista: ";
    imprime_lista(minha_lista);

    return 0;
}