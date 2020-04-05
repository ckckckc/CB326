#include <stdio.h>
#include <stdbool.h>

#define COUNT_EMPLOYEES 3

typedef struct _Employee {
    char Name[20];
    char Phone[11];
    int id;
} Employee;

int main() {
    bool isFoundId = false;
    int i, findingId;
    Employee employees[COUNT_EMPLOYEES];

    for (i = 0; i < COUNT_EMPLOYEES; i++) {
        scanf("%s%s%d", employees[i].Name, employees[i].Phone, &employees[i].id);
    }
    scanf("%d", &findingId);

    for (i = 0; i < COUNT_EMPLOYEES; i++) {
        if (employees[i].id == findingId) {
            isFoundId = true;
            printf("found\n");
            printf("Name: %s\nPhone: %s\nId: %d", employees[i].Name, employees[i].Phone, employees[i].id);
        }
    }

    if (!isFoundId) {
        printf("not found");
    }
    return 0;
}