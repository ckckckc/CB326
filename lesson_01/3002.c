#include <stdio.h>

int main(int argc, char *argv[]) {
    int input, digit_thousand, digit_hundred,
		digit_ten, digit_unit;
	
	scanf("%d", &input);
	digit_unit = input % 10;
	input /= 10;
	digit_ten = input % 10;
	input /= 10;
	digit_hundred = input % 10;
	input /= 10;
	digit_thousand = input % 10;
    printf("%d", digit_unit + digit_ten + digit_hundred + digit_thousand);
    return 0;
}
