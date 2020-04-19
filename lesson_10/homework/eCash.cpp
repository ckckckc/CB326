#include <iostream>

using namespace std;

const char KEY_SAVE = 's';
const char KEY_PAY = 'p';
const char KEY_LIST = 'd';
const char KEY_QUIT = 'q';

class eCash {
private:
    int Money;
    string ID;
public:
    eCash();
    void login(string);
    void logout();
    void store(int m);
    void pay(int m);
    void display();
};

eCash::eCash() {
    Money = 0;
}

void eCash::login(string id) {
    ID = id;
    FILE *file = fopen(ID.c_str(), "r");

    if (file != NULL) {
        fscanf(file, "%d", &Money);
        cout << "eCash: 帳號開啟完成!" << endl << endl;
    } else {
        cout << "eCash: 帳號不存在, 第一次使用!" << endl << endl;
    }
    fclose(file);
}

void eCash::logout() {
    FILE *file;
    file = fopen(ID.c_str(), "w");
    fprintf(file, "%d", Money);
    fclose(file);
    cout << "eCash: 帳號已登出, 已存檔!" << endl;
}

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

char getInputCommand(string);
void handleeCashByCommand(eCash *, char);

int main() {
    char command;
    string ID;
    eCash *eCasher = new eCash();
    cout << "=== 歡迎使用eCash ===" << endl;
    cout << "eCash: 請輸入您的帳號: ";
    cin >> ID;
    eCasher->login(ID);
    do {
        command = getInputCommand(ID);

        handleeCashByCommand(eCasher, command);
    } while (command != KEY_QUIT);

    return 0;
}

char getInputCommand(string id) {
    char command;
    cout << id << "您好，請選擇項目:" << endl
         << "s: 儲值"          << endl
         << "p: 消費"          << endl
         << "d: 查詢餘額"      << endl
         << "q: 離開"          << endl
         << ">";
    cin >> command;
    return command;
}

void handleeCashByCommand(eCash *eCasher, char command) {
    int money;
    string anyKey;
    switch (command) {
        case KEY_SAVE: {
            cout << "請輸入儲存金額:" << endl;
            cin >> money;
            eCasher->store(money);
            break;
        }
        case KEY_PAY: {
            cout << "請輸入消費金額:" << endl;
            cin >> money;
            eCasher->pay(money);
            break;
        }
        case KEY_LIST: {
            eCasher->display();
            break;
        }
        case KEY_QUIT: {
            eCasher->logout();
            cout << "謝謝，ByeBye!" << endl;
            break;
        }
        default: {
            break;
        }
    }

    system("pause");
    system("cls");
}
