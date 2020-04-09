#include <iostream>
#include "Pokemon.h"

void Pokemon::ShowInfo() {
    std::cout << "Name: " << Name << std::endl;
    std::cout << "Lv: " << Lv << std::endl;
    std::cout << "HP: " << HpCur << "/" << HpMax << std::endl << std::endl;
}
void Pokemon::Attack(Pokemon &Target) {
    std::cout << Name << " Attack " << Target.Name << " " << Lv << " Points." << std::endl;
    Target.Defence(Lv);
}
void Pokemon::Cure() {
    std::cout << Name << " has restore health." << std::endl;
    HpCur = HpMax;
}
void Pokemon::Defence(int atk) {
    HpCur -= atk;
}
