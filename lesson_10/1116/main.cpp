/*
    設計一個Pokemon類別包含下列成員：
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

    若被攻擊超過剩餘血量，使血量不可為負數，最低為0，若到0的話便印出暈到失去戰鬥力的資訊如下：Pikachu is fainted.
    void Cure(): 治癒

    並設計一class為PokemonHealthCenter 為class Pokemon 的friend class
    使其可以直接存取Pokemon 的私有成員， 幫助Pokemon直接回血並印出xxx has restored health at yyy.
    class PokemonHealthCenter
    {
    public:
         PokemonHealthCenter(string na){
         … //設定神奇寶貝中心的名字
         }
         void Cure(Pokemon &p){
         … //將傳入的神奇寶貝回復滿血
           //並印出在「xx神奇寶貝中心」恢復
         }
    private:
         string Name;
    };

    使用Pokemon 類別宣告兩個物件
    使兩物件可互相攻擊
    以 LV 當作攻擊力
    每次攻擊後扣除被攻擊方的血量
    以攻擊方的等級扣除被攻擊方的現在HP
    並印出它們的資訊 並且可以使用PokemonHealthCenter幫助神奇寶貝恢復健康。

    本題為多檔組合 main.cpp 已幫你準備好如下：

    #include <iostream>
    #include "Pokemon.h"
    using namespace std;


    int main()
    {
     string pcName1;
     string PokemonName1, PokemonName2;
     int Lv1, Lv2;
     int Hp1, Hp2;

     //cin >> pcName1;
     getline(cin, pcName1);
     PC pc1(pcName1);

     cin >> PokemonName1 >> Lv1 >> Hp1;
     cin >> PokemonName2 >> Lv2 >> Hp2;
     Pokemon p1(PokemonName1,Lv1,Hp1),
             p2(PokemonName2,Lv2,Hp2);

     p1.Attack(p2);
     p2.Attack(p1);

     pc1.Cure(p1);
     pc1.Cure(p2);

     p1.ShowInfo();
     p2.ShowInfo();

     return 0;
    }
    請完成Pokemon.h

    //...
    #include<iostream>
    using namespace std;

    class Pokemon
    {
    public:
     Pokemon();
     Pokemon(string na, int lv, int hp);
     void ShowInfo();
     void Attack(Pokemon &Target);// 攻擊
     void Defence( int atkp );// 防御(被攻擊？)
     void Cure();// 治癒
    //加PokemonHealthCenter為好友
    private:
     void setData(string name, int lv, int hp);
     string Name;
     int Lv;
     int HpMax;
     int HpCur;
    };

    class PokemonHealthCenter
    {
    public:
         PokemonHealthCenter(string na){
         … //設定神奇寶貝中心的名字
         }
         void Cure(Pokemon &p){
         … //將傳入的神奇寶貝回復滿血
           //並印出在「xx神奇寶貝中心」恢復
         }
    private:
         string Name;
    };
    typedef PokemonHealthCenter PC;
    請完成Pokemon.cpp

    #include<iostream>
    #include "Pokemon.h"

    using namespace std;

    void Pokemon::ShowInfo(){
     cout << "Name: " << Name << endl;
     cout << "Lv: " << Lv << endl;
     cout << "HP: " << HpCur << "/"
          << HpMax << endl<< endl;
    }

    void Pokemon::Attack(Pokemon &Target){

     if(檢查自己可不可以攻擊){
         cout << Name << " is unable to attack." << endl;
         return;
     }
     if(檢查對方可不可以被攻擊){
         cout << Name << " cannot attack fainted target " << Target.Name << "." <<endl;
         return;
     }
     //Pikachu is unable to attack.
     //Mewtwo cannot attack fainted target Pikachu.

     cout << Name << " Attack " << Target.Name << " "
          << Lv << " Points." << endl;
     Target.Defence(Lv);

    }
    void Pokemon::Defence( int atkp ){
     int defp = 0; //此處防御力無用
     HpCur -= (atkp-defp);

     if(檢查是否被擊敗){
         cout << Name << " is fainted." << endl;
         HpCur = 0;
     }
    }
    void Pokemon::Cure(){
     cout << Name << " restore health." << endl;
     //回復體力
    }
    void Pokemon::setData(string name, int lv, int hp){
     if(檢查錯誤){
         cout << "Name can't be empty.\n";
         name = "No Name";
     }
     if(檢查錯誤){
         cout << "Lv setting error.\n";
         lv = 1;
     }
     if(檢查錯誤){
         cout << "Hp setting error.\n";
         hp = 1;
     }

     Name = name;
     Lv = lv;
     HpCur = HpMax = hp;
    }

    Pokemon::Pokemon(){
     //建構式
    }

    Pokemon::Pokemon(string na, int lv, int hp){
     //重載建構式
    }

    PokemonHealthCenter::PokemonHealthCenter(string na){
     //設定中心的名稱
    }
    void PokemonHealthCenter::Cure(Pokemon &p){
     cout << p.Name << " has restored health at " <<Name << ".\n";
     //回復 p 到滿血
    }
    完成後上傳

    Input Format
    中心名字1
    名字1
    等級1
    血量1
    名字2
    等級2
    血量2

    Output Format
    p1 攻擊 p2
    p2 攻擊 p1 p1 在 pc1 恢復
    p2 在 pc1 恢復
    Pokemon 1資訊(最後換行兩次)
    Pokemon 2資訊(最後換行兩次)

    Sample Input 1
    Viridian City Pokemon Health Center
    Pikachu
    5
    30
    Mewtwo
    30
    300
    Sample Output 1
    Pikachu Attack Mewtwo 5 Points.
    Mewtwo Attack Pikachu 30 Points.
    Pikachu is fainted.
    Pikachu has restored health at Viridian City Pokemon Health Center.
    Mewtwo has restored health at Viridian City Pokemon Health Center.
    Name: Pikachu
    Lv: 5
    HP: 30/30

    Name: Mewtwo
    Lv: 30
    HP: 300/300
    Sample Input 2
    Vermilion City Pokemon Health Center
    Charmander
    90
    700
    Weedle
    -1
    -20
    Sample Output 2
    Lv setting error.
    Hp setting error.
    Charmander Attack Weedle 90 Points.
    Weedle is fainted.
    Weedle is unable to attack.
    Charmander has restored health at Vermilion City Pokemon Health Center.
    Weedle has restored health at Vermilion City Pokemon Health Center.
    Name: Charmander
    Lv: 90
    HP: 700/700

    Name: Weedle
    Lv: 1
    HP: 1/1
 */
#include <iostream>
#include "Pokemon.h"
using namespace std;
 
 
int main()
{
    string pcName1;
    string PokemonName1, PokemonName2;
    int Lv1, Lv2;
    int Hp1, Hp2;
 
    //cin >> pcName1;
    getline(cin, pcName1);
    PC pc1(pcName1);
 
    cin >> PokemonName1 >> Lv1 >> Hp1;
    cin >> PokemonName2 >> Lv2 >> Hp2;
    Pokemon p1(PokemonName1,Lv1,Hp1),
            p2(PokemonName2,Lv2,Hp2);
 
    p1.Attack(p2);
    p2.Attack(p1);
 
    pc1.Cure(p1);
    pc1.Cure(p2);
 
    p1.ShowInfo();
    p2.ShowInfo();
 
    return 0;
}
