#include <iostream>

using namespace std;

class Pokemon
{   
public:   
    Pokemon();
    Pokemon(string na, int lv, int hp);
    void operator>>(Pokemon &tg);
    void ShowInfo();
    void Attack(Pokemon &tg);
    void Defence(int atkp);
    void Cure();
    friend class PokemonHealthCenter;
 
private:
    void setData(string na, int lv, int hp);
    string Name;
    int Lv;
    int HpMax;
    int HpCur;
};

class PokemonHealthCenter {
public:
    PokemonHealthCenter(string);
    void operator<<(Pokemon &p);
    void Cure(Pokemon &p);
private:
    string Name;
};

typedef PokemonHealthCenter PC;
