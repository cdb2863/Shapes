#include "Triangle.h"
#include <iostream>
// Constructor and deconstructor.
Triangle::Triangle(double base, double height) {
    this->base = base;
    this->height = height;
}

Triangle::~Triangle(){
    
}

// Accessors
double Triangle::getBase() {
    return this->base;
}

double Triangle::getHeight() {
    return this->height;
}

// Mutators
void Triangle::setBase(double newBase) {
    this->base = newBase;
}

void Triangle::setHeight(double newHeight) {
    this->height = newHeight;
}

// Other Methods
double Triangle::getArea() {
    return ((this->base * this->height) / 2);
}

void Triangle::printInfo() {
    std::cout << "This triangle's base is " << this->base << "." << std::endl;
    std::cout << "This triangle's height is " << this->height << "." << std::endl;
    std::cout << "This triangle's area is is " << this->getArea() << "." << std::endl;
    std::cout << std::endl;
}