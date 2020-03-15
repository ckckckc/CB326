/*
 寫個程式，判斷一個人的成績是否及格 (大學部及格分數為60分，研究所為70分)
 令使用者輸入他的學藉及成績用數字表示學藉：

 (1)大學部(2)研究所，並判斷其成績是否及格

 Input Format
 (1)大學部 (2)研究所:
 成績

 Output Format
 pass或fail

 Sample Input
 2
 69
 Sample Output
 fail
 */

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int degree, grade;
    int DEGREE_COLLEGE = 1,
    DEGREE_MASTER = 2;
    scanf("%d%d", &degree, &grade);
    
    if (degree == DEGREE_COLLEGE && grade >= 60 ) {
        printf("pass");
    } else if (degree == DEGREE_MASTER && grade >= 70) {
        printf("pass");
    } else {
        printf("fail");
    }

    return 0;
}
