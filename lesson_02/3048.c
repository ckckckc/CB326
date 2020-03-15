/*
	請試著輸入一數字n並印出一三角形

	Input Format
	數字n
	
	Output Format
	高為n的*號三角形
	
	Sample Input
	5
	Sample Output
	*
	**
	***
	****
	*****
 */
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int inputHeight = 0;
    int i, j;
    scanf("%d", &inputHeight);
    
    for (i = 0 ; i < inputHeight ; i++) {
      for (j = 0 ; j <= i ; j++) {
        printf("\*");
      }
      printf("\n");
    }
    return 0;
}
