/*
 n!
 使使用者輸入一數字n
 算出n階乘的結果

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

int main(int argc, const char * argv[]) {
    int maxLoop = 0, result = 1;
    scanf("%d", &maxLoop);
    
    for (int i = 1; i <= maxLoop; i++) {
        result = result * i;
    }
    
    printf("%d", result);
    return 0;
}
