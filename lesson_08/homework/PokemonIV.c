#include <stdio.h>

struct Pokemon
{
    char Name[100];
    int Lv;
    int Hp;
};

void InputData(struct Pokemon *pokemon) {
    scanf(" %s",  (*pokemon).Name);
    scanf(" %d", &(*pokemon).Lv);
    scanf(" %d", &(*pokemon).Hp);
}

void ShowInfo(struct Pokemon pokemon) {
    printf("Name: %s\n", pokemon.Name);
    printf("Lv: %d\n",   pokemon.Lv);
    printf("HP: %d\n\n",   pokemon.Hp);
}

int main()
{
    struct Pokemon p1,p2;
 
    InputData(&p1);
    InputData(&p2);
 
    ShowInfo(p1);
    ShowInfo(p2);
 
    return 0;
}
