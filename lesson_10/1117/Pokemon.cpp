#include <iostream>
#include "Pokemon.h"

using namespace std;

Pokemon::Pokemon () {
    Name = "No Name";
    Lv = 1;
    HpMax = 1;
    HpCur = 1;
};

Pokemon::Pokemon (string name, int lv, int hp) {
    setData(name, lv, hp);
};

void Pokemon::operator>>(Pokemon &tg) {
    Attack(tg);
}

void Pokemon::ShowInfo() {
    std::cout << "Name: " << Name << std::endl;
    std::cout << "Lv: " << Lv << std::endl;
    std::cout << "HP: " << HpCur << "/" << HpMax << std::endl << endl;
}
void Pokemon::Attack(Pokemon &Target) {
    if (HpCur <= 0) {
        std::cout << Name << " is unable to attack." << std::endl;
        return;
    }
    if (Target.HpCur <= 0) {
        std::cout << Name << " cannot attack fainted target " << Target.Name << "."  << std::endl;
        return;
    }
    std::cout << Name << " Attack " << Target.Name << " " << Lv << " Points." << std::endl;
    Target.Defence(Lv);
}
void Pokemon::Cure() {
    std::cout << Name << " has restore health." << std::endl;
    HpCur = HpMax;
}
void Pokemon::Defence(int atk) {
    if (HpCur - atk <= 0) {
        std::cout << Name << " is fainted." << std::endl;
        HpCur = 0;
        return;
    }
    HpCur -= atk;
}
void Pokemon::setData(std::string name, int lv, int hp) {
    if (name == "") {
        std::cout << "Name can't be empty." << std::endl;
        Name = "No Name";
    } else {
        Name = name;
    }
    
    if (lv < 1) {
        std::cout << "Lv setting error." << std::endl;
        Lv = 1;
    } else {
        Lv = lv;
    }
    
    if (hp < 1) {
        std::cout << "Hp setting error." << std::endl;
        HpCur = 1;
        HpMax = 1;
    } else {
        HpCur = hp;
        HpMax = hp;
    }
}

PokemonHealthCenter::PokemonHealthCenter(string na) {
    Name = na;
}

void PokemonHealthCenter::operator<<(Pokemon &p) {
    Cure(p);
};

void PokemonHealthCenter::Cure(Pokemon &p) {
    p.HpCur = p.HpMax;
    cout << p.Name << " has restored health at " << Name << "." << endl;
}
