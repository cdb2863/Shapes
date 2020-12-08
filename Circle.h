#pragma once
class Circle
{
private:
    double radius;
public:
    // Construct and deconstruct.
    Circle(double);
    ~Circle();

    // Accessors
    double getRadius();

    // Mutators
    void setRadius(double);

    // Other Methods
    double getArea();
    double getCircumference();
    double getDiameter();
    void printInfo();
};