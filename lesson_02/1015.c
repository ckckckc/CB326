/*
  輸入鍵盤按鍵輸入一字元後，立即印出你所輸入的字元，直到輸入q後程式結束(q也要印出來)。

  Input Format
  字元1
  字元2
  ... q

  Output Format
  字元1
  字元2
  ... q

  Sample Input
  a
  d
  h
  d
  h
  j
  3
  5
  %
  ^
  #
  q
  Sample Output
  a
  d
  h
  d
  h
  j
  3
  5
  %
  ^
  #
  q
 */

#include <stdio.h>

int main(int argc, char const *argv[])
{
  char input;

  while (input != 'q') {
    scanf("%c", &input);
    printf("%c", input);
  }

  return 0;
}