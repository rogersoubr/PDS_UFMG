#include <iostream>
#include <iomanip> // Necessário para setprecision
using namespace std;

int main(){
    double idade; 
    string nome;
    char nomechar[4];/*nao vai ler as 5 letras, somente 4*/

    cout << "digite seu nome: ";
    cin >> nome;
    cin >> nomechar; 
    cout << "digite sua idade,meses: ";
    cin >> idade;

    cout << "Olá " << nome << " | " << nomechar << ", " << "voce tem " << std::fixed << std::setprecision(2) << idade << " anos de idade" << endl;    

    return 0;
}