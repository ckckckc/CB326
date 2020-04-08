#include <stdio.h>
#include "pokemon.h"

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
