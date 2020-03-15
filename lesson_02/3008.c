/*
 令使用者輸入一大於0的整數n
 算出1加到n的結果

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

int main(int argc, const char * argv[]) {
    int maxLoop = 0, result = 0;
    scanf("%d", &maxLoop);
    
    for (int i = 0; i <= maxLoop; i++) {
        result = result + i;
    }
    
    printf("%d", result);
    return 0;
}
