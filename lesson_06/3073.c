/*
    請試寫一function 可同時回傳 n! 與 Σ 1~n
    並改成即使呼叫時不加入引數也不會錯誤(令n為0)
    python: def return2num(n=0)並回傳一tuple，此tuple中有兩個整數分別為n階與1加到n的結果。
    C/C++: void return2num(int n, int *factRst, int *sumRst);

    Input Format
    n

    Output Format
    n!
    Σ 1~n

    Sample Input
    5
    Sample Output
    120
    15
    Hint
    若n為0時
    1加到n 結果為 0
    n! 結果為 1
    函式的回傳值順序須和題目要求一致，階乘的結果為[0]，累加的結果為[1]
 */

#include <stdio.h>

void return2num(int, int*, int*);
int factorial(int);
int sum(int);

int main() {
    int n,factRst, sumRst;
    scanf("%d", &n);
    return2num(n, &factRst, &sumRst);
    printf("%d\n%d", factRst, sumRst);
    return 0;
}

void return2num(int n, int *factRst, int *sumRst) {
    *factRst = factorial(n);
    *sumRst = sum(n);
}

int factorial(int n) {
    int i, result = 1;
    if (n == 0) {
        return 1;
    }

    for (i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int sum(int n) {
    int i, result = 0;
    if (n == 0) {
        return 0;
    }

    for (i = 1 ; i <= n; i++) {
        result += i;
    }
    return result;
}
