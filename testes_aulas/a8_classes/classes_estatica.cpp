lass ClasseAtributoEstatico {
 public:

 static int numero;
 ClasseAtributoEstatico() {
 ClasseAtributoEstatico::numero++;
 }
 void imprimirNumero () {
 cout << ClasseAtributoEstatico::numero << endl;
 }
};


int main() {

    int ClasseAtributoEstatico::numero = 0;

 ClasseAtributoEstatico c1;
 c1.imprimirNumero();
 ClasseAtributoEstatico c2;
 c2.imprimirNumero();
 c1.imprimirNumero();
 cout << ClasseAtributoEstatico::numero << endl;
 return 0;
}
