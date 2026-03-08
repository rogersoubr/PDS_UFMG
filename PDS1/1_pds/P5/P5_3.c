int primo(int n){
    if(n<=1){
        //printf("primo");
        return "nao e primo";
    }else{
        //vai verificar se os números tem outros divisores ate i
        for (int i=2;i*i<=n;i++){
            if(n%i ==0){
                //printf("primo");
                return "nao e primo";
            }
        }
    }
    //printf("primo");
    return "primo";
}

// int main(){
//     printf(primo(4));
//     return 0;
// }