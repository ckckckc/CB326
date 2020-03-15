/*
    輸入一個金額1~99999整數, 印中文大寫數字金額
    中文大寫1~9: 壹,貳,參,肆,伍,陸,柒,捌,玖
    需要印出單位: 萬,仟,佰,拾
    不需輸出"零"
    最後要印出"元整"
    輸入錯誤數值範圍,顯示「out of range」後程式直接結束
    輸入輸出格式 (請不要印出輸入提示文字「請輸入金額：」等文字)

    Input Format
    一整數n

    Output Format
    結果

    Sample Input
    12345
    Sample Output
    壹萬貳仟參佰肆拾伍元整
 */
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int inputNumber;
    int unit, ten, hundred, thousand, tenThousans;
    int MAX_DIGIT = 10000, MAX_NUMBER = 99999;
    int currentDigit, currentNumber;
    scanf("%d", &inputNumber);
    
    if (inputNumber <=0 || inputNumber > MAX_NUMBER) {
        printf("out of range");
        return 0;
    }

    for (currentDigit = MAX_DIGIT ; currentDigit > 0; currentDigit /= 10) {
      currentNumber = inputNumber / currentDigit;
      inputNumber = inputNumber - currentNumber * currentDigit;
      if (currentNumber == 0 && currentDigit > 1) {
        continue;
      }
      switch (currentNumber) {
        case 1:
            printf("壹");
            break;
        case 2:
            printf("貳");
            break;
        case 3:
            printf("參");
            break;
        case 4:
            printf("肆");
            break;
        case 5:
            printf("伍");
            break;
        case 6:
            printf("陸");
            break;
        case 7:
            printf("柒");
            break;
        case 8:
            printf("捌");
            break;
        case 9:
            printf("玖");
            break;
      }

      switch (currentDigit) {
        case 10000:
            printf("萬");
            break;
        case 1000:
            printf("仟");
            break;
        case 100:
            printf("佰");
            break;
        case 10:
            printf("拾");
            break;
        case 1:
            printf("元整");
            break;
      }
    }

    return 0;
}
