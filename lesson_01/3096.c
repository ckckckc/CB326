/*
    在平面座標X、Y上，A、B、C三點的位置分別為(a,b)、(c,d)、(e,f)。
    若要計算A與B兩點距離，其公式為：

    而這三個點的直線可以圍成一個三角形
    請利用海龍公式(Heron's formula)計算出三角形的面積。
    公式如下：

    Input Format
    int/float int/float
    int/float int/float
    int/float int/float
    (輸入為三行，每行各兩個整數或浮點數，且中間以空格隔開）

    Output Format
    三角形面積 (四捨五入至小數點後二位，就算是整數也要至小數點第二位）
    (請在列印出三角形面積時再四捨五入，不要再算三邊的長度時就四捨五入)

    Sample Input 1
    0 0
    3 0
    0 4
    Sample Output 1
    6.00
    Sample Input 2
    1 2
    4 6
    7 8
    Sample Output 2
    3.00
    Sample Input 3
    0 0
    3 0
    4 0
    Sample Output 3
    0.00
    Sample Input 4
    1 1
    2 2
    10 10
    Sample Output 4
    0.00
    *注意：此題三點共線，海龍公式可能會跑出錯誤，但必須處理讓三點共線列印出0.00
*/
#include <stdio.h>
#include <math.h>

#define COUNT_POINTS 3
#define COUNT_DIMENSIONS 2

int main() {
    int i, j, k;
    double points[COUNT_POINTS][COUNT_DIMENSIONS];
    double lineLengths[COUNT_POINTS];

    for (i = 0 ; i < COUNT_POINTS ; i++) {
        for (j = 0 ; j < COUNT_DIMENSIONS ; j++) {
            scanf("%lf", &points[i][j]);
        }
    }

    double sumOfSquare = 0, perimeter = 0;
    for (i = 0 ; i < COUNT_POINTS - 1 ; i++) {
        for (j = i + 1 ; j < COUNT_POINTS ; j++, sumOfSquare = 0) {
            for (k = 0 ; k < COUNT_DIMENSIONS; k++) {
                sumOfSquare = sumOfSquare + pow(points[i][k] - points[j][k], 2);
            }
            lineLengths[i + j - 1] = sqrt(sumOfSquare);
            perimeter = perimeter + lineLengths[i + j - 1]/2;
        }
    }

    double product = perimeter;
    for (i = 0 ; i < COUNT_POINTS ; i++) {
        product = product * (perimeter - lineLengths[i]);
    }

    if (product == 0) {
        printf("0.00");
    } else {
        printf("%.2lf", round(sqrt(product)*100)/100);
    }

    return 0;
}