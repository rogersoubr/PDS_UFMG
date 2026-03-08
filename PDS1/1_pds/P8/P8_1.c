#include <stdio.h>
#include <math.h>

typedef struct  Eixos{
    double x;
    double y;
} Eixos ;

int main(){
    Eixos ponto1, ponto2;

    printf("Digite a primeira coordenada (x y): ");
    scanf("%lf %lf",&ponto1.x, &ponto1.y);

    printf("Digite a segunda coordenada (x y): ");
    scanf("%lf %lf",&ponto2.x, &ponto2.y);

    float distancia = sqrt(
         pow(ponto2.x - ponto1.x,2) + 
         pow(ponto2.y - ponto1.y,2) 
        );

    printf("A distancia entre as coordenadas dos pontos: %.2f\n",distancia);

    printf("Ax e Ay: %.2f e %.2f\n",ponto1.x, ponto1.y);
    printf("Bx e By: %.2f e %.2f\n",ponto2.x, ponto2.y);
}