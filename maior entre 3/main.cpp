#include <iostream>
int main(){
    int n1, n2, n3;
    std::cout << "digite 3 números:  ";
    std::cin >> n1 >> n2 >> n3;
    if(n1 >= n2 && n1 >= n3){
        std::cout << n1 << " é o maior número." << std::endl;
    }else if(n2 >= n1 && n2 >= n3){
        std::cout << n2 << " é o maior número." << std::endl;
    }else{
        std::cout << n3 << " é o maior número." << std::endl;
    }
    return 0;
}