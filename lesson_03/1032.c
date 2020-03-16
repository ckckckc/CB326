/*
     輸入五個整數, 印出從小到大的結果
     例如：
     輸入：34 12 5 66 1
     輸出：1 5 12 34 66 (每個數字後都須加一空白)

     Input Format
     整數1 整數2 整數3 整數4 整數5

     Output Format
     順序印出(每個數字後都須加一空白，印完換行)

     Sample Input
     34 12 5 66 1
     Sample Output
     1 5 12 34 66
 */

#include <stdio.h>
 
#define INPUT_COUNT 5

int main() {
    int i, j, tmp;
    int numbers[INPUT_COUNT];
    
    for (i = 0; i < INPUT_COUNT; i++) {
        scanf("%d", &numbers[i]);
    }

    for (i = 0; i < INPUT_COUNT - 1; i++) {
        for (j = i + 1; j < INPUT_COUNT; j++) {
            if (numbers[j] < numbers[i]) {
                tmp = numbers[j];
                numbers[j] = numbers[i];
                numbers[i] = tmp;
            }
        }
    }

    for (i = 0 ; i < INPUT_COUNT; i++) {
        printf("%d ", numbers[i]);
    }
}
