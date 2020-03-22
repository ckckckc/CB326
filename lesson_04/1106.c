/*
    輸入四位不重覆數字 (0~9), 做為電腦的題目
    輸入四位不重覆數字 (0~9), 做為您猜的答案
    不需檢查使用者輸入之格式
    當輸入之答案與題目相同, 程式結束(輸出：You Win!)
    遊戲規則
    電腦的題目: 1234 您猜的數字: 5283
    結果為 1A1B 表示您共猜對了兩位數，其中有一個字位置對，另一個字位置不對
    其中，A 表示猜對一個字且位置也對，B 表示猜對一個字但是位置不對。

    (上圖為示意，不用輸出Please enter guess，格式以sample為準)
    Input Format
    四位數字的答案
    四位數字猜的數字.....
    四位數字猜的數字.....
    四位數字猜的數字.....

    Output Format
    幾A幾B

    Sample Input
    1234
    1324
    1564
    1111
    8146
    9999
    1234
    Sample Output
    2A2B
    2A0B
    1A0B
    0A2B
    0A0B
    4A0B
    You Win!
 */
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
