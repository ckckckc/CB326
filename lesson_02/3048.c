/*
	�иյۿ�J�@�Ʀrn�æL�X�@�T����

	Input Format
	�Ʀrn
	
	Output Format
	����n��*���T����
	
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
