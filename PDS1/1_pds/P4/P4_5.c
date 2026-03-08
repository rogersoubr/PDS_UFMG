
int main(){ 
    int dia, mes, ano;
    printf("Digite o dia: ");
    scanf("%d",&dia);

    printf("Digite o mes: ");
    scanf("%d",&mes);

    printf("Digite o ano: ");
    scanf("%d",&ano);

    if(ano>1){
        if(mes >= 1 && mes <= 12){


            //ano bissexto
            if((mes == 2) && (ano % 400 == 0)){
                if(dia >= 1 && dia <= 29){
                    printf("Data valida");
                }
                //ano não bissexto
            }else if((mes == 4) || (mes == 6) || (mes == 9) || (mes == 11)){
                if(dia >= 1 && dia <= 30){
                    printf("Data valida");
                }
            }else if((mes == 1) || (mes == 3) || (mes == 5) || (mes == 7) || (mes == 8) || (mes == 10) || (mes == 12)){
                if(dia >= 1 && dia <= 31){
                    printf("Data valida");
                }
            }else if((mes == 2) && (ano % 400 != 0)){
                if(dia >= 1 && dia <= 28){
                    printf("Data valida");
                }
            }else{
                printf("Data valida, mes incorreto");
            }


        }else{
            printf("Nao existe esse mes");
        }
    }else{
        printf("Nao existe esse ano");
    }


    return 0;
}