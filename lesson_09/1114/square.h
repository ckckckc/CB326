class Square {
public:
    Square() {
        len = 0;
    };
    Square(int n) {
        setLen(n);
    };
    int area();
    void setLen(int);
    int getLen();
private:
    int len;
};
