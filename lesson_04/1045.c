/*
    使用者可以輸入一字元並讓程式判斷此字元是大寫或是小寫英文字母、數字或是其它標點符號。
    如果使用者輸入的是小寫英文字母的話，就將其轉大寫後輸出為swap to capital letter X.

    Input Format
    字元

    Output Format
    判斷結果
    x is a number.
    x is a capital letter.
    x is a punctuation.

    x is a lowercase letter.
    swap to capital letter x.


    Sample Input 1
    G
    Sample Output 1
    G is a capital letter.
    Sample Input 2
    q
    Sample Output 2
    q is a lowercase letter.
    swap to capital letter Q.
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
        printf("%c is a %s.\n", input, "lowercase letter");
        printf("swap to capital letter %c.", (input - 32));
    } else {
        printf("%c is a %s.", input, "punctuation");
    }
    return 0;
}

