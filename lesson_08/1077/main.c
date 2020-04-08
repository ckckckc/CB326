/*
    設計一個Pokemon結構包含下列成員：

    char Name[100]: 名字
    int Lv: 等級
    int Hp: 血量
    並設計二專屬函式輸入與顯示其資訊 void InputData(struct Pokemon *); 輸入資訊 void ShowInfo(struct Pokemon); 顯示資訊

    使用Pokemon 結構宣告兩個結構實體並印出它們的資訊

    本題已幫你準備好 main.c如下：

    #include <stdio.h>
    #include "pokemon.h"
    
    int main()
    {
        struct Pokemon p1,p2;
    
        InputData(&p1);
        InputData(&p2);
    
        ShowInfo(p1);
        ShowInfo(p2);
    
        return 0;
    }
    請完成 pokemon.h 和 pokemon.c 後上傳
    pokemon.h

    struct Pokemon
    {
        //...
    };
    
    void InputData(struct Pokemon *);
    void ShowInfo(struct Pokemon);
    pokemon.c

    //...
    void InputData(struct Pokemon *p){
        //...
    }
    void ShowInfo(struct Pokemon p){
        //...
    }
    Input Format
    名字1
    等級1
    血量1
    名字2
    等級2
    血量2

    Output Format
    Pokemon 1資訊(換行二次)
    Pokemon 2資訊(換行二次)

    Sample Input
    Mewtwo
    30
    300
    Pikachu
    10
    50
    Sample Output
    Name: Mewtwo
    Lv: 30
    HP: 300
    
    Name: Pikachu
    Lv: 10
    HP: 50
 */

#include <stdio.h>
#include "pokemon.h"
 
int main()
{
    struct Pokemon p1,p2;
 
    InputData(&p1);
    InputData(&p2);
 
    ShowInfo(p1);
    ShowInfo(p2);
 
    return 0;
}
