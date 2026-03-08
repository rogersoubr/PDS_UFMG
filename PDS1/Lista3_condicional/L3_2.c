#include <stdio.h>
//vao ser predicados que retornam 0 ou 1, true ou false
int par(int x){
    return (x%2==0);
}

int dentro(float x, float y, float z){
    return(x>=y && x<=z);
}

int fora(float x, float y, float z){
    //return(x<=y || x>=z);
    return (!dentro(x,y,z));
}


int main(){
    int p, result;
    float num, x, y;
    printf("Digite o numero para ver se e par:");
    scanf("%d",&p);
    printf("\n 0 = nao | 1 = sim \n");
    result = par(p);
    printf("\nResultado: %d\n",result);

    printf("Digite um numero: ");
    scanf("%f",&num);
    printf("Digite dois numeros 'x,y': ");
    scanf("%f,%f",&x,&y);
    result = dentro(num,x,y);
    printf("Resultado se %.2f esta dentro de %.2f,%.2f: %d\n",num,x,y,result);
    result = fora(num,x,y);
    printf("Resultado se %.2f esta fora de %.2f,%.2f: %d",num,x,y,result);



    return 0;
}