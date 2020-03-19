/*
    輸入一字串將其中小寫字串轉成大寫字串
    例如:
    輸入abCdE123
    輸出ABCDE123

    Input Format
    字串(可含空白)

    Output Format
    轉大寫後的字串(無換行)

    Sample Input
    abCdE123
    Sample Output
    ABCDE123
 */

#include <stdio.h>

// islower,toupper
#include <ctype.h>
// strlen
#include <string.h>

#define STRING_LENGTH 120

int main() {
    int i;
    char input[STRING_LENGTH];
    gets(input);
    int len = strlen(input);
    for (i = 0 ; i < len; i ++) {
        if (islower(input[i])) {
            input[i] = toupper(input[i]);
        } else {
            input[i] = input[i];
        }
    }
    puts(input);
    return 0;
}

 
