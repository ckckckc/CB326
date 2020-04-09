#include <iostream>
#include "Pokemon.h"

void Pokemon::ShowInfo() {
    std::cout << "Name: " << Name << std::endl;
    std::cout << "Lv: " << Lv << std::endl;
    std::cout << "HP: " << HpCur << "/" << HpMax << std::endl << std::endl;
}
