/*
    設計一個Pokemon類別包含下列成員：

    屬性 (公開)：

    string Name: 名字
    int Lv: 等級
    int HpMax: 最大血量
    int HpCur: 現存血量 (HpCurrent)
    方法 (公開)：

    void ShowInfo(): 顯示資訊
    void Attack(Pokemon &Target): 攻擊
    讓呼叫Attack者以Lv做為攻擊力，攻擊Target物件使其HpCur減少Lv的血量，並印出攻擊資訊如：Mewtwo Attack Pikachu 30 Points.
    void Defence( int atkp ): 防御(被攻擊？)
    void Cure(): 治癒
    令其回復最大血量，並印出資訊如： Mewtwo has restore health.
    使用Pokemon 類別宣告兩個物件
    使兩物件可互相攻擊(pc為固定角色)
    以 LV 當作攻擊力
    每次攻擊後扣除被攻擊方的血量
    以攻擊方的等級扣除被攻擊方的現在HP
    並印出它們的資訊

    本題為多檔組合 main.cpp 已幫你準備好如下：

    #include <iostream>
    #include "Pokemon.h"
    using namespace std;

    int main()
    {
     Pokemon pc={"Pikachu",50,500,500},p1;

     cin >> p1.Name >> p1.Lv >> p1.HpMax;
     p1.HpCur = p1.HpMax;

     p1.Attack(pc);
     pc.Attack(p1);

     p1.ShowInfo();
     pc.ShowInfo();

     p1.Cure();
     p1.ShowInfo();
     pc.ShowInfo();

     return 0;
    }
    請完成Pokemon.h

    //...
    class Pokemon
    {
    public:
     ...
    };
    請完成Pokemon.cpp

    void Pokemon::ShowInfo(){
     ...
    }
    ...
    完成後上傳

    Input Format
    輸入p1資訊 名字1
    等級1
    血量1

    Output Format
    p1 攻擊 pc
    pc 攻擊 p1
    Pokemon p1資訊(換2次行)
    Pokemon pc資訊(換2次行)
    回復p1所有生命值後印出
    Pokemon 1資訊(換2次行)
    Pokemon 2資訊(換2次行)

    Sample Input
    Mewtwo
    30
    300
    Sample Output
    Mewtwo Attack Pikachu 30 Points.
    Pikachu Attack Mewtwo 50 Points.
    Name: Mewtwo
    Lv: 30
    HP: 250/300

    Name: Pikachu
    Lv: 50
    HP: 470/500

    Mewtwo has restore health.
    Name: Mewtwo
    Lv: 30
    HP: 300/300

    Name: Pikachu
    Lv: 50
    HP: 470/500
 */

#include <iostream>
#include "Pokemon.h"
using namespace std;
 
int main()
{
    Pokemon pc={"Pikachu",50,500,500},p1;
    
    cin >> p1.Name >> p1.Lv >> p1.HpMax;
    p1.HpCur = p1.HpMax;

    p1.Attack(pc);
    pc.Attack(p1);

    p1.ShowInfo();
    pc.ShowInfo();

    p1.Cure();
    p1.ShowInfo();
    pc.ShowInfo();

    return 0;
}
