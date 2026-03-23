#include <iostream>
#include <string>

int main(){
    int nivel;
    int moedas;
    std::string nome;
    std::cout << "====Criador de Personagens====" << std::endl;
    std::cout << "Digite o nome do personagem:  ";
    std::cin >> nome;
    std::cout << "Digite o nível do personagem:  ";
    std::cin >> nivel;
    std::cout << "Digite a quantidade de moedas do personagem:  ";
    std::cin >> moedas;
    std::cout <<"O personagem " << nome << " está no nível " << nivel << " e possuí " << moedas << " moedas." << std::endl; 
    return 0;
}