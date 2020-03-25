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
