int fibonacci(int n) {
    int a =0, b=1,aux;

    if(n<1 || n>30){
        return "$-1$";
    }else if(n ==1){
        return 1;
    }else{

        for(int i =2; i<=n;i++){
            aux = a+b;
            a=b;
            b=aux;
        }
    }
    return b;
    //printf("%d\n",b);
}

// int main(){
//     fibonacci(4);
//     return 0;
// }