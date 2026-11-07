#include <iostream>
class Impressora { 
    public: 
        void imprimir(int i) { 
            std::cout << "Inteiro: " << i << std::endl; 
        }
        void imprimir(double d) { 
            std::cout << "Double: " << d << std::endl; 
        }
        void imprimir(const std::string& s) { 
            std::cout << "String: " << s << std::endl; 
        } 
};
int main() { 
    Impressora p; 
    p.imprimir(10); 
    p.imprimir(3.14); 
    p.imprimir("PDS2");
    return 0;
}