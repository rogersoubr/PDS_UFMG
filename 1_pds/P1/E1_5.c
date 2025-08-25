#include <stdio.h>
#include <math.h>//pra usar pow
int main() {
    float imcBrutus = 122/(1.84*1.84);
    float imcPerderBrutos = imcBrutus - 22;//22 vai ser o meu ideal
    float perderBrutos = (imcPerderBrutos *122)/imcBrutus;
    printf("Brutos tem que perder: %.2f\n", perderBrutos);
    return 0;


    double imcOlivia = 45/(1.76*1.76);
    double imcMenosOlivia = imcOlivia - 22;//22 vai ser o meu ideal
    double ganharOlivia = (imcMenosOlivia *45)/imcOlivia;
    printf("Olivia tem que ganhar: %.2lf\n", ganharOlivia);
    return 0;
}