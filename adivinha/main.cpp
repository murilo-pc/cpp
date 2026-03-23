#include <iostream>
#include <random>
int main(){
    std::random_device seed;
    std::mt19937 gerador(seed());
    std::uniform_int_distribution<int> random(1, 100);
    int n = random(gerador), nt = 0, t;
    std::cout << "Você adivinhará um número aleatório de 1 a 100." << std::endl;
    do{
        std::cout << "Digite sua tentativa:  ";
        std::cin >> t;
        if(t > n){
            std::cout << "O número secreto é menor do que o digitado." << std::endl;
        }else if(t < n){
            std::cout << "O número secreto é maior do que o digitado." << std::endl;
        }
        nt++;
    }while(t != n);
    std::cout << "Parabéns, você acertou o número secreto em " << nt << " tentativas!" << std::endl;
    return 0;
}