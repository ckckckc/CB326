/*
    請宣告一個整數陣列，內容有5格
    輸入這5格陣列的內容後依序印出

    Input Format
    整數1
    整數2
    整數3
    整數4
    整數5

    Output Format
    整數1(換行)
    整數2(換行)
    整數3(換行)
    整數4(換行)
    整數5(換行)

    Sample Input
    11
    22
    33
    44
    55
    Sample Output
    11
    22
    33
    44
    55
 */

#include <stdio.h>
#define ARRAY_LENGTH 5

int main() {
    int i;
    int result[ARRAY_LENGTH];
    for (i = 0; i < ARRAY_LENGTH; i++) {
        scanf("%d", &result[i]);
    }
    for (i = 0; i < ARRAY_LENGTH; i++) {
        printf("%d\n", result[i]);
    }
    return 0;
}
