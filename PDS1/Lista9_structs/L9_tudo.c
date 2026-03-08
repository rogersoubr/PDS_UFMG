//Roger Souza Brandao - 2025108154
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm> // para std::max

struct Ponto {
    float x;
    float y;
    //quando a funcao esta dentro da struct, ele vira um metodo
    //vai dar erro sem o & porque o computador não definiu o metodo ainda, por isso tem que colocar um &. Com o &, o sistema continua
    float distancia(Ponto& p);
    void atribuir(float a, float b);
};

struct Triangulo {
    Ponto p1, p2, p3;
    float perimetro();
    float area();
    bool equilatero();
    bool semelhante(Triangulo& t);
};

struct Retangulo {
    Ponto v1, v2; //vrtices opostos
    float perimetro();
    float area();
    bool quadrado();
};

struct Circunferencia {
    Ponto c; //centro
    float r; //raio
    float perimetro();
    float area();
    bool contem(Ponto& p);
    bool contem(Triangulo& t);
    bool contem(Retangulo& r);
    bool pertence(Ponto& p);
    bool circunscrita(Triangulo& t);
    bool circunscrita(Retangulo& r);
};

//Ponto:: vai falar sobre quais variaveis o this se referencia 
float Ponto::distancia(Ponto& p){
    return sqrt((this->x - p.x) * (this->x - p.x) + (this->y - p.y) * (this->y - p.y));
};

void Ponto::atribuir(float a, float b){
    this->x = a;
    this->y = b; 
};

//metodos Triangulo
float Triangulo::perimetro(){
    return this->p1.distancia(p2) + this->p2.distancia(p3) + this->p3.distancia(p1);
};

float Triangulo::area(){
    //formula de Heron
    float a = p1.distancia(p2);
    float b = p2.distancia(p3);
    float c = p3.distancia(p1);
    float s = (a + b + c) / 2.0;
    return sqrt(s * (s - a) * (s - b) * (s - c));
};

bool Triangulo::equilatero(){
    float a = p1.distancia(p2);
    float b = p2.distancia(p3);
    float c = p3.distancia(p1);
    
    //compara tolerancia para numeros float
    float epsilon = 0.0001;
    return (fabs(a - b) < epsilon) && (fabs(b - c) < epsilon) && (fabs(c - a) < epsilon);
};

bool Triangulo::semelhante(Triangulo& t){
    //calculo dos lados do triangulo corrente
    float a1 = p1.distancia(p2);
    float b1 = p2.distancia(p3);
    float c1 = p3.distancia(p1);
    
    //calcula os lados do triangulo t
    float a2 = t.p1.distancia(t.p2);
    float b2 = t.p2.distancia(t.p3);
    float c2 = t.p3.distancia(t.p1);
    
    // Ordena os lados para comparar proporcoes
    float lados1[3] = {a1, b1, c1};
    float lados2[3] = {a2, b2, c2};
    
    //irdenacao
    for(int i = 0; i < 2; i++) {
        for(int j = i+1; j < 3; j++) {
            if(lados1[i] > lados1[j]) {
                float temp = lados1[i];
                lados1[i] = lados1[j];
                lados1[j] = temp;
            }
            if(lados2[i] > lados2[j]) {
                float temp = lados2[i];
                lados2[i] = lados2[j];
                lados2[j] = temp;
            }
        }
    }
    
    //verifica se as proporcoes são iguais
    float epsilon = 0.0001;
    float razao1 = lados1[0] / lados2[0];
    float razao2 = lados1[1] / lados2[1];
    float razao3 = lados1[2] / lados2[2];
    
    return (fabs(razao1 - razao2) < epsilon) && (fabs(razao2 - razao3) < epsilon);
};

//metodos retangulo
float Retangulo::perimetro(){
    float base = fabs(v2.x - v1.x);
    float altura = fabs(v2.y - v1.y);
    return 2 * (base + altura);
};

float Retangulo::area(){
    float base = fabs(v2.x - v1.x);
    float altura = fabs(v2.y - v1.y);
    return base * altura;
};

