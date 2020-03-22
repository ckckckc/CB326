#include <stdio.h>
#include <string.h>

#define STRING_LENGTH 5

int main() {
    char answer[STRING_LENGTH];
    char guess[STRING_LENGTH] = "0000\0";
    int correctA = 0, correctB = 0;
    int i, j;

    scanf("%s", &answer);

    while (strcmp(answer, guess) != 0) {
        scanf("%s", &guess);
        for (i = 0, correctA = 0, correctB = 0; i < STRING_LENGTH - 1 ; i++) {
            for (j = 0; j < STRING_LENGTH - 1 ; j++) {
                if (guess[i] == answer[j]) {
                    i == j ? ++correctA : ++correctB;
                }
            }
        }
        printf("%dA%dB\n", correctA, correctB);
    }

    printf("You Win!");

    return 0;
}
