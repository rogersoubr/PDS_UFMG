//Escreva uma função que insira um novo nó no início da lista (inserção na cabeça) e outra função que libere toda a memória alocada percorrendo a lista.
#include <iostream>
using namespace std;
struct Node { 
    int valor; 
    Node* prox; 
};

void inserir_inicio(Node** lista, int valor){
    Node* novo_no = new Node;
    if (novo_no){   
        novo_no->valor = valor;
        cout<<"Valor da *lista: "<< *lista<<endl;
        novo_no->prox = *lista;
        *lista = novo_no; 
    }else{
        cout<<"erro ao locar memória"<<endl;
    }
}

int main(){
    Node* lista = new Node;
    cout<<"Valor da *lista: "<< lista<<endl;
    inserir_inicio(&lista, 5);

    return 0;
}
