/*
    設計一個Pokemon結構包含下列成員：

    char Name[100]: 名字
    int Lv: 等級
    int Hp: 血量
    使用Pokemon 結構宣告一結構陣列 並輸入3筆Pokemon料後印出等級最高的Pokemon

    Input Format
    名字1
    等級1
    血量1
    名字2
    等級2
    血量2
    名字3
    等級3
    血量3

    Output Format
    等級最高的 Pokemon 1資訊(換行一次)
    ....

    Sample Input
    Mewtwo
    30
    300
    Pikachu
    10
    50
    HelloKitty
    50
    500
    Sample Output
    Name: HelloKitty
    Lv: 50
    HP: 500
 */
#include <stdio.h>

#define STRUCTOR_LENGTH 3

typedef struct _Pokemon
{
    char Name[100];
    int Lv;
    int Hp;
} Pokemon;


int main() {
    int i, indexOfHighestLevel = 0;
    Pokemon pokemons[STRUCTOR_LENGTH];
    
    for (i = 0;i < STRUCTOR_LENGTH; i ++) {
        scanf("%s", pokemons[i].Name);
        scanf("%d", &pokemons[i].Lv);
        scanf("%d", &pokemons[i].Hp);
        if (pokemons[i].Lv > pokemons[indexOfHighestLevel].Lv) {
            indexOfHighestLevel = i;
        }
    }
    
    printf("Name: %s\n", pokemons[indexOfHighestLevel].Name);
    printf("Lv: %d\n",   pokemons[indexOfHighestLevel].Lv);
    printf("HP: %d\n",   pokemons[indexOfHighestLevel].Hp);
}
