float calculamedia(int n, float v[]){
    float soma, media =0;

    for(int i =0; i<n;i++){
        soma += v[i];
    }
    media = soma/n;

    return media;
}