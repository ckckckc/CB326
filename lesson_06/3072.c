/*
    排列組合應用
    從n個相異物中不重覆取出m個之組合數
    定義一函式為def C(n,m):並回傳一整數
    公式如下： Cmn=nCm=(nm)=nPmm!=n!m!(n−m)!
    Input Format
    n
    m

    Output Format
    組合數

    Sample Input
    10
    2
    Sample Output
    45
 */
#include <stdio.h>

int fact(int n);

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    int result = fact(n)/fact(m)/fact(n - m);
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
