#include <stdio.h>

int main(int argc, char *argv[]) {
	double input1, input2;
    scanf("%lf", &input1);
    scanf("%lf", &input2);
    printf("%.2lf + %.2lf = %.2lf\n", input1, input2, input1 + input2);
    printf("%.2lf - %.2lf = %.2lf\n", input1, input2, input1 - input2);
    printf("%.2lf * %.2lf = %.2lf\n", input1, input2, input1 * input2);
    printf("%.2lf / %.2lf = %.2lf\n", input1, input2, input1 / input2);
}
