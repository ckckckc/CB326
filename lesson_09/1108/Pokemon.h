#include <iostream>

class Pokemon {
public:
    void ShowInfo();
    void Attack(Pokemon &Target);
    void Cure();
    void Defence(int);
    std::string Name;
    int Lv;
    int HpMax;
    int HpCur;
};
