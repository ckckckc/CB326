/*
    設計一個Pokemon結構包含下列成員：

    char Name[100]: 名字
    int Lv: 等級
    int Hp: 血量
    使用Pokemon 結構宣告一結構陣列 並輸入3筆Pokemon料後，令使用者輸入一數字n
    並印出「等級」在n以上的Pokemon資訊
    若是沒有任何符合條件的pokemon，則需印出not found

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
    數字n

    Output Format
    等級n以上的 Pokemon 1資訊(換行二次)
    等級n以上的 Pokemon 2資訊(換行二次)
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
    30
    Sample Output
    Name: Mewtwo
    Lv: 30
    HP: 300

    Name: HelloKitty
    Lv: 50
    HP: 500
 */
#include <stdio.h>
#include <stdbool.h>

#define STRUCTOR_LENGTH 3

struct _Pokemon
{
    char Name[100];
    int Lv;
    int Hp;
};

typedef struct _Pokemon Pokemon;

int main() {
    int i, pickedLevel;
    bool hasPickedPokemon = false;
    Pokemon pokemons[STRUCTOR_LENGTH];
    
    for (i = 0;i < STRUCTOR_LENGTH; i ++) {
        scanf("%s", pokemons[i].Name);
        scanf("%d", &pokemons[i].Lv);
        scanf("%d", &pokemons[i].Hp);
    }
    
    scanf("%d", &pickedLevel);
    for (i = 0 ; i < STRUCTOR_LENGTH; i++) {
        if (pokemons[i].Lv >= pickedLevel) {
            printf("Name: %s\n", pokemons[i].Name);
            printf("Lv: %d\n", pokemons[i].Lv);
            printf("HP: %d\n\n", pokemons[i].Hp);
            hasPickedPokemon = true;
        }
    }
    
    if (!hasPickedPokemon) {
        printf("not found");
    }
}
