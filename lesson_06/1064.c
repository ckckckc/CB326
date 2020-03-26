/*
    寫一個計算123…*n的n!函式fact
    Python: def fact(n):
    C/C++: int fact(int n);
    最後回傳一整數為n階乘的結果

    Input Format
    數字n

    Output Format
    1乘到 n 的總和

    Sample Input
    5
    Sample Output
    120
 */
#include <stdio.h>

int fact(int n);

int main() {
    int input;
    scanf("%d", &input);
    int result = fact(input);
    printf("%d", result);
    return 0;
}

int fact(int n) {
    int i = 1;
    int result = 1;
    for (; i < n + 1; i++) {
        result = result * i;
    }
    return result;
}
