//Escreva uma função que insira um novo nó no início da lista (inserção na cabeça) e outra função que libere toda a memória alocada percorrendo a lista.
#include <iostream>
using namespace std;
struct Node { 
    int valor; 
    Node* prox; 
};

Node inserir_inicio(Node** vira_seguinte, int valor){
    Node* novo_no = new Node;
    if (novo_no){   
        novo_no->valor = valor;
        novo_no->prox = *vira_seguinte;
    }else{
        cout<<"erro ao locar memória"<<endl;
    }
}

void libera_memoria(Node x){

}

int main(){
    Node* lista_completa = new Node;
    inserir_inicio(&lista_completa, 5);

    return 0;
}

