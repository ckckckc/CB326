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
        cout << "eCash: 請輸入大於0的金額" << endl;
        return;
    }
    cout << "eCash: 您存了" << m << "元" << endl;
    Money = Money + m;
}

void eCash::pay(int m) {
    if (m > Money) {
        cout << "eCash: 您的錢不夠" << endl;
        return;
    }

    if (m < 0) {
        cout << "eCash: 請輸入大於0的金額" << endl;
        return;
    }
    cout << "eCash: 您花了 " << m << "元" << endl;
    Money -= m;
}

void eCash::display() {
    cout << "eCash: 您尚有" << Money << "元" << endl;
}

char getInputCommand();
void handleeCashByCommand(eCash *, char);

int main() {
    char command;
    eCash *eCashInstance = new eCash();
    cout << "=== 歡迎使用eCash ===" << endl << endl;
    do {
        command = getInputCommand();

        handleeCashByCommand(eCashInstance, command);
    } while (command != KEY_QUIT);

    return 0;
}

char getInputCommand() {
    char command;
    cout << "您好，請選擇項目:" << endl
         << "s: 儲值"          << endl
         << "p: 消費"          << endl
         << "d: 顯示餘額"      << endl
         << "q: 離開"          << endl
         << ">";
    cin >> command;
    return command;
}

void handleeCashByCommand(eCash *eCashInstance, char command) {
    int money;
    switch (command) {
        case KEY_SAVE: {
            cout << "請輸入儲存金額:" << endl;
            cin >> money;
            eCashInstance->store(money);
            break;
        }
        case KEY_PAY: {
            cout << "請輸入消費金額:" << endl;
            cin >> money;
            eCashInstance->pay(money);
            break;
        }
        case KEY_LIST: {
            eCashInstance->display();
            break;
        }
        case KEY_QUIT: {
            cout << "謝謝，ByeBye!" << endl;
            break;
        }
        default: {
            break;
        }
    }
}
