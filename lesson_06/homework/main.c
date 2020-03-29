#include <stdio.h>

#include "prime.h"

int main() {
    int number;
     scanf("%d", &number);
    if (IsPrime(number)) {
        printf("%d is prime\n", number);
    } else {
        printf("%d is not prime\n", number);
    }
    return 0;
}
