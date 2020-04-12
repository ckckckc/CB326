#include <iostream>

using namespace std;

class Pokemon {
public:
    Pokemon () {
        Name = "No Name";
        Lv = 1;
        HpMax = 1;
        HpCur = 1;
    };
    Pokemon (string name, int lv, int hp) {
        setData(name, lv, hp);
    };
    ~Pokemon() {
        cout << Name << " has returned to the nature." << endl;
    };
    void ShowInfo();
    void Attack(Pokemon &Target);
    void Cure();
    void Defence(int);
    void setData(string, int, int);
private:
    std::string Name;
    int Lv;
    int HpMax;
    int HpCur;
};
