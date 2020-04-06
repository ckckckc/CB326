/*
    請撰寫一程式令
    使用C++動態記憶體配置
    令使用者輸入陣列大小ex:5
    使用泡沫排序法排序
    印出從小到大排序的結果
    例如：
    輸入：gad dd cde zoo abc
    輸出：abc cde dd gad zoo

    Input Format
    字串1 字串2 字串3 字串4 字串5

    Output Format
    順序印出(印完換行)

    Sample Input
    5
    gad dd cde zoo abc
    Sample Output
    abc cde dd gad zoo
    Hint
    若是已完成排序即可停止迴圈增進執行效率，加速完成排序。
 */

#include <cstdio>
#include <iostream>

int main(int argc, const char * argv[]) {
    int bubbleCounts;
    std::cin >> bubbleCounts;

    std::string *bubbles = new std::string[bubbleCounts];
    std::string tmp;
    int i, j;
    
    for (i = 0 ; i < bubbleCounts; i++) {
        std::cin >> bubbles[i];
    }
    
    bool needSorted = false;
    for (i = 0 ; i < bubbleCounts - 1 ; i++) {
        needSorted = false;
        for (j = i + 1 ; j < bubbleCounts ; j++) {
            if (bubbles[j] < bubbles[i]) {
                tmp = bubbles[i];
                bubbles[i] = bubbles[j];
                bubbles[j] = tmp;
                needSorted = true;
            }
            
            if (bubbles[j] < bubbles[j - 1]) {
                needSorted = true;
            }
        }
        if (!needSorted) {
            break;
        }
    }
    
    for (i = 0 ; i < bubbleCounts; i++) {
        printf("%s ", bubbles[i].c_str());
    }
    std::cout << std::endl;
    
    delete[] bubbles;
    return 0;
}
