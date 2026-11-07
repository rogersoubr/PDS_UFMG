#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

void inserir_inicio(Node** lista, int valor){
    Node* current = new Node;
    if(current){
        current->data = valor;
        current->next = *lista;
        *lista = current;
    }else{
        cout<<"Erro ao alocar nó";
    }
}


void desaloca(Node** lista){
    Node* current =  *lista;
    while (current!= nullptr){
        Node* next= current->next;
        delete current;
        current = next;
    }
    *lista = nullptr;
    
}


int main(){
    Node* lista = new Node;
    inserir_inicio(&lista, 1);
    inserir_inicio(&lista, 2);
    inserir_inicio(&lista, 3);
    cout<<"\nref de no1: "<< lista->next <<endl;
    desaloca(&lista);
    cout<<"\nref de no1: "<< lista <<endl;
}