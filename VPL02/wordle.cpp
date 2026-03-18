//jogo wordle - Roger Souza Brandão 2025108154
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std; //esse danado que faz nao precisar usar std::

int main(){
    string linha;
    string chave[41];//agora tu podes criar array de string pae
    string jogada;
    string nao_tem = ""; //para ir incrementando com a resposta do jogo espaco(MAIUSCULO)
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
    arqv.close();

    while(tentativa <= 5){
        cout << "Chute uma palavra maiuscula: ";
        cin >> jogada;

        string result = "";//INCREMENTAL DE m***M

        if(jogada != chave[escolhida]){
            for(int i = 0; i <= 5; i++){
                bool letra_encontrada = false;

                for(int j = 0; j <= 5; j++){
                    //if para cout nas letra na mesma posição
                    if(jogada[i] == chave[escolhida][j] && j == i){//mesmo sendo string consigo pegar o lugar da letra
                        letra_encontrada = true;
                        if (j == i){
                            result += jogada[i]; //tem e posicao correta M
                        }else{
                            result += (char)((int)jogada[i] + 32);
                        }
                        break;
                    }
                }
                //ponto de vista i
                if(letra_encontrada == false){
                    result += '*';//padrao
                    bool ja_tem = false;
                    for (char c : nao_tem) {
                        if (c == jogada[i]) {
                            ja_tem = true;
                            break;
                        }
                    }
                    if (!ja_tem) {
                        nao_tem += jogada[i];
                    }
                }
            }
        cout << result << " (" << nao_tem << ")" << endl;
        tentativa++;        
        } else{
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

    return 0;
}