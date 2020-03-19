/*
    基本運算

    說明
    阿宅今年已經單身21年了，單生的魔咒他怎麽樣都打不破。
    但他沒有因此感到氣餒，他任然對愛情有信心，希望有一天能遇到對的那個她(他，它？)。
    阿宅的好朋友被阿宅的精神所感動，於是他就買了一部如何擺脫單身的教學影片給阿宅。
    (一片好像要一千多塊錢，真是搶劫! 這不是重點)。
    於是阿宅努力的開始認真學習。由於影片很長，而有不少資訊其實阿宅很早就知道了，
    所以他打算直接用遙控器快轉到重點部分。
    已知，片的重點從影片的第L秒開始，而現在阿宅在影片的第S秒。
    已知阿宅按一次快轉會快轉5秒，而如果超過了第L秒阿宅就需要倒帶,按倒帶一次會回去前2秒。
    PS:如果現在阿宅在1秒，但是他要按倒帶的話，會不成功,因爲影片沒有負數秒。所以那次的操作不算。
    請問阿宅需要最少按幾次才能到達第L秒呢？已知按遙控器時影片時暫停的。

    舉例：
    假設重點在第 L=8 秒開始，而阿宅在 第 S=4 秒，
    阿宅按快轉一次，到9秒，倒帶一次到第7秒。在快轉一次到第12秒，最後倒掉兩次到第8秒。
    所以阿宅最少需要按5次才會到重點

    Input Format
    輸入兩個整數 L，S代表重點的秒數和阿宅現在在第幾秒, 0

    Output Format
    一個整數，阿宅最少需要按多少次才能到重點，
    Sample Input 1
    8 4
    Sample Output 1
    5
    Sample Input 2
    10 0
    Sample Output 2
    2
    Sample Input 3
    21 27
    Sample Output 3
    3
 */
#include <stdio.h>

#define STEP_FORWARD 5
#define STEP_BACKWARD 2

int main() {
    int destination, currentPosition, countMoving = 0;
    scanf("%d%d", &destination, &currentPosition);
    
    while (destination != currentPosition) {
        if (currentPosition < destination) {
            currentPosition += STEP_FORWARD;
        } else {
            currentPosition -= STEP_BACKWARD;
        }
        countMoving++;
    }
    printf("%d", countMoving);
}

