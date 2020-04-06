/*
    製作一個通訊錄程式
    功能

    輸入’i’ 可輸入姓名, 電話, email
    輸入’l’ 印出目前輸入所有人員之內容
    輸入’s’ 輸入檔名, 將所有人員之內容存入檔案
    輸入’o’ 輸入檔名, 將所有人員之內容從檔案讀出
    輸入’c’ 恢復原廠設定, 清除所有內容 (將程式回復到如同剛開啟的狀態)
    輸入’q’ 離開程式
    輸入之人數上限為50人 參考範例:
    Addressbook.exe

    (上圖為參考用，批改系統中不需出現選單)
    Sample Input
    i
    John
    0937889965
    john@ntu.edu.tw
    i
    May
    0945625874
    may@ntu.edu.tw
    s
    phonebook.txt
    c
    o
    phonebook.txt
    l
    q
    Sample Output
    Name: John
    Phone: 0937889965
    Email: john@ntu.edu.tw
    Name: May
    Phone: 0945625874
    Email: may@ntu.edu.tw
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _AddressInfo {
    int id;
    char name[50];
    char phone[15];
    char email[50];
}AddressInfo;

#define MAX_DATA_COUNT 50
#define MAX_FILE_NAME_LENGTH 120
#define MAX_DATA_LENGTH 1024

#define KEY_INSERT 'i'
#define KEY_LIST 'l'
#define KEY_SAVE 's'
#define KEY_OPEN_FILE 'o'
#define KEY_CLEAR 'c'
#define KEY_QUIT 'q'

#define CSV_COLUMN_SEPARATOR ","
#define INDEX_ADDRESS_ID 0
#define INDEX_ADDRESS_NAME 1
#define INDEX_ADDRESS_PHONE 2
#define INDEX_ADDRESS_EMAIL 3

char getInputCommand(void);
void doCommandByInput(char command, AddressInfo[]);
void initializeAddressBook(AddressInfo[]);
void insertAddressBook(AddressInfo[]);
void listAddressBook(AddressInfo[]);
void saveAddressBook(AddressInfo[]);
void openAddressBook(AddressInfo[]);
void loadAddress(AddressInfo[], int, int, char *);

int main() {
    char input;
    AddressInfo addressBook[MAX_DATA_COUNT];
    initializeAddressBook(addressBook);

    do {
        input = getInputCommand();
        if (input != KEY_QUIT) {
            doCommandByInput(input, addressBook);
        }
    } while (input != KEY_QUIT);

    return 0;
}

void initializeAddressBook(AddressInfo addressBook[]) {
    int i;
    for (i = 0; i < MAX_DATA_COUNT ; i++) {
        strcpy(addressBook[i].name, "");
        strcpy(addressBook[i].phone, "");
        strcpy(addressBook[i].email, "");
        addressBook[i].id = 0;
    }
}

char getInputCommand() {
    char input;
    printf("i: 插入\nl: 列出\ns: 存檔\no: 讀檔\nc: 還原\nq: 結束\n");
    scanf(" %c", &input);
    return input;
}

void insertAddressBook(AddressInfo addressBook[]) {
    int i;
    for (i = 0; i < MAX_DATA_COUNT; i++) {
        if (addressBook[i].id == 0) {
            scanf("%s%s%s", addressBook[i].name, addressBook[i].phone, addressBook[i].email);
            addressBook[i].id = i + 1;
            return;
        }
    }
}

void listAddressBook(AddressInfo addressBook[]) {
    int i;
    for (i = 0 ; i < MAX_DATA_COUNT ; i++) {
        if (addressBook[i].id == 0) {
            return;
        }
        printf("Name: %s\nPhone: %s\nEmail: %s\n", addressBook[i].name, addressBook[i].phone, addressBook[i].email);
    }
}

void saveAddressBook(AddressInfo addressBook[]) {
    int i;
    FILE *file;
    char fileName[MAX_FILE_NAME_LENGTH];

    scanf("%s", fileName);

    file = fopen(fileName, "w");
    for (i = 0; i < MAX_DATA_COUNT; i++) {
        if (addressBook[i].id == 0) {
            break;
        }
        fprintf(file, "%d,%s,%s,%s\n", addressBook[i].id, addressBook[i].name, addressBook[i].phone, addressBook[i].email);
    }
    fclose(file);
}

void loadAddress(AddressInfo addressBook[],int indexRow,int indexColumn,char *data) {
    switch (indexColumn) {
        case INDEX_ADDRESS_ID: {
            addressBook[indexRow].id = atoi(data);
            break;
        }
        case INDEX_ADDRESS_NAME: {
            strcpy(addressBook[indexRow].name, data);
            break;
        }
        case INDEX_ADDRESS_PHONE: {
            strcpy(addressBook[indexRow].phone, data);
            break;
        }
        case INDEX_ADDRESS_EMAIL: {
            strcpy(addressBook[indexRow].email, data);
            break;
        }
        default: {
            break;
        }
    }
}

void openAddressBook(AddressInfo addressBook[]) {
    FILE *file;
    char fileName[MAX_FILE_NAME_LENGTH];

    int indexAddressRow = 0, indexAddressColumn = 0;
    char rowData[MAX_DATA_LENGTH];
    char *pch;

    scanf("%s", fileName);

    file = fopen(fileName, "r");

    if (file == NULL) {
        printf("file name: %s is not found\n", fileName);
        exit(1);
    }

    initializeAddressBook(addressBook);

    do {
        fscanf(file, "%s", rowData);
        if (feof(file)) {
            break;
        }

        pch = strtok(rowData, CSV_COLUMN_SEPARATOR);

        while (pch != NULL) {
            loadAddress(addressBook, indexAddressRow, indexAddressColumn, pch);
            pch = strtok(NULL, CSV_COLUMN_SEPARATOR);
            indexAddressColumn++;
        }
        indexAddressColumn = 0;
        indexAddressRow++;
    } while (1);

    fclose(file);
}

void doCommandByInput(char command, AddressInfo addressBook[]) {
    switch (command) {
        case KEY_INSERT: {
            insertAddressBook(addressBook);
            break;
        }
        case KEY_LIST: {
            listAddressBook(addressBook);
            break;
        }
        case KEY_SAVE: {
            saveAddressBook(addressBook);
            break;
        }
        case KEY_OPEN_FILE: {
            openAddressBook(addressBook);
            break;
        }
        case KEY_QUIT: {
            break;
        }
        case KEY_CLEAR: {
            initializeAddressBook(addressBook);
            break;
        }
        default: {
            break;
        }
    }
}
