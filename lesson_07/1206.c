/*
    輸入一個字串表示檔案的名字。例如 x.txt
    從 x.txt 文字檔中讀一字串到str
    再將其所讀到的字串列印出來
    文字檔中有可能會有空白字元。 如下

    asdfqwer 1234#$%^&*(
    Input Format
    輸入一個字串表示檔案的名字。例如 0.txt \lt br>

    Output Format
    文字檔內容

    Sample Input
    0.txt
    Sample Output
    asdfqwer 1234#$%^&*(
    Hint
    讀檔的路徑為相對目錄中與執行檔的同一資料夾
    輸出到螢幕上的字串，最後無空白字元(除非檔案裡有)
 */

#include <stdio.h>

# define FILE_NAME_LENGTH 144

int main() {
    char fileName[FILE_NAME_LENGTH];
    char letter;
    FILE *file;
    scanf("%s", fileName);
    file = fopen(fileName, "r");
    
    if (file == NULL) {
        printf("file not found\n");
        return 1;
    }

    do {
        fscanf(file, "%c", &letter);
    } while (!feof(file) && printf("%c", letter));
    
    fclose(file);
    return 0;
}
