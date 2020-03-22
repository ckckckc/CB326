/*
    王老先生有塊地（yi~ya~yi~ya~oh~）
    王老先生在他那塊土地上養了許多的動物。
    有一天王老先生一醒來發現雞和兔子的籠子之間破了一個洞。
    導致雞和兔子的籠子相通了，所以他們互相亂串。
    這下可麻煩了，王老先生算不到他們的數量，所以他要求你來幫他的忙。
    由於王老先生視力衰退，所以衹能夠算到這兩個籠子裏一共有多少個頭和多少只脚。
    所以要你來判斷裏面一共有多少只雞和兔子。
    已知王老先生養的每一只動物都是健康的，所以每隻雞都有2只脚，每隻兔子都有4只脚。
    由於王老先生視力衰退，所以有時候也會有看錯的情況，如果看錯了就輸出 "NO" ,反之"YES" (都是大寫)

    舉例：
    現在王老先生看到5個頭，14只脚，
    所以雞就有3只，兔子有2只。
    如果王老先生看到的數量無解，就輸出 "NO"

    Input Format
    輸入兩個整數 N，M代表頭的數量和脚的數量, 1

    Output Format
    如果有解就輸出 "YES\n"
    然後輸出兩個整數代表雞和兔子的數量。
    記得兩個數字之間有空格，輸出兔子數量后沒有空格直接換行。
    反之就只輸出 "NO\n" 然後結束。
    Sample Input 1
    4 10
    Sample Output 1
    YES
    3 1
    Sample Input 2
    5 13
    Sample Output 2
    NO
    Sample Input 3
    8 30
    Sample Output 3
    YES
    1 7
 */

#include <stdio.h>

int main() {
    int rabbits = 0, chickens = 0;
    int totalHeads = 0, totalFoots = 0;
    scanf("%d%d", &totalHeads, &totalFoots);
    for (rabbits = 0 ; rabbits < totalHeads; rabbits++) {
        for (chickens = totalHeads - rabbits; chickens < totalHeads ; chickens++) {
            if ((rabbits + chickens ==  totalHeads) && (4*rabbits + 2*chickens == totalFoots)) {
                printf("YES\n%d %d", chickens, rabbits);
                return 0;
            }
        }
    }
    printf("NO");
    return 0;
}
