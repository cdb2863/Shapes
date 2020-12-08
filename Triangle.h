class Triangle
{
private:
    double base;
    double height;
public:
    // Constructor and deconstructor.
    Triangle(double, double);
    ~Triangle();

    // Accessors
    double getBase();
    double getHeight();

    // Mutators
    void setBase(double);
    void setHeight(double);

    // Other Methods
    double getArea();
    void printInfo();
};
