#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(){

    string line;
    while(getline(cin, line)){
        stringstream info(line);//criando novo stream que se chama info
        string aux;
        while(getline(info, aux,';')){
            cout << aux<< endl;
        }
    }

    return 0;
}