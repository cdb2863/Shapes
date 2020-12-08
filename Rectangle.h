class Rectangle
{
private:
    int base;
    int height;
public:
    Rectangle(int, int);
    ~Rectangle();
    int getPerimeter();
    int getArea();
    int getBase();
    int getHeight();
    bool isSquare();
    void printInfo();
};

