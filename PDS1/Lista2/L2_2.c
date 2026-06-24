#include <stdio.h>
#include <math.h>
#include "L2_1.h"

int main(){
    float A,B,C,R,H, 
    r_media, r_media_p, 
    r_perimeto_cir, r_area_cir,
    r_area_t,
    r_volume_cai, r_area_cai,
    r_volume_cil, r_area_cil,
    r_hipotenusa,
    r_raiz;

    printf("----------MEDIAS----------\n");
    printf("Digite o primeiro numero: ");
    scanf("%f",&A);
    printf("Digite o segundo numero: ");
    scanf("%f",&B);
    printf("Digite o terceiro numero: ");
    scanf("%f",&C);
    r_media = media(A,B,C);
    r_media_p = media_ponderada(A,B,C);
    printf("Resultado:\nMEDIA: %.2f \nMEDIA PONDERADA: %f",r_media, r_media_p);

    printf("\n---------CIRCULO--------\n");
    printf("Digite o raio: ");
    scanf("%f",&R);
    r_perimeto_cir = perimetro_circulo(R);
    r_area_cir = area_circulo(R);
    printf("Resultado:\nPERIMETRO: %.2f \nAREA: %.2f", r_perimeto_cir, r_area_cir);

    printf("\n---------TRIANGULO---------\n");
    printf("digite a base do triangulo: ");
    scanf("%f",&B);
    printf("Digite a altura do triangulo: ");
    scanf("%f",&H);
    r_area_t = area_triangulo(B,H);
    printf("Resultado:\nAREA TRIANGULO: %.2f",r_area_t);

    printf("\n--------CAIXA---------\n");
    printf("Digite o comprimento: ");
    scanf("%f",&A);
    printf("Digite a largura: ");
    scanf("%f",&B);
    printf("Digite a altura: ");
    scanf("%f",&C);
    r_area_cai = area_caixa(A,B,C);
    r_volume_cai = volume_caixa(A,B,C);
    printf("Resultado:\nAREA CAIXA: %.2f \nVOLUME CAIXA: %.2f",r_area_cai, r_volume_cai);

    printf("\n--------CILINDRO---------\n");
    printf("Digite o raio: ");
    scanf("%f",&R);
    printf("Digite a altura: ");
    scanf("%f",&H);
    r_area_cil = area_cilindro(R,H);
    r_volume_cil = volume_cilindro(R,H);
    printf("Resultado:\nAREA CILINDRO: %.2f \nVOLUME CILINDRO: %.2f",r_area_cil, r_volume_cil);

    printf("\n---------HIPOTENUSA---------\n");
    printf("Digite o primeiro lado: ");
    scanf("%f",&B);
    printf("Digite o segundo lado: ");
    printf("%f",&C);
    r_hipotenusa = hipotenusa(B,C);
    printf("Resultado:\nHIPOTENUSA: %.2f",r_hipotenusa);

    printf("\n---------RAIZ POSITIVA---------\n");
    printf("Digite o 'a': ");
    scanf("%f",&A);
    printf("Digite o 'b': ");
    scanf("%f",&B);
    printf("Digite o 'c': ");
    scanf("%f",&C);
    r_raiz = raiz_positiva(A,B,C);
    printf("Resultado:\n2 GRAU: %.2f ",r_raiz);


    return 0;
}