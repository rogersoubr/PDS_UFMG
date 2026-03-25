#include <iostream>
using namespace std;

// 0) Função que incrementa as três variáveis

void incrementa(int &ref, int* ponteiro, int valor){
    ref++;
    (*ponteiro)++; //tem que coloar () senao a precedecia vai ser do ++
    valor++;
    cout << "36- " << ref << " - " << " - " << *ponteiro << " - " << valor <<endl;
}

int main() {

    // 1) Declare uma variável do tipo inteiro e preencha com o valor informado na entrada
    int entrada;
    cin >> entrada;
    
    // 2) Declare um ponteiro para inteiros e inicialize com valor nulo
    int* ponteiro = nullptr;
    
    // 3) Declare um vetor de inteiros com tamanho informado na entrada e preencha com dados lidos da entrada
    int vetor[entrada];
    for (int i = 0; i < entrada; i++){
        cin >> vetor[i]; 
    }
    
    
    // 4) Imprima o ENDEREÇO da variável declarada em (1)
    cout << "4- " << &entrada <<endl;
    
    // 5) Imprima o VALOR da variável declarada em (1)
    cout << "5- " << entrada <<endl;
    
    // 6) Imprima o ENDEREÇO da variável declarada em (2)
    cout << "6- " << &ponteiro <<endl;

    // 7) Imprima o VALOR da variável declarada em (2)
    cout << "7- " << ponteiro <<endl;
    
    // 8) Imprima o ENDEREÇO da variável declarada em (3)
    cout << "8- " << &vetor <<endl; 
    
    // 9) Imprima o ENDEREÇO da primeira posição da variável declarada em (3)
    cout << "9- " << &vetor[0] <<endl;
    
    // 10) Imprima o VALOR da primeira posição da variável declarada em (3)
    cout << "10- " << vetor[0] <<endl;

    // 11) Atribua o ENDEREÇO da variável declarada em (1) à variável declarada em (2)
    ponteiro = &entrada;

    // 12) Imprima o VALOR da variável declarada em (2)
    cout <<  "12- " << ponteiro <<endl;

    // 13) Imprima o VALOR guardado no ENDEREÇO apontado por (2)
    cout << "13- " << *ponteiro <<endl;

    // 14) Coloque o VALOR '5' no ENDEREÇO apontado por (2)
    *ponteiro=5;
    
    // 15) Imprima o VALOR da variável declarada em (1)
    cout << "15- " << entrada <<endl;
    
    // 16) Atribua o VALOR da variável (3) à variável declarada em (2)
    ponteiro = vetor;
    
    // 17) Imprima o VALOR da variável declarada em (2)
    cout << "17- " << ponteiro <<endl;
    
    // 18) Imprima o VALOR guardado no ENDEREÇO apontado por (2)
    cout << "18- " << *ponteiro <<endl;
    
    // 19) Atribua o ENDEREÇO da primeira posição de (3) à variável declarada em (2)
    ponteiro = &vetor[0];
    
    // 20) Compare o valor variáveis (2) e (3), imprimindo 'S' se forem iguais e 'N' se forem diferentes
    if(ponteiro == vetor){
        cout << "20- " << "S" <<endl;
    }else{
        cout << "20- " << "N" <<endl;
    }
    
    // 21) Imprima o VALOR da variável declarada em (2)
    cout << "21- " << ponteiro <<endl;
    
    // 22) Imprima o VALOR guardado no ENDEREÇO apontado por (2)
    cout << "22- " << *ponteiro <<endl;
    
    // 23) Multiplique todos os valores do vetor declarado em (3) por '10', porém manipulando apenas a variável (2)
    for (int i = 0; i < entrada; i++){
        ponteiro[i] *10;
    }
    
    
    // 24) Imprima os elementos de (3) a partir variável do vetor utilizando a notação [] (colchetes)
    for (int i = 0; i < entrada; i++){
        cout << "24- " << vetor[i] <<endl;
    }

    
    // 25) Imprima os elementos de (3) a partir variável do vetor utilizando a notação ponteiro/deslocamento
    for (int i = 0; i < entrada; i++){
        cout << "25- " << *(vetor +i) <<endl;
    }

    
    // 26) Imprima os elementos de (3) utilizando a variável (2) e a notação ponteiro/deslocamento
    for (int i = 0; i < entrada; i++){
        cout << "26- " << *(ponteiro +i) <<endl;
    }

    // 27) Atribua o ENDEREÇO da última posição de (3) à variável declarada em (2)
    ponteiro = &vetor[entrada-1]; 
    
    // 28) Imprima o VALOR da variável declarada em (2)
    cout << "28- " << ponteiro << endl;
    
    // 29) Imprima o VALOR guardado no ENDEREÇO apontado por (2)
    cout << "29- " << *ponteiro << endl;
    
    // 30) Declare um ponteiro para ponteiro e o inicialize com o ENDEREÇO da variável (2)
    int** pponteiro = &ponteiro;
    
    // 31) Imprima o VALOR da variável declarada em (30)
    cout << "31- " << pponteiro << endl;
    
    // 32) Imprima o ENDEREÇO da variável declarada em (30)
    cout << "32- " << &pponteiro << endl;
    
    // 33) Imprima o VALOR guardado no ENDEREÇO apontado por (30)
    cout << "33- " << *pponteiro << endl;

    // 34) Imprima o VALOR guardado no ENDEREÇO do ponteiro apontado por (30)
    cout << "34- " << **pponteiro << endl;
    
    // 35) Crie 3 variáveis interiras e leia o valor delas da entrada
    int a,b,c;
    cin >> a >> b >> c;

    
    // 36) Chame a função criada em (0) passando as 3 variáveis criadas em (35) como parâmetro
    incrementa(a,&b,c);

    
    return 0;
}