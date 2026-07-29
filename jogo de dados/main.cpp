#include <iostream>
#include <string>

class Character{
    private:
        std::string name;
        int hp, power;

    public:
        Character(std::string name, int hp, int power){
            name = name;
            hp = hp;
            power = power;
        }

};