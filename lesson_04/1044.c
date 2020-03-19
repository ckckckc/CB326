/*
    說明
    使用者可以輸入一字元c，並讓程式判斷此字元是大寫或是小寫英文字母、數字或是其它標點符號。

    Input Format
    字元c

    Output Format
    判斷結果:
    x is a number.
    x is a capital letter.
    x is a lowercase letter.
    x is a punctuation.

    Sample Input
    G
    Sample Output
    G is a capital letter.
 */

#include <stdio.h>

int main() {
    char input;
    scanf("%c", &input);
    
    if (input >= 48 && input <= 57) {
        printf("%c is a %s.", input, "number");
    } else if (input >= 65 && input <= 90) {
        printf("%c is a %s.", input, "capital letter");
    } else if (input >= 97 && input <= 122) {
        printf("%c is a %s.", input, "lowercase letter");
    } else {
        printf("%c is a %s.", input, "punctuation");
    }
}

