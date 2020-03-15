/*
  請輸入2整數m與n
  印出m*n之九九乘法表(每筆輸出後有一空白字元)
  每筆資料的乘數與被乘數都只佔一格
  乘積 佔2格並靠右對齊

  Input Format
  n
  m

  Output Format
  被乘數*乘數=乘積(佔2格並靠右對齊)[空白]

  Sample Input
  5
  8
  Sample Output
  1*1= 1 1*2= 2 1*3= 3 1*4= 4 1*5= 5 1*6= 6 1*7= 7 1*8= 8
  2*1= 2 2*2= 4 2*3= 6 2*4= 8 2*5=10 2*6=12 2*7=14 2*8=16
  3*1= 3 3*2= 6 3*3= 9 3*4=12 3*5=15 3*6=18 3*7=21 3*8=24
  4*1= 4 4*2= 8 4*3=12 4*4=16 4*5=20 4*6=24 4*7=28 4*8=32
  5*1= 5 5*2=10 5*3=15 5*4=20 5*5=25 5*6=30 5*7=35 5*8=40
 */

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int inputMultiplicand, inputMultiplier;
    int i, j;
    scanf("%d%d", &inputMultiplicand, &inputMultiplier);
    
    for (i = 1 ; i <= inputMultiplicand ; i++) {
      for (j = 1 ; j <= inputMultiplier ; j++) {
        printf("%d*%d=%2d ", i, j, i*j);
      }
      printf("\n");
    }
    return 0;
}
