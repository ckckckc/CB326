/*
    請宣告一個整數陣列，內容有5格
    輸入這5格陣列的內容後
    依序印出陣列內容(整數數字)後空一tab(\t)印出該數字個數個*號

    Input Format
    整數1
    整數2
    整數3
    整數4
    整數5

    Output Format
    整數1(tab間隔)整數1個*號(換行)
    整數2(tab間隔)整數2個*號(換行)
    整數3(tab間隔)整數3個*號(換行)
    整數4(tab間隔)整數4個*號(換行)
    整數5(tab間隔)整數5個*號(換行)

    Sample Input
    5
    3
    2
    1
    7
    Sample Output
    5    *****
    3    ***
    2    **
    1    *
    7    *******
 */
#include <stdio.h>

int main() {
    int arr[3][4] = { 0,1,3,4,5};
    printf("%d\n", arr[0][0]);
    printf("%d\n", arr[0][1]);
    printf("%d\n", arr[0][2]);
    printf("%d\n", arr[0][3]);
    printf("%d\n", arr[1][0]);
    printf("%d\n", arr[1][1]);
    printf("%d\n", arr[1][2]);
    printf("%d\n", arr[1][3]);
    printf("%d\n", arr[2][0]);
    printf("%d\n", arr[2][1]);
    printf("%d\n", arr[2][2]);
    printf("%d\n", arr[2][3]);
    return 0;
}