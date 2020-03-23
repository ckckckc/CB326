/*
    宣告一陣列A，長度為5
    使用一指標P存取此陣列 ex:「*(P+i)」
    讓使用者輸入5個數字，並找到最大值與最大值的位置

    Input Format
    整數1 整數2 整數3 整數4 整數5

    Output Format
    最大值的位置(從1起算)與值

    Sample Input
    40 60 50 10 20
    Sample Output
    2: 60
 */

#include <stdio.h>

#define ARRAY_LENGTH 5

int main() {
    int a[ARRAY_LENGTH], *p;
    int max, indexMax, i;
    p = &a;
    
    scanf("%d%d%d%d%d", p, (p+1), (p+2), (p+3), (p+4));
    max = *p;
    indexMax = 0;
    for (i = 0 ; i < ARRAY_LENGTH; i++) {
        if (*(p + i) > max) {
            max = *(p + i);
            indexMax = i;
        }
    }
    printf("%d: %d", indexMax + 1, *(p + indexMax));
    return 0;
}

