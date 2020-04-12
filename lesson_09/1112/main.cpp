/*
    設計一個Square類別包含下列成員：

    屬性(公開)：

    int len; 邊長
    方法 (公開)：

    int area(); 計算面積
    使用Square類別宣告兩個邊長為10與20的物件,並印出它們的面積

    本題已幫你準備好 main.cpp
    main.cpp

    #include<iostream>
    #include "square.h"
    using namespace std;

    int main()
    {
     Square s1,s2;
     int n1,n2;
     cin >> n1 >> n2;
     s1.len = n1;
     s2.len = n2;

     cout << "s1 len=" << s1.len << ", area="<<s1.area()<<endl;
     cout << "s2 len=" << s2.len << ", area="<<s2.area()<<endl;
     return 0;
    }
    請完成square.cpp與square.h後上傳

    square.h

    class Square
    {
    //...
    };
    square.cpp

    int Square::area()
    {
    //...
    }
    完成後上傳 example file

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
    Hint
    每個.cpp檔都必須當作一獨立之程式，有用到任何的函式庫都必須使用#include 引用進來。
    .cpp檔之中有定義函式或是方法請務必引用其prototype(原型)所在的*.h標頭檔。
    若有用到cout、cin及string務必注意名稱空間std的問題。
*/

#include<iostream>
#include "square.h"
using namespace std;
 
int main()
{
    Square s1,s2;
    int n1,n2;
    cin >> n1 >> n2;
    s1.len = n1;
    s2.len = n2;
 
    cout << "s1 len=" << s1.len << ", area="<<s1.area()<<endl;
    cout << "s2 len=" << s2.len << ", area="<<s2.area()<<endl;
    return 0;
}
