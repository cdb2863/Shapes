#include <iostream>
#include <cmath>
#include "Circle.h"
Circle::Circle(double radius) {
    this->radius = radius;
}

Circle::~Circle() {

}

// Accessors
double Circle::getRadius() {
    return this->radius;
}

// Mutators
void Circle::setRadius(double r) {
    this->radius = r;
}

// Other Methods
double Circle::getArea() {
    return pow((M_PI * this->radius),2);
}

double Circle::getCircumference() {
    return 2 * M_PI * this->radius;
}

double Circle::getDiameter() {
    return 2 * this->radius;
}

void Circle::printInfo() {
    std::cout << "This circle's radius is: " << this->radius << "." << std::endl;
    std::cout << "This circle's area is: " << this->getArea() << "." << std::endl;
    std::cout << "This circle's circumference is: " << this->getCircumference() << "." << std::endl;
    std::cout << "This circle's diameter is: " << this->getDiameter() << "." << std::endl;
}