#include <iostream>
int main(){
    float temp;
    int opt;
    std::cout << "1. Converter Celsius para Fahrenheit.\n2. Converter Fahrenheit para Celsius.\nDigite o número correspondente a opção desejada:  ";
    std::cin >> opt;
    std::cout << "Digite a temperatura a ser convertida:  ";
    std::cin >> temp;
    if(opt == 1){    
        std::cout << "A temperatura de " << temp << " Celsius em Fahrenheit é " << temp * 1.8 + 32 << std::endl;
    }else if(opt == 2){
        std::cout << "A temperatura de " << temp << " Fahrenheit em Celcius é " << (temp - 32) / 1.8 <<std::endl;
    }
    return 0;
}