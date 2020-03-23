
#include <stdio.h>
#include <stdlib.h>

// TODO
int main() {
    int COUNT_STUDENT, i, j, k, indexHighestScore;
    double sum;
    scanf("%d", &COUNT_STUDENT);

    int *scores = (int *)malloc(sizeof(int)*COUNT_STUDENT);
    int *failScoreIndex = (int *)malloc(sizeof(int)*COUNT_STUDENT);

    for (i = 0 ; i < COUNT_STUDENT ; i++) {
        scanf("%d", (scores + i));
    }

//    memset(scores, 0, sizeof(int)*COUNT_STUDENT);

    for (i = 0, j = 0, indexHighestScore = 0, sum = 0 ; i < COUNT_STUDENT; i++) {
        if (*(scores + i) > *(scores + indexHighestScore)) {
            indexHighestScore = i;
        }
        sum += *(scores + i);

        if (*(scores + i) < 60) {
            *(failScoreIndex + j) = i;
            j++;
        }
    }

    printf("avg = %.2lf\n", (double)sum/COUNT_STUDENT);

    if (j != 0) {
        printf("fail:\n");
        for (k = 0; k < j; k++) {
            printf("%d: %d\n", *(failScoreIndex + k), *(failScoreIndex + k));
        }
    }
    printf("highest:\n%d: %d", indexHighestScore, scores[*(scores + indexHighestScore)]);
    free(scores);
    free(failScores);
    return 0;
}
