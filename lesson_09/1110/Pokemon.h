#include <iostream>

class Pokemon {
public:
    void ShowInfo();
    void Attack(Pokemon &Target);
    void Cure();
    void Defence(int);
    void setData(std::string, int, int);
private:
    std::string Name;
    int Lv;
    int HpMax;
    int HpCur;
};
