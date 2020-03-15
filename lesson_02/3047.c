/*
 請試著輸入一數字n
 並印出一n*n之*號方塊

 Input Format
 數字n

 Output Format
 長寬為n的*號方塊(*號後含空白)

 Sample Input
 5
 Sample Output
 * * * * *
 * * * * *
 * * * * *
 * * * * *
 * * * * *
 
 */

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int input = 0;
    scanf("%d", &input);
    
    for (int i = 0 ; i < input ; i++) {
        for (int j = 0; j < input; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;

}
