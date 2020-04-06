/*
    請撰寫一程式令
    使用C++動態記憶體配置
    令使用者輸入陣列大小ex:5
    使用泡沫排序法排序
    印出從小到大排序的結果
    例如：
    輸入：34 12 5 66 1
    輸出：1 5 12 34 66

    Input Format
    整數1 整數2 整數3 整數4 整數5

    Output Format
    順序印出(印完換行)

    Sample Input
    5
    34 12 5 66 1
    Sample Output
    1 5 12 34 66
    Hint
    若是已完成排序即可停止迴圈增進執行效率，加速完成排序，
    可在排序時若在從頭到尾檢查完整列陣列時，都沒有發現要交換的對像時，就結束排序。
 */

#include <cstdio>
#include <iostream>

int main(int argc, const char * argv[]) {
    int bubbleCounts;
    std::cin >> bubbleCounts;

    int *bubbles = new int[bubbleCounts];
    int i, j, tmp;
    
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
        printf("%d ", bubbles[i]);
    }
    std::cout << std::endl;
    
    delete[] bubbles;
    return 0;
}
