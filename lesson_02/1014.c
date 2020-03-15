/*
 令使用者輸入一大於0的整數n
 算出1加到n的結果

 Input Format
 數字n

 Output Format
 1+2+3+…+n = 結果

 Sample Input
 5
 Sample Output
 1+2+3+4+5 = 15
 */

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int maxLoop = 0, result = 0;
    scanf("%d", &maxLoop);

    for (int i = 1; i <= maxLoop; i++) {
        result = result + i;
        if (i < maxLoop) {
            printf("%d+", i);
        } else {
            printf("%d", i);
        }
    }
    printf(" = %d", result);
    return 0;
}
