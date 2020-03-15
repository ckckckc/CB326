/*
 寫個程式，判斷一個人的成績是否及格
 (大學部及格分數為60分，研究所為70分)
 令使用者輸入學藉與成績
 若是學藉使用者輸入的不是1或是2便輸出錯誤訊息並結束程式
 若是分數使用者輸入的不是介於0~100便輸出錯誤訊息並結束程式
 若以上輸入皆正確就判斷其成績是否及格並輸出

 Input Format
 學藉 (1:大學部 2:研究所)
 成績

 Output Format
 若學藉有錯誤就輸出roll error
 若分數有錯誤就輸出score error
 若皆正確就輸出pass或fail

 Sample Input 1
 2
 69
 Sample Output 1
 fail
 Sample Input 2
 3
 Sample Output 2
 roll error
 Sample Input 3
 2
 200
 Sample Output 3
 score error
 Sample Input 4
 1
 60
 Sample Output 4
 pass
 */

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int degree, grade;
    int DEGREE_COLLEGE = 1,
    DEGREE_MASTER = 2;
    scanf("%d", &degree);
    
    if (degree != DEGREE_COLLEGE && degree != DEGREE_MASTER) {
        printf("roll error");
        return 0;
    }
    
    scanf("%d", &grade);
    
    if (grade < 0 || grade > 100) {
        printf("score error");
        return 0;
    }
    
    if (degree == DEGREE_COLLEGE && grade >= 60 ) {
        printf("pass");
    } else if (degree == DEGREE_MASTER && grade >= 70) {
        printf("pass");
    } else {
        printf("fail");
    }

    return 0;
}
