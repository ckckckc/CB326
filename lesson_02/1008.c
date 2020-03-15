/*
 請輸入一任意位數的數字，並將每一位的數字加總後印出，例如：
 n = 1234567
 ans = 1+2+3+4+5+6+7 = 28

 Input Format
 一個整數

 Output Format
 一個整數(含換行)

 Sample Input 1
 1234567
 Sample Output 1
 28
 Sample Input 2
 12345
 Sample Output 2
 15
 */

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int input = 0, result = 0;

    scanf("%d", &input);
    
    while (input > 0) {
        result = result + input % 10;
        input /= 10;
    }
    
    printf("%d", result);

    return 0;
}
