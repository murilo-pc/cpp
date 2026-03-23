#include <iostream>
int main(){
    int h;
    std::cout << "Digite a altura da pirâmide que você deseja:  ";
    std::cin >> h;

    for(int i = 1; i <= h; i++){
        for(int j = 1; j <= i; j++){
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    return 0;
}