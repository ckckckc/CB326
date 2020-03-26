/*
    排列組合應用
    從n個相異物中不重覆取出m個之排列數
    定義一函式為def P(n,m):並回傳一整數
    公式如下：
    Pmn=nPm=n!(n−m)!=n(n−1)(n−2)...(n−m+1)
    Input Format
    n
    m

    Output Format
    排列數

    Sample Input
    10
    2
    Sample Output
    90
 */

#include <stdio.h>

int fact(int n);

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    int result = fact(n)/fact(n - m);
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
