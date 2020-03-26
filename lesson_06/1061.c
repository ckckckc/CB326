/*
    寫一個計算1+2+3…+n的函式sum1
    Python: def sum1(n):
    C/C++: int sum1(int n);
    最後回傳一整數為1到n加總之和

    Input Format
    數字n

    Output Format
    1加到 n 的總和

    Sample Input
    5
    Sample Output
    15
 */
#include <stdio.h>
#include <stdlib.h>
 
int sum1(int n);
 
int main() {
    int *input = (int*)malloc(sizeof(int)*10);
    scanf("%d", input);
    int result = sum1(*input);
    printf("%d", result);
    free(input);
    return 0;
}
 
int sum1(int n) {
    int i = 0;
    int result = 0;
    for (; i < n + 1; i++) {
        result = result + i;
    }
    return result;
}
