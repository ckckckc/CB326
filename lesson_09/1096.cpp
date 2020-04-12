/*
    要求:
    設計一類別eCash模擬儲值卡的行為
    私有成員:

    屬性: Money 目前可用金額 公開成員:
    方法: eCash() 建構式 (將Money初始化為0元)
    方法: void store(int m) 儲值 (將m存入Money中)
    方法: void pay(int m) 消費 (將Money消費m元)(提醒: 需判斷目前eCash是否有足夠的金額消費)
    方法: void display() 顯示目前餘額 (將Money輸出於螢幕) 主程式
    輸入’s’: 儲值
    輸入’p’: 消費
    輸入’d’:查詢餘額
    輸入’q’: 離開程式
    範例：http://homepage.ntu.edu.tw/~d02922022/C/Demo/eCash.exe
    (本系統中，不用輸出選單)

    Input Format
    Output Format
    Sample Input
    s
    -100
    s
    300
    p
    400
    p
    -50
    p
    50
    d
    q
    Sample Output
    eCash: Please enter a number > 0.
    eCash: You stored 300.
    eCash: Insufficient balance.
    eCash: Please enter a number > 0.
    eCash: You spend 50.
    eCash: You remaining 250.
    eCash: Thank you. Bye Bye.
 */

#include <iostream>

using namespace std;

const char KEY_SAVE = 's';
const char KEY_PAY = 'p';
const char KEY_LIST = 'd';
const char KEY_QUIT = 'q';

class eCash {
private:
    int Money;
public:
    eCash() {
        Money = 0;
    }
    void store(int m);
    void pay(int m);
    void display();
};

void eCash::store(int m) {
    if (m < 0) {
        cout << "eCash: Please enter a number > 0." << endl;
        return;
    }
    cout << "eCash: You stored " << m << "." << endl;
    Money = Money + m;
}

void eCash::pay(int m) {
    if (m > Money) {
        cout << "eCash: Insufficient balance." << endl;
        return;
    }

    if (m < 0) {
        cout << "eCash: Please enter a number > 0." << endl;
        return;
    }
    cout << "eCash: You spend " << m << "." << endl;
    Money -= m;
}

void eCash::display() {
    cout << "eCash: You remaining " << Money << "." << endl;
}

char getInputCommand();
void handleeCashByCommand(eCash *, char);

int main() {
    char command;
    eCash *eCashInstance = new eCash();

    do {
        command = getInputCommand();

        handleeCashByCommand(eCashInstance, command);
    } while (command != KEY_QUIT);

    return 0;
}

char getInputCommand() {
    char command;
    cin >> command;
    return command;
}

void handleeCashByCommand(eCash *eCashInstance, char command) {
    int money;
    switch (command) {
        case KEY_SAVE: {
            cin >> money;
            eCashInstance->store(money);
            break;
        }
        case KEY_PAY: {
            cin >> money;
            eCashInstance->pay(money);
            break;
        }
        case KEY_LIST: {
            eCashInstance->display();
            break;
        }
        case KEY_QUIT: {
            cout << "eCash: Thank you. Bye Bye." << endl;
            break;
        }
        default: {
            break;
        }
    }
}