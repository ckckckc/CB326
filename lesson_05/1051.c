/*
    動態配置m班，每班n人
    輸入m班上n位同學分數後
    印出各班總分、平均
    及全校總分、平均

    Input Format
    m班
    n人
    班1成績1 成績2 成績3
    班2成績1 成績2 成績3

    Output Format
    班1
    成績1 成績2 成績3
    班平均
    班2
    成績1 成績2 成績3
    班平均
    校平均(含換行)

    Sample Input
    2
    3
    70 80 90
    50 60 70
    Sample Output
    class 1
    1: 70
    2: 80
    3: 90
    avg: 80.00
    class 2
    1: 50
    2: 60
    3: 70
    avg: 60.00
    avg: 70.00
    Hint
    注意各班資料的縮排(空白)
    請用動態記憶體配置，否則無法通過本題
    最後二筆測資若是直接加總會超過整數(int)的範圍
    所以要算平均的話可先讓分數除以總學生人數後再加總
    請用雙倍精度浮點數，單精度的誤差太大
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int countClass, countStudents;
    double** grades;
    int i, j;
    double averagePerClass = 0;
    double averageTotal = 0;
    scanf("%d%d", &countClass, &countStudents);

    grades = (double**)malloc(sizeof(double*)*countClass);

    for (i = 0 ; i < countClass ; i++) {
        *(grades + i) = (double*)malloc(sizeof(double)*countStudents);
    }

    for (i = 0 ; i < countClass ; i++) {
        for (j = 0 ; j < countStudents ; j++) {
            scanf("%lf", &*(*(grades + i) + j));
        }
    }

    for (i = 0 ; i < countClass ; i++, averagePerClass = 0) {
        printf("class %d\n", i + 1);
        for (j = 0 ; j < countStudents ; j++) {
            printf(" %d: %.lf\n", j + 1, *(*(grades + i) + j));
            averagePerClass = averagePerClass + *(*(grades + i) + j)/countStudents;
        }
        printf(" avg: %.2lf\n", averagePerClass);
        averageTotal = averageTotal + averagePerClass/countClass;
    }
    printf("avg: %.2lf", averageTotal);

    for (i = 0 ;i < countClass; i++) {
        free(*(grades + i));
    }
    free(grades);
    return 0;
}
