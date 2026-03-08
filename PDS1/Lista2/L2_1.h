#include <stdio.h>
#include <math.h>

float media(float a, float b, float c){
    return (a+b+c)/3;
}

float media_ponderada(float a, float b, float c){
    return (a*3 + b*4 + c*5)/12;
}

float perimetro_circulo(float r){
    return 2*3.14*r;
}

float area_circulo(float r){
    return 3.14*(r*r);
}

float area_triangulo(float b, float c){
    return (b*c)/2;
}

float area_caixa(float a, float b, float c){
    return (2*a*c)+(2*b*c)+(2*a*b);
}

float volume_caixa(float a, float b, float c){
    return a*b*c;
}

float area_cilindro(float r, float h){
    return 2*3.14*r*(r+h);
}

float volume_cilindro(float r, float h){
    return  3.14*(r*r)*h ;
}

float hipotenusa(float b, float c){
    return sqrt((b*b) + (c*c));
}

float raiz_positiva(float a, float b, float c){
    float delta = ((b*b)-4*a*c);
    return (-b + (sqrt(delta)) ) / (2*a);
}


