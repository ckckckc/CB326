/*
    設計一個Pokemon類別包含下列成員：
    令物件實體不能存取其屬性
    使方法設計更加合理

    屬性 (私有)：

    string Name: 名字
    int Lv: 等級
    int HpMax: 最大血量
    int HpCur: 現存血量 (HpCurrent)
    方法 (公開)：

    void ShowInfo(): 顯示資訊
    void Attack(Pokemon &Target): 攻擊(並判斷其合理性)

    若攻擊方或被攻擊方血量已歸0的話，便不能攻擊分別如下： Pikachu is unable to attack.(自身血量是0不可攻擊對方)
    Mewtwo cannot attack fainted target Pikachu.(對方血量是0沒有戰鬥力不可攻擊)
    void Defence( int n ): 防御(並判斷其合理性)

    若被攻擊超過剩餘血量，使血量不可為負數，最低為0，若到0的話便印出暈倒失去戰鬥力的資訊如下：Pikachu is fainted.
    void Cure(): 治癒
    void setData(string name, int lv, int hp): 設定其資料 (並判斷其合理性)
    name不得為空、空白或是標點符號，若是須提示"Name can't be empty."並設定為"No Name"
    lv不得小於1，若小於1，須提示"Lv setting error."並設定為1
    hp不得小於1，若小於1，須提示"Hp setting error."並設定為1
    使用Pokemon 類別宣告兩個物件
    使兩物件可互相攻擊
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
     Pokemon p1,p2;
     string name;
     int lv,hp;

     cin >> name >> lv >> hp;
     p1.setData(name,lv,hp);

     cin >> name >> lv >> hp;
     p2.setData(name,lv,hp);

     p1.ShowInfo();
     p2.ShowInfo();

     p1.Attack(p2);
     p2.Attack(p1);
     p1.Attack(p2);
     p2.Attack(p1);

     p1.ShowInfo();
     p2.ShowInfo();

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
    名字1
    等級1
    血量1
    名字2
    等級2
    血量2

    Output Format
    Pokemon 1資訊
    Pokemon 2資訊
    p1 攻擊 p2
    p2 攻擊 p1
    Pokemon 1資訊
    Pokemon 2資訊

    Sample Input 1
    Pikachu
    5
    30
    Mewtwo
    30
    300
    Sample Output 1
    Name: Pikachu
    Lv: 5
    HP: 30/30

    Name: Mewtwo
    Lv: 30
    HP: 300/300

    Pikachu Attack Mewtwo 5 Points.
    Mewtwo Attack Pikachu 30 Points.
    Pikachu is fainted.
    Pikachu is unable to attack.
    Mewtwo cannot attack fainted target Pikachu.
    Name: Pikachu
    Lv: 5
    HP: 0/30

    Name: Mewtwo
    Lv: 30
    HP: 295/300
    Sample Input 2
    Charmander
    90
    700
    Weedle
    -1
    -20
    Sample Output 2
    Lv setting error.
    Hp setting error.
    Name: Charmander
    Lv: 90
    HP: 700/700

    Name: Weedle
    Lv: 1
    HP: 1/1

    Charmander Attack Weedle 90 Points.
    Weedle is fainted
    Weedle is unable to attack.
    Charmander cannot attack fainted target Weedle.
    Weedle is unable to attack.
    Name: Charmander
    Lv: 90
    HP: 700/700

    Name: Weedle
    Lv: 1
    HP: 0/1
 */

#include <iostream>
#include "Pokemon.h"
using namespace std;
 
int main()
{
    Pokemon p1,p2;
    string name;
    int lv,hp;
 
    cin >> name >> lv >> hp;
    p1.setData(name,lv,hp);
 
    cin >> name >> lv >> hp;
    p2.setData(name,lv,hp);
 
    p1.ShowInfo();
    p2.ShowInfo();
 
    p1.Attack(p2);
    p2.Attack(p1);
    p1.Attack(p2);
    p2.Attack(p1);
 
    p1.ShowInfo();
    p2.ShowInfo();
 
    return 0;
}
