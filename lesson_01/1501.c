/*
    Bond, 全名James Bond，勵志要當一名間諜。
    通過了重重難關，終於到了他成爲合格間諜前的最後一場考試。
    這場考試是一場通訊考試，Bond和他的隊友必須互相透過暗號交談。
    所以他必須解碼他拿到的暗號來進行分析。
    以下是他和隊友們私下定下來的暗號，他們的暗號是一個號碼 N。
    他們的暗號最後都會解密成 "YES" 或者是 "NO"。
    如果 N 是 7的倍數或者是那個數字裏含有‘7’這個號碼就是 "YES", 反之 "NO"。
    由於隊友傳給 Bond 的號碼太大了，Bond 不能很快速的算出答案，所以他請你來幫他解決這個問題。

    舉例：
    N= 73
    因爲裏面有 7 要輸出 "YES"
    N= 22
    因爲不含有 7 且不是 7 的倍數所以要輸出 "NO"

    Input Format
    輸入一個整數 N (0<N<1000000)。
    Output Format
    如果 N 是 7的倍數或者是含有‘7’這個號碼 就輸出 "YES\n"
    反之就只輸出 "NO\n" 然後結束。
    Sample Input 1
    10
    Sample Output 1
    NO
    Sample Input 2
    28
    Sample Output 2
    YES
    Sample Input 3
    170
    Sample Output 3
    YES
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define CODE_LENGTH 8
#define SECRET_CODE '7'

int main() {
    char codeString[CODE_LENGTH];
    int codeInteger;
    int i, strLen;
    scanf("%s", &codeString);
    codeInteger = atoi(codeString);

    if (codeInteger % 7 == 0) {
        printf("YES");
        return 0;
    }
    strLen = strlen(codeString);
    for (i = 0; i < strLen; i++) {
        if (codeString[i] == SECRET_CODE) {
            printf("YES");
            return 0;
        }
    }
    printf("NO");
    return 0;
}
