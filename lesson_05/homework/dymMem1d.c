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
