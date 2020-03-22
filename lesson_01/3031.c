/*
    打(Dozen)是日常生活中常用的單字，為英制單位代表12個。
    如：1打雞蛋等同於12顆雞蛋。
    會被使用是因為生活中便於分配的結果，12可以被1,2,3,4,6整除；而10只能被1,2,5整除。

    今天令使用者輸入一個整數(int)，我們將數字轉換成打(Dozen)。
    例如：25 = 2 dozen and 1

    Input Format
    整數(int)

    Output Format
    ? dozen and ?
    或
    ? dozen

    Sample Input 1
    25
    Sample Output 1
    2 dozen and 1
    Sample Input 2
    24
    Sample Output 2
    2 dozen
    Hint
    1.dozen後面不用複數s
    2.注意輸出格式，每個單字之間只有一個空格且輸出最尾端無空格。
 */

#include <stdio.h>

int main() {
    int input;
    int dozen;
    int remainder;

    scanf("%d", &input);

    dozen = input / 12;
    remainder = input % 12;

    if (remainder == 0){
        printf("%d dozen", dozen);
    } else {
        printf("%d dozen and %d", dozen, remainder);
    }
}
