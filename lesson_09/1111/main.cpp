/*
    設計一個Pokemon類別，使其可以攜帶跟初始等級(Lv)一樣多的物品
    包含下列成員：
    使用Pokemon 類別宣告2個物件
    使用建構式建立其初始資料
    使用解構式在將其刪除前顯示刪除訊息
    新增建構式、重載建構與解構式式如下：


    屬性 (私有)：

    string Name: 名字
    int Lv: 等級
    int HpMax: 最大血量
    int HpCur: 現存血量 (HpCurrent)
    string *items; 儲存物品的動態陣列的指標
    int itemNum; 已經儲存物品的數量，初始為0
    方法 (公開)：

    Pokemon() :建構式
    初始化 pokemon 為Name = No Name, Lv=1, Hp皆 = 1
    並進行動態記憶體配置，使其可以儲存跟初始等級(Lv)一樣多的物品
    Pokemon(string name, ...): 重載建構式
    設定初化建構式，並檢查參數合理性，同setData
    並進行動態記憶體配置，使其可以儲存跟初始等級(Lv)一樣多的物品
    ~Pokemon() :解構式
    於記憶體釋放時執行，並顯示 "xxx has returned to the nature."
    並釋放items
    void ShowInfo(): 顯示資訊，並新增顯示所擁有的物品，每一項物品後包含一空白字元
    void Attack(Pokemon &Target): 攻擊(並判斷其合理性)
    若攻擊方或被攻擊方血量已歸0的話，便不能攻擊
    void Defence( int n ): 防御(並判斷其合理性)
    若被攻擊超過剩餘血量，使血量不可為負數，最低為0
    void Cure(): 治癒
    void setData(string name, int lv, int hp): 設定其資料 (並判斷其合理性)
    name不得為空、空白或是標點符號，若是須提示"Name can't be empty."並設定為"No Name"
    lv不得小於1，若小於1，須提示"Lv setting error."並設定為1
    hp不得小於1，若小於1，須提示"Hp setting error."並設定為1
    void addItem(string Item);新增擁有的物品(記得要讓已經儲存物品的數量+1)
    寶可夢身上的Items滿了的時候要印出"XXX is full, cannot carry XXX."
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
        string Name, Item;
        int lv, hp;
    
        cin >> Name >> lv >> hp;
        Pokemon *p = new Pokemon(Name,lv,hp);
        cin >> Item;
        p->addItem(Item);
        cin >> Item;
        p->addItem(Item);
        cin >> Item;
        p->addItem(Item);
        p->ShowInfo();
        delete p;
    
        cin >> Name >> lv >> hp;
        Pokemon p1(Name,lv,hp);
        cin >> Item;
        p1.addItem(Item);
        cin >> Item;
        p1.addItem(Item);
        cin >> Item;
        p1.addItem(Item);   
        p1.ShowInfo();
    
        return 0;
    }
    Pokemon.h已幫你準備好如下：

    #include <iostream>
    using namespace std;
    
    
    class Pokemon
    {   
    public:   
        Pokemon();
        Pokemon(string na, int lv, int hp);
        ~Pokemon();
        void addItem(string item);
        void ShowInfo();
        void Attack(Pokemon &tg);
        void Defence(int atkp);
        void Cure();
    
    private:
        void setData(string na, int lv, int hp);
        string Name;
        int Lv;
        int HpMax;
        int HpCur;
        string *items;
        int itemNum;
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
    物品1-1 物品1-2 物品1-3
    名字2
    等級2
    血量2
    物品2-1 物品2-2 物品2-3

    Output Format
    動態 Pokemon 1 資訊
    手動釋放 Pokemon 1
    Pokemon 2資訊
    Pokemon 3資訊
    自動釋放 Pokemon 3
    自動釋放 Pokemon 2

    Sample Input 1
    Pikachu
    5
    30
    ItemA ItemB ItemC
    Mewtwo
    30
    300
    ItemD ItemE ItemF
    Sample Output 1
    Name: Pikachu
    Lv: 5
    HP: 30/30
    Items: ItemA ItemB ItemC
    
    Pikachu has returned to the nature.
    Name: Mewtwo
    Lv: 30
    HP: 300/300
    Items: ItemD ItemE ItemF
    
    Mewtwo has returned to the nature.
    Sample Input 2
    Charmander
    90
    700
    ItemA ItemB ItemC
    Weedle
    -1
    -20
    ItemD ItemE ItemF
    Sample Output 2
    Name: Charmander
    Lv: 90
    HP: 700/700
    Items: ItemA ItemB ItemC
    
    Charmander has returned to the nature.
    Lv setting error.
    Hp setting error.
    Weedle is full, cannot carry ItemE.
    Weedle is full, cannot carry ItemF.
    Name: Weedle
    Lv: 1
    HP: 1/1
    Items: ItemD
    
    Weedle has returned to the nature.
 */

#include <iostream>
#include "Pokemon.h"
 
using namespace std;
 
using namespace std;
 
int main()
{
    string Name, Item;
    int lv, hp;
 
    cin >> Name >> lv >> hp;
    Pokemon *p = new Pokemon(Name,lv,hp);
    cin >> Item;
    p->addItem(Item);
    cin >> Item;
    p->addItem(Item);
    cin >> Item;
    p->addItem(Item);
    p->ShowInfo();
    delete p;
 
    cin >> Name >> lv >> hp;
    Pokemon p1(Name,lv,hp);
    cin >> Item;
    p1.addItem(Item);
    cin >> Item;
    p1.addItem(Item);
    cin >> Item;
    p1.addItem(Item);   
    p1.ShowInfo();
 
    return 0;
}
