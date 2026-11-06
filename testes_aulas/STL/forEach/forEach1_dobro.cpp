#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    std::vector<int> nums = {1,2,3,4,5};

    //não faz copia, altera o vector nums
    for(int &x : nums){
        x *= 2;//multiplicou todos por 2
    }

    std::cout << "Valores dobrados: ";
    //std::for_each(inicio_do_range, fim_do_range, funcao_ou_lambda);
    std::for_each(nums.begin(), nums.end(), [](int val){//aqui eu criei uma mini função que imprime cada um
        std::cout<<val<<"\t";
    });

    return 0;
}