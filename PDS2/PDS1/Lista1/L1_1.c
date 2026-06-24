#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* RODAR O ARQUIVO:
1) Vai para o caminho do arquivo
2) Rode o GCC: gcc NOME_ARQUIVO.c
3) Rode o executável gerado: ./a.exe
*/

int main (){
    //ATIVIDADE 1
    printf("%d",3 + 4);
    printf("\n%.2f",(7/4));//porque deu 0? Se eu colocar .0 vai normalmente
    printf("\n%d",3*3);
    printf("\n%.2f",5.3 * 2.1);
    printf("\n%d",2 * 5 - 2);
    printf("\n%d",2 + 2 * 5);
    printf("\n%d", (2 + 5) * 3);
    printf("\n%f", sin(3.141502));
    printf("\n%.4f", sqrt(5));
    printf("\n%d", 1 + 2 + 3);
    printf("\n%d", 1 * 2 * 3);
    printf("\n%.1f", (1 + 2 + 3) / 3.0 );//um float, torna todos float
    printf("\n%d", (2 + 4) * (3 - 1) );
    printf("\n%d", (9 / 3) + (3 * 2) );
    printf("\n%.4f", sin(4.5) + cos(3.7) );
    printf("\n%.4f", log(2.3) - log(3.1) );
    printf("\n%.4f", log (7) + (log(7) * log(7) - cos(log(7))) );
    printf("\n%.4f",  (10.3 + 8.4)/50.3 - (10.3 + 8.4) );
    printf("\n%.4f", (cos(0.8) + sin(0.8)) * (cos(0.8) - sin(0.8)) );

    //ATIVIDADE 2
    printf("\n ATIVIDADE 2: \n");
    float a,b,c,d;//pode ser qualquer numero
    printf("Digite o numero A: ");
    scanf("%f",&a);
    printf("Digite o numero B: ");
    scanf("%f",&b);
    printf("Digite o numero C: ");
    scanf("%f",&c);
    printf("Digite o numero D: ");
    scanf("%f",&d);
    printf("Voce digitou: %f|%f|%f|%f",a,b,c,d);

    printf("\n%f",a + b);
    printf("\n%f",a/c);
    printf("\n%f",a*a);
    printf("\n%f",b * c);
    printf("\n%f",a * b - c);
    printf("\n%f",a + b * c);
    printf("\n%f",(a + b) * c);
    printf("\n%f",sin(a));
    printf("\n%f",sqrt(b));
    printf("\n%f",a + b + c);
    printf("\n%f",a * b * c);
    printf("\n%f",(a + b + c) / d);
    printf("\n%f",(a + b) * (a - d));
    printf("\n%f",(b / c) + (a * d));
    printf("\n%f",sin(b) + cos(c));
    printf("\n%f",log(a) - log(c));
    printf("\n%f",log(a) + (log(b) * log(d) - cos(log(c))));
    printf("\n%f",(b + a)/c - (d + a));
    printf("\n%f",(cos(d) + sin(c)) * (cos(b) - sin(a)));

    //ATIVIDADE 3
    printf("\n ATIVIDADE 3: \n");
    printf("Digite o numero A: ");
    scanf("%f",&a);
    printf("Digite o numero B: ");
    scanf("%f",&b);
    printf("Digite o numero C: ");
    scanf("%f",&c);

    float media, mediaP, perimetro, areaCirculo, areaTriangulo, hipotenusa, x1, x2;
    media =(a+b+c)/3;
    printf("\n%f",media);
    mediaP = (a*3+b*4+c*5)/12;
    printf("\n%f",mediaP);
    perimetro = 2*3.14*a;
    printf("\n%f",perimetro);
    areaCirculo = 3.14*(a*a);
    printf("\n%f",areaCirculo);
    areaTriangulo = (b*c)/2;
    printf("\n%f",areaTriangulo);
    hipotenusa = (b*b)+(c*c);
    printf("\n%f",hipotenusa);
    float delta = ((b*b)-4*a*c);
    x1 = (-b + (sqrt(delta)) ) / (2*a);
    x2 = (-b - (sqrt(delta)) ) / (2*a);
    printf("\n%f",x1);
    printf("\n%f",x2);
    
}

//ATIVIDADE 2
