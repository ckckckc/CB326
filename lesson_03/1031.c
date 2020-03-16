/*
    輸入班上3位同學分數, 求出它們的平均值
    印出不及格的同學之號碼與分數(若無不及格的同學也會印出fail:)
    印出其中最高分同學之分數

    Input Format
    整數1 整數2 整數3

    Output Format
    分數平均
    不及格的同學之號碼與分數
    最高分同學之號碼(從1起算)與分數

    Sample Input
    40 60 50
    Sample Output
    avg = 50.00
    fail:
    1: 40
    3: 50
    highest:
    2: 60
 */
#include <stdio.h>

#define INPUT_COUNT 3

int main() {
    int i, highestNumber, highestGrade;
    int grades[INPUT_COUNT];
    double sum = 0;

    for (i = 0; i < INPUT_COUNT; i++) {
        scanf("%d", &grades[i]);
        sum = sum + grades[i];
    }

    printf("avg = %.2lf\n", (double)sum / INPUT_COUNT);
    printf("fail:\n");
    
    for (i = 0, highestGrade = grades[i], highestNumber = i + 1; i < INPUT_COUNT; i++) {
        if (grades[i] < 60) {
            printf("%d: %d\n", i + 1, grades[i]);
        }
        
        if (grades[i] > highestGrade) {
            highestGrade = grades[i];
            highestNumber = i + 1;
        }
    }
    printf("highest:\n%d: %d", highestNumber, highestGrade);
}
