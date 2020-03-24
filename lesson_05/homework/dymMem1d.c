/*
    使用者先輸入一班有幾個學生，再一一輸入學生的考試成績
    求出它們的平均值
    印出不及格的同學之號碼與分數(若無不及格的同學也會印出fail:)
    印出其中最高分同學之分數 (若有多筆最高分同分者，請列出索引值最小的)

    Input Format
    幾個學生
    整數1 整數2 整數3

    Output Format
    分數平均
    不及格的同學之號碼與分數
    最高分同學之號碼與分數

    Sample Input
    3
    40 60 50
    Sample Output
    avg = 50.00
    fail:
    1: 40
    3: 50
    highest:
    2: 60
    Hint
    注意各班資料的縮排(空白)
    C/C++答題注意：

    請用動態記憶體配置，否則無法通過本題
    最後一筆測資若是直接加總會超過整數的範圍
    所以要算平均的話可先讓分數除以總學生人數後再加總
    注意資料型態空間夠大，並盡量縮小誤差
*/


#include <stdio.h>
#include <stdlib.h>

int main() {
    int COUNT_STUDENT, i, j, k, indexHighestScore;
    double sum;
    int *scores;
    int *failScoreIndexes;

    scanf("%d", &COUNT_STUDENT);

    scores = (int*)malloc(sizeof(int)*COUNT_STUDENT);
    failScoreIndexes = (int*)malloc(sizeof(int) * COUNT_STUDENT);

    for (i = 0 ; i < COUNT_STUDENT ; i++) {
        scanf("%d", (scores + i));
    }

    for (i = 0, j = 0, indexHighestScore = 0, sum = 0 ; i < COUNT_STUDENT; i++) {
        if (*(scores + i) > *(scores + indexHighestScore)) {
            indexHighestScore = i;
        }
        sum += *(scores + i);

        if (*(scores + i) < 60) {
            *(failScoreIndexes + j) = i;
            j++;
        }
    }

    printf("avg = %.2lf\n", (double)sum/COUNT_STUDENT);
    printf("fail:\n");

    for (k = 0; k < j; k++) {
        printf("%d: %d\n", *(failScoreIndexes + k) + 1, scores[*(failScoreIndexes + k)]);
    }

    printf("highest:\n%d: %d", indexHighestScore + 1, scores[indexHighestScore]);
    free(scores);
    free(failScoreIndexes);
    return 0;
}
