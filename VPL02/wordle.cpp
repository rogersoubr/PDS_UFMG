#include <iostream>
#include <fstream>
#include <sstream>

using namespace std; //esse danado que faz nao precisar usar std::

int main(){
    string linha;
    string chave[41];
    int escolhida;
    ifstream in("palavras.txt", fstream::in);
    if(!in.is_open()){
        return 1;
    }
    cout << "Digite o número da palavra: ";
    cin >> escolhida;
    for(int i = 0; i<= escolhida; i++){
        getline(in, chave[i]);
    }

    for(int i = 1; i<= escolhida; i++){
        cout << chave[i] << endl;//nao usei getline aqui porque get pega
    }
    cout << linha << endl;

    in.close();

    return 0;
}