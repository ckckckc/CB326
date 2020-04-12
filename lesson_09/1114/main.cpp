/*
    設計一個Square類別包含下列成員：
    令物件實體不能存取其屬性
    新增建構式、重載建構與解構式式如下：

    屬性(私有)：

    int len; 邊長
    方法 (公開)：

    Square(): 建構式, 將邊長設為0
    Square( int n ): 建構式, 將邊長設為n
    (需判斷邊長值的正確性，如不得小於1)，若不正確輸出len setting error並將其設定為1
    int area(); 計算面積
    void setLen(int n); 設定邊長 (需判斷邊長值的正確性)
    int getLen(); 取得邊長
    使用Square類別宣告三個邊長為10、20與不給初始值的物件,並印出它們邊長與面積

    本題已幫你準備好 main.c
    main.c

    #include<iostream>
    #include "square.h"
    using namespace std;
    
    int main()
    {
        int n1,n2;
        cin >> n1 >> n2;
        Square s1(n1),s2(n2),s3;
    
        cout << "s1 len=" << s1.getLen() << ", area="<<s1.area()<<endl;
        cout << "s2 len=" << s2.getLen() << ", area="<<s2.area()<<endl;
        cout << "s3 len=" << s3.getLen() << ", area="<<s3.area()<<endl;
        return 0;
    }
    請完成square.cpp與square.h後上傳

    square.h

    class Square
    {
    //...
    };
    square.cpp

    Square::Square()
    {
    //...
    }
    Square::Square(int n)
    {
    //...
    }
    int Square::area()
    {
    //...
    }
    int Square::getLen()
    {
    //...
    }
    void Square::setLen(int n)
    {
    //...
    }
    Input Format
    正方形邊長1
    正方形邊長2

    Output Format
    正方形1 邊長 面積
    正方形2 邊長 面積

    Sample Input
    10
    20
    Sample Output
    s1 len=10, area=100
    s2 len=20, area=400
    s3 len=0, area=0
*/

#include<iostream>
#include "square.h"
using namespace std;
 
int main()
{
    int n1,n2;
    cin >> n1 >> n2;
    Square s1(n1);
    Square s2(n2);
    Square s3;
 
    cout << "s1 len=" << s1.getLen() << ", area="<<s1.area()<<endl;
    cout << "s2 len=" << s2.getLen() << ", area="<<s2.area()<<endl;
    cout << "s3 len=" << s3.getLen() << ", area="<<s3.area()<<endl;
    return 0;
}
