/*
    撰寫一個程式，先從鍵盤輸入三個整數，然後顯示此三個整數的總和、平均值、乘積、最小值和最大值。螢幕的對話過程應該如下所述。

    Input Format
    整數1
    整數2
    整數3

    Output Format
    總和
    平均
    積
    最小值
    最大值

    Sample Input
    13
    27
    14
    Sample Output
    sum is 54
    average is 18.00
    product is 4914
    smallest is 13
    largest is 27
 */
#include <stdio.h>

int main() {
    int input1, input2, input3, smallest, largest;
    int sum;
    double average;
    scanf("%d%d%d", &input1, &input2, &input3);

    smallest = input1;
    largest = input1;
    sum = input1 + input2 + input3;
    average = sum / 3;
    
    if (input2 < smallest) {
        if (input3 < input2) {
            smallest = input3;
        } else {
            smallest = input2;
        }
    } else if (input3 < smallest) {
        smallest = input3;
    }
    
    if (input2 > largest) {
        if (input3 > input2) {
            largest = input3;
        } else {
            largest = input2;
        }
    } else if (input3 > largest) {
        largest = input3;
    }
    
    printf("sum is %d\n", sum);
    printf("average is %.2lf\n", average);
    printf("product is %d\n", input1 * input2 * input3);
    printf("smallest is %d\n", smallest);
    printf("largest is %d", largest);
}

