/*
    連續輸入N個字串(-1結束不含-1)，並將其存入陣列/容器後，將字串中小寫英文字母轉成大寫後依順序印出

    Input Format
    字串1(可含空白)
    字串...(可含空白)
    字串N(可含空白)
    -1

    Output Format
    轉大寫後的字串1(換行)
    轉大寫後的字串...(換行)
    轉大寫後的字串N(換行)

    Sample Input
    abCdE123
    abc qqq
    cde
    -1
    Sample Output
    ABCDE123
    ABC QQQ
    CDE
    Hint
    本題輸出與輸出可以交錯如下：

    [input ]abCdE123
    [output]ABCDE123
    [input ]abc qqq
    [output]ABC QQQ
    [input ]cde
    [output]CDE
    [input ]-1
*/

#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_STRING_LENGTH 120

int main() {
    char input[MAX_STRING_LENGTH];
    int i, inputLength;
    gets(input);
    while(strcmp(input, "-1") != 0) {
        inputLength = strlen(input);
        for (i = 0 ; i < inputLength ; i++) {
            if (islower(input[i])) {
                input[i] = toupper(input[i]);
            }
            printf("%c", input[i]);
        }
        printf("\n");
        gets(input);
    }

    return 0;
}