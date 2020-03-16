#include <stdio.h>

#define CLASS_COUNT 2
#define STUDENT_COUNT 3

int main() {
    int i, j, sumPerClass = 0, sumTotal = 0;
    int grades[CLASS_COUNT][STUDENT_COUNT];
    
    for (i = 0; i < CLASS_COUNT; i++) {
        for (j = 0; j < STUDENT_COUNT; j++) {
            scanf("%d", &grades[i][j]);
        }
    }
    
    for (i = 0; i < CLASS_COUNT; i++, sumPerClass = 0) {
        printf("class %d\n", i + 1);
        for (j = 0; j < STUDENT_COUNT; j++) {
            sumPerClass = sumPerClass + grades[i][j];
            printf(" %d: %d\n", j + 1, grades[i][j]);
        }
        sumTotal += sumPerClass;
        printf(" sum: %d\n", sumPerClass);
        printf(" avg: %.2lf\n", (double)sumPerClass/STUDENT_COUNT);
    }
    printf("total: %d, avg: %.2lf", sumTotal, (double)sumTotal/CLASS_COUNT/STUDENT_COUNT);
}
