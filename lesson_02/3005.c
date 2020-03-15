/**
    令使用者輸入成績
    並判斷其成績是否及格(60分及格)

    Input Format
    成績

    Output Format
    pass或fail
 */

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int grade;
    scanf("%d", &grade);
    
    if (grade >= 60)
        printf("pass");
    else
        printf("fail");
    return 0;
}
