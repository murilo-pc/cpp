#include <iostream>

bool eh_par(int n){
    if(n % 2 == 0){
        return true;
    }else{
        return false;
    }
}

int main(){
    int n;
    std::cout << "Digite um número para verificar se é par ou ímpar:  ";
    std::cin >> n;
    if(eh_par(n)){
        std::cout << n << " é par." << std::endl;
    }else{
        std::cout << n << " é ímpar." << std::endl;
    }
    return 0;
}