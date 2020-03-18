/*
    假定某班有5位學生，每位學生各修3門科目，請利用二維陣列的方式儲存學生的各科成績，並將每位學生的各科成績、總分及平均列印出來，並按照找出班上最平均高分的學生。

    Input Format
    學生1的3科成績
    學生2的3科成績
    ...
    學生5的3科成績

    Output Format
    學生1
    科目成績1 科目成績2 科目成績3
    總分
    平均
    ...
    學生5
    科目成績1 科目成績2 科目成績3
    總分
    平均(小數點後2位)
    班總分 校平均(含換行)
    平均最高分的學生與平均分數(小數點後2位)

    Sample Input
    76 73 85
    88 84 76
    92 82 92
    82 91 85
    72 74 73
    Sample Output
    student 1
    1: 76
    2: 73
    3: 85
    sum: 234
    avg: 78.00
    student 2
    1: 88
    2: 84
    3: 76
    sum: 248
    avg: 82.67
    ....
    student 5
    1: 72
    2: 74
    3: 73
    sum: 219
    avg: 73.00
    total: 1225, avg: 81.67
    highest avg: student 3: 88.67
 */
#include <stdio.h>

#define STUDENT_COUNTS 5
#define SUBJECT_COUNTS 3

int main() {
    int grades[STUDENT_COUNTS][SUBJECT_COUNTS];
    int sumPerStudent = 0, sumTotal = 0;
    int highestAverageStudentId;
    double highestAverageGrade, currentAverage;
    int i, j, currentGrade;

    for (i = 0 ; i < STUDENT_COUNTS ; i ++) {
        for (j = 0 ; j < SUBJECT_COUNTS ; j++) {
            scanf("%d", &grades[i][j]);
        }
    }

    for (i = 0 ; i < STUDENT_COUNTS ; i ++) {
        printf("student %d\n", i + 1);
        for (j = 0 ; j < SUBJECT_COUNTS ; j++) {
            currentGrade = grades[i][j];
            printf(" %d: %d\n", j + 1, currentGrade);
            sumPerStudent = sumPerStudent + currentGrade;
        }
        currentAverage = (double)sumPerStudent / SUBJECT_COUNTS;
        sumTotal = sumTotal + sumPerStudent;
        printf(" sum: %d\n", sumPerStudent);
        printf(" avg: %.2lf\n", (double)sumPerStudent/SUBJECT_COUNTS);
        
        if (currentAverage > highestAverageGrade) {
            highestAverageGrade = currentAverage;
            highestAverageStudentId = i + 1;
        }
        sumPerStudent = 0;
    }
    printf("total: %d, avg: %.2lf\n", sumTotal, (double)sumTotal/STUDENT_COUNTS/SUBJECT_COUNTS);
    printf("highest avg: student %d: %.2lf", highestAverageStudentId, highestAverageGrade);
    return 0;
}