bool Retangulo::quadrado(){
    float base = fabs(v2.x - v1.x);
    float altura = fabs(v2.y - v1.y);
    float epsilon = 0.0001;
    return fabs(base - altura) < epsilon;
};

//metodos circunferencia
float Circunferencia::perimetro(){
    return 2 * 3.14159265359 * this->r;
};

float Circunferencia::area(){
    return 3.14159265359 * this->r * this->r;
};

bool Circunferencia::contem(Ponto& p){
    float dist = this->c.distancia(p);
    return dist <= this->r; //<= serve para incluir pontos na borda
};

bool Circunferencia::contem(Triangulo& t){
    //verifica se todos os vertices do triangulo estao dentro da circunferencia
    return contem(t.p1) && contem(t.p2) && contem(t.p3);
};

bool Circunferencia::contem(Retangulo& r){
    // Verifica se todos os vertices do retangulo estao dentro da circunferencia
    Ponto v3 = {r.v1.x, r.v2.y}; //terceiro vertice
    Ponto v4 = {r.v2.x, r.v1.y}; //quarto vertice
    
    return contem(r.v1) && contem(r.v2) && contem(v3) && contem(v4);
};

bool Circunferencia::pertence(Ponto& p){
    float dist = this->c.distancia(p);
    float epsilon = 0.0001;
    return fabs(dist - this->r) < epsilon; //ponto esta exatamente na circunferencia
};

bool Circunferencia::circunscrita(Triangulo& t){
    //verifica se todos os vertices do triangulo pertencem a circunferencia
    return pertence(t.p1) && pertence(t.p2) && pertence(t.p3);
};

bool Circunferencia::circunscrita(Retangulo& r){
    //retangulo circunscrito: o centro deve ser o ponto medio das diagonais. A distancia do centro aos vertices deve ser igual ao raio
    
    Ponto centro_ret = {(r.v1.x + r.v2.x) / 2, (r.v1.y + r.v2.y) / 2};
    
    //se o centro do retangulo coincide com o centro da circunferencia
    float epsilon = 0.0001;
    if(fabs(centro_ret.x - this->c.x) > epsilon || fabs(centro_ret.y - this->c.y) > epsilon)
        return false;
    
    //verifica se todos os vertices estao na circunferencia
    Ponto v3 = {r.v1.x, r.v2.y};
    Ponto v4 = {r.v2.x, r.v1.y};
    
    return pertence(r.v1) && pertence(r.v2) && pertence(v3) && pertence(v4);
};

int main(){
    //testando os pontos
    Ponto p;//criando ponto normal
    p.atribuir(1,2);

    //calculando distancia de pontos
    Ponto p1;
    p1.atribuir(2,2);
    Ponto p2;
    p2.atribuir(4,4);
    printf("A distancia entre os pontos P1 e P2 eh: %.2f\n", p1.distancia(p2));

    //triangulo
    Triangulo t;
    t.p1.atribuir(0,0);
    t.p2.atribuir(3,0);
    t.p3.atribuir(0,4);
    printf("O perimetro do Triangulo eh: %.2f\n", t.perimetro());
    printf("A area do Triangulo eh: %.2f\n", t.area());
    printf("O triangulo eh equilatero? %s\n", t.equilatero() ? "Sim" : "Nao");//operadorzim ternario

    //Rtangulo
    Retangulo r;
    r.v1.atribuir(0,0);
    r.v2.atribuir(3,4);
    printf("Area do retangulo: %.2f\n", r.area());
    printf("Eh quadrado? %s\n", r.quadrado() ? "Sim" : "Nao");

    //Circunferencia
    Circunferencia circ;
    circ.c.atribuir(0,0);
    circ.r = 5;
    printf("Area da circunferencia: %.2f\n", circ.area());
    printf("Pertence ao ponto (0,5)? %s\n", circ.pertence(p2) ? "Sim" : "Nao");

    return 0;
};