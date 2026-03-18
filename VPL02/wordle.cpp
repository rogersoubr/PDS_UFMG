//jogo wordle - Roger Souza Brandão 2025108154
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std; //esse danado que faz nao precisar usar std::

int main(){
    string linha;
    string chave[41];//agora tu podes criar array de string pae
    string jogada;
    string resp; //para ir incrementando com a resposta do jogo espaco(MAIUSCULO)
    int tentativa=0;
    int escolhida;
    ifstream arqv("palavras.txt", fstream::in);
    if(!arqv.is_open()){
        return 1;
    }
    cout << "Digite o numero da palavra [1,40]: ";
    cin >> escolhida;
    for(int i = 0; i<= escolhida; i++){
        getline(arqv, chave[i]);
    }

    while(tentativa <= 5){
        cout << "Chute uma palavra maiuscula: ";
        cin >> jogada;

        if(jogada != chave[escolhida]){
            for(int i = 0; i <= 5; i++){
                
                for(int j = 0; j <= 5; j++){
                    //if para cout nas letra na mesma posição
                    if(jogada[i] == chave[escolhida][j] && j == i){//mesmo sendo string consigo pegar o lugar da letra
                        cout << jogada[j];
                        break;
                    }else if(jogada[i] == chave[escolhida][j]){
                        cout << (char)((int)jogada[i] + 32);
                        break;
                    }
                    else{
                        //aqui coloco o *, mais tranquilo
                        cout << "*";
                        break;
                    }
                }
            }
            /*
            
            //faço um outro if para verifiar se a letra EM VISAO do i existe e imprimir entre espaco(MAIUSCULO)
            for(int k = 0; k <= 5; k++){
                for(int l = 0; l <= 5; l++){
                    if(jogada[k] != chave[escolhida][l]){
                                    
                    }
                }
            }
            */

        tentativa++;        
        }
        
        else{
            cout << "GANHOU!";
        }
        
    }
    cout << "PERDEU! " << chave[escolhida];

    /*
    cout << (int)jogada[0] << endl;
    cout << ((int)jogada[0] + 32) << endl;
    cout << (char)((int)jogada[0] + 32) << endl;
    cout << chave[escolhida][0] << endl;
    */





    arqv.close();

    return 0;
}