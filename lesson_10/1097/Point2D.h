
class Point2D
{
      public:
            Point2D();
            Point2D(int x, int y);
            int getX();
            int getY();
            Point2D operator+(Point2D &p);
            Point2D operator-(Point2D &p);
            Point2D operator*(Point2D &p);
            Point2D operator+(int n);
 
      private:
            int X;
            int Y;
};
