/*
  製作一個簡單的計算機
  功能

  連續輸入兩個數字，以空白鍵或換行分開
  再輸入＋,－,＊,／ 任一鍵(不需要判斷除以0之情況)
  按下Enter後算出結果 (顯示小數點後兩位)

  Input Format
  數字1
  數字2
  運算符號

  Output Format
  輸出結果

  Sample Input
  5.1
  2.3
  /
  Sample Output
  5.10 / 2.30 = 2.22
 */


#include <stdio.h>

int main(int argc, const char * argv[]) {
  double input_num1, input_num2;
  char input_operator;

  scanf("%lf%lf %c", &input_num1, &input_num2, &input_operator);

  switch (input_operator) {
    case '+':
      printf("%.2lf + %.2lf = %.2lf", input_num1, input_num2, input_num1 + input_num2);
      break;
    case '-':
      printf("%.2lf - %.2lf = %.2lf", input_num1, input_num2, input_num1 - input_num2);
      break;
    case '*':
      printf("%.2lf * %.2lf = %.2lf", input_num1, input_num2, input_num1 * input_num2);
      break;
    case '/':
      printf("%.2lf / %.2lf = %.2lf", input_num1, input_num2, input_num1 / input_num2);
      break;
  }

  return 0;
}