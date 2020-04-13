/*
    以下範例實作一個Point2D類別
    將類似定義描述在Point2D.h
    類別的方法描述在Point2D.cpp
    主程式描述在main.cpp
    試著建立起這個專案
    重載運算子，讓Point2D物件之間可以做乘法運算
    ** main.cpp * 已幫你準備好如下：

    #include <iostream>
    #include "Point2D.h"
    using namespace std;

    int main()
    {
     int x1, y1, x2, y2, num;
     cin >> x1 >> y1;
     cin >> x2 >> y2;
     cin >> num;
     Point2D p1(x1, y1);
     Point2D p2(x2, y2);
     Point2D p3;

     p3 = p1 + p2;
     cout << "P1 + P2 = X=" << p3.getX() << ", Y=" << p3.getY() << endl;

     p3 = p1 - p2;
     cout << "P1 - P2 = X=" << p3.getX() << ", Y=" << p3.getY() << endl;

     p3 = p1 * p2;
     cout << "P1 * P2 = X=" << p3.getX() << ", Y=" << p3.getY() << endl;

     p3 = p1 + num;
     cout << "P1 + " << num <<" = X=" << p3.getX() << ", Y=" << p3.getY() << endl;

     return 0;
    }
    請完成並上傳以下檔案：
    Point2D.h

    class Point2D
    {
       public:
             Point2D();
             Point2D(int x, int y);
             int getX();
             int getY();
             Point2D operator+(Point2D &p); // 重載+運算子
             Point2D operator-(Point2D &p); // 重載-運算子
             //重載乘法
             //重載+運算子 令x及y軸各加上一數字

       private:
             int X;
             int Y;
    };
    Point2D.cpp

    #include "Point2D.h"

    Point2D::Point2D()
    {
     X = 0;
     Y = 0;
    }
    Point2D::Point2D(int x, int y)
    {
     X = x;
     Y = y;
    }

    int Point2D::getX()
    {
     return X;
    }

    int Point2D::getY()
    {
     return Y;
    }
    Point2D Point2D::operator+(Point2D &p)
    {
     int x = X + p.X;
     int y = Y + p.Y;
     Point2D tmp(x, y);
     return tmp;
    }
    Point2D Point2D::operator-(Point2D &p)
    {
     int x = X - p.X;
     int y = Y - p.Y;
     Point2D tmp(x, y);
     return tmp;
    }

    //加上重載乘法
    //加上重載+運算子 令x及y軸各加上一數字
    example file

    Input
    座標x1 座標y1
    座標x2 座標y2
    整數1 (num)

    Output
    P1 + P2
    P1 - P2
    P1 * P2
    P1 + num

    Sample Input
    30 40
    10 20
    50
    Sample Output
    P1 + P2 = X=40, Y=60
    P1 - P2 = X=20, Y=20
    P1 * P2 = X=300, Y=800
    P1 + 50 = X=80, Y=90
 */

#include <iostream>
#include "Point2D.h"
using namespace std;
 
int main()
{
    int x1, y1, x2, y2, num;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> num;
    Point2D p1(x1, y1);
    Point2D p2(x2, y2);
    Point2D p3;
 
    p3 = p1 + p2;
    cout << "P1 + P2 = X=" << p3.getX() << ", Y=" << p3.getY() << endl;
 
    p3 = p1 - p2;
    cout << "P1 - P2 = X=" << p3.getX() << ", Y=" << p3.getY() << endl;
 
    p3 = p1 * p2;
    cout << "P1 * P2 = X=" << p3.getX() << ", Y=" << p3.getY() << endl;
 
    p3 = p1 + num;
    cout << "P1 + " << num <<" = X=" << p3.getX() << ", Y=" << p3.getY() << endl;
 
    return 0;
}
