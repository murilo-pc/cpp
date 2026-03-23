#include <iostream>
int main(){
    int n;
    std::cout << "digite um número para saber sua tabuada:  ";
    std::cin >> n;
    for(int i = 1; i <= 10; i++){
        std::cout << n << " X " << i << " = " << n*i << std::endl;
    }

}