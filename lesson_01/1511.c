/*
    料理大師小當家最近發明了一套新菜餚的煮法。
    那個煮法叫做間斷加熱法。而他打算用這個煮法去比最進的食神大賽。
    間斷加熱法的做法很簡單，他先加熱他的菜餚一分鐘，然後再冷卻一分鐘。就這麽重複做。
    (也可以先冷卻再加熱！)
    已知加熱一分鐘可以使菜餚的溫度提高 X 攝氏度，而冷卻一分鐘會使菜餚溫度下降 Y 攝氏度。
    注意，他的做法的特別之處在於，加熱一分鐘后必須冷卻一分鐘，所以不能連續加熱。
    而烹飪是有時間限制的，所以小當家最多衹有 N 分鐘可以準備他的菜餚。
    以小當家的認知，這道菜餚要越熱越好，所以請問在規定的時間N 内小當家最多可以把菜餚加熱到多少攝氏度呢？
    已知菜餚的起始溫度是 20攝氏度（室溫），而當菜餚的溫度是室溫時冷卻是沒有效果的。

    舉例：
    例子一，N=5 X=10 Y=5
    答案是 40
    步驟：20+10-5+10-5+10=40
    例子二，N=4 X=20 Y=3
    答案是 57 (注：不是 54)
    因爲小當家第一分鐘先冷卻20-0，然後剩下的三分鐘進行間斷加熱 20+20-3+20=57

    Input Format
    輸入三個整數 N,X,Y 0=Y
    N代表比賽的時間
    X代表加熱一分鐘可增加的溫度
    Y代表冷切一分鐘可減少的溫度

    Output Format
    一個整數,小當家在限定時間内可以把菜餚加熱到最高的溫度。
    Sample Input 1
    5 10 5
    Sample Output 1
    40
    Sample Input 2
    4 20 3
    Sample Output 2
    57
    Sample Input 3
    9 100 90
    Sample Output 3
    160
 */

#include <stdio.h>

#define INIT_TEMPERATURE 20

int main() {
    int riseDegree, decreaseDegree, remainingTime;
    int i;
    int currentTemperature = INIT_TEMPERATURE;
    
    scanf("%d%d%d", &remainingTime, &riseDegree, &decreaseDegree);
    
    for(; remainingTime > 0; remainingTime--) {
        currentTemperature = remainingTime % 2 == 0
                           ? currentTemperature - decreaseDegree
                           : currentTemperature + riseDegree;
        if (currentTemperature < INIT_TEMPERATURE) {
            currentTemperature = INIT_TEMPERATURE;
        }
    }
    printf("%d", currentTemperature);
    return 0;
}
