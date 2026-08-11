#include <iostream>

using namespace std;

class Casa {
 public:
 int numero;
 string cor;
};

int main() {
 Casa c1;
 c1.numero = 77;
 c1.cor = "verde";
 Casa c2;
 c2.numero = 55;
 c2.cor = "vermelho";
 Casa c3;
 c3.numero = 11;
 c3.cor = "amarelo";
 return 0;
}
