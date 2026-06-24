//jogo wordle - Roger Souza Brandão 2025108154
#include <iostream>
#include <fstream>
#include <string>

using namespace std; //esse danado que faz nao precisar usar std::

int main(){
    string linha;
    string chave[42];//agora tu podes criar array de string pae
    string jogada;
    string nao_tem = ""; //para ir incrementando com a resposta do jogo espaco(MAIUSCULO)
    int tentativa = 0;
    int escolhida;
    int n; //numero de palavras no arquivo
    int tamanho_nao_tem = 0; //controlar o tamanho da string nao_tem sem usar length()
    
    ifstream arqv("palavras.txt", fstream::in);
    if(!arqv.is_open()){
        return 1;
    }
    
    // Ler o numero de palavras (primeira linha)
    arqv >> n;
    arqv.ignore(); //ignorar o \n apos o numero
    
    // Ler as palavras (da linha 1 ate a linha n)
    for(int i = 1; i <= n; i++){
        getline(arqv, chave[i]);
    }
    arqv.close();

    // Ler o numero da palavra escolhida
    cin >> escolhida;

    // Loop do jogo (maximo 5 tentativas)
    while(tentativa < 5){
        cin >> jogada;

        string result = "";//INCREMENTAL DE m***M

        // Verificar se acertou
        if(jogada == chave[escolhida]){
            // Imprimir a palavra acertada
            cout << jogada << " (";
            
            // Imprimir letras ausentes acumuladas
            for(int k = 0; k < tamanho_nao_tem; k++){
                cout << nao_tem[k];
            }
            cout << ")" << endl;
            
            cout << "GANHOU!" << endl;
            return 0;
        }
        
        // Analisar cada letra da jogada
        for(int i = 0; i < 5; i++){ //5 letras, indices 0 a 4
            bool letra_encontrada = false;

            // Verificar se a letra existe na chave
            for(int j = 0; j < 5; j++){ //5 letras, indices 0 a 4
                //if para cout nas letra na mesma posicao
                if(jogada[i] == chave[escolhida][j]){//mesmo sendo string consigo pegar o lugar da letra
                    letra_encontrada = true;
                    if (j == i){
                        result += jogada[i]; //tem e posicao correta MAIUSCULA
                    }else{
                        result += (char)((int)jogada[i] + 32); //tem mas posicao errada minuscula
                    }
                    break;
                }
            }
            
            //ponto de vista i
            if(letra_encontrada == false){
                result += '*'; //nao tem na chave
                
                // Adicionar as letras ausentes (sem repeticao)
                bool ja_tem = false;
                for(int k = 0; k < tamanho_nao_tem; k++){
                    if(nao_tem[k] == jogada[i]){
                        ja_tem = true;
                        break;
                    }
                }
                if (!ja_tem) {
                    nao_tem += jogada[i];
                    tamanho_nao_tem++; //incrementar o contador de tamanho
                }
            }
        }
        
        // Imprimir resultado da jogada
        cout << result << " (";
        for(int k = 0; k < tamanho_nao_tem; k++){
            cout << nao_tem[k];
        }
        cout << ")" << endl;
        
        tentativa++;
    }
    
    // Se chegou aqui, perdeu apos 5 tentativas
    cout << "PERDEU! " << chave[escolhida] << endl;

    return 0;
}