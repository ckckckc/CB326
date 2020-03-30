/*
    設計一個Pokemon結構包含下列成員：

    char Name[100]: 名字
    int Lv: 等級
    int Hp: 血量
    使用Pokemon 結構宣告兩個結構實體並印出它們的資訊

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

struct Pokemon
{
    char Name[100];
    int Lv;
    int Hp;
};

int main() {
    struct Pokemon pokemon1;
    struct Pokemon pokemon2;
    
    scanf("%s", pokemon1.Name);
    scanf("%d", &pokemon1.Lv);
    scanf("%d", &pokemon1.Hp);
    
    scanf("%s", pokemon2.Name);
    scanf("%d", &pokemon2.Lv);
    scanf("%d", &pokemon2.Hp);
    
    printf("Name: %s\n", pokemon1.Name);
    printf("Lv: %d\n", pokemon1.Lv);
    printf("HP: %d\n\n", pokemon1.Hp);
    
    printf("Name: %s\n", pokemon2.Name);
    printf("Lv: %d\n", pokemon2.Lv);
    printf("HP: %d\n\n", pokemon2.Hp);
}
