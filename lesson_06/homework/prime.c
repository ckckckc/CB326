#include "prime.h"
#include <math.h>

int IsPrime(int number) {
    double maxPrime = sqrt(number);
    int i;
    for (i = 2; i < maxPrime ; i++) {
        if (number%i == 0) {
            return 0;
        }
    }
    return 1;
}
