#include <stdio.h>

int main(int argc, char *argv[]) {
    char name[50];
    int age;
    char sex[32];
	  scanf("%s%d%s", &name, &age, &sex);
    printf("Name:%s\nAge:%d\nGender:%s", name, age, sex);
    return 0;
}
