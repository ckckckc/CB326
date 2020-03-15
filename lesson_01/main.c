#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num;
	
	// scanf("%d", &num);
	// printf("%d\n", num);
	// printf("%%c 是文字 %c \n", 'B');
	printf("%%s 是字串 %s \n", "字串內容");
	// printf("%%d 是整數 %d \n", 8);
	printf("%%f 是小數 float %05.2f \n", 0.123456789123456789123456789123456789);
	printf("%%lf 是小數 double %05.2lf \n", 0.123456789123456789123456789123456789);
	printf("%1d \n", 123);
	return 0;
}