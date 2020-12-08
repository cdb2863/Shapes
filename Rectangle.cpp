#include <iostream>
#include "Rectangle.h"
Rectangle::Rectangle(int base, int height) {
    this->base = base;
    this->height = height;
}

Rectangle::~Rectangle() {

}

int Rectangle::getBase() { return this->base; }
int Rectangle::getHeight() {return this->height; }

int Rectangle::getPerimeter() {
    return (2 * this->base) + (2 * this->height);
}

int Rectangle::getArea() {
    return this->base * this->height;
}

bool Rectangle::isSquare() {
    if(this->base == this->height) {
        return true;
    }
    else {
        return false;
    }
}

void Rectangle::printInfo() {
    std::cout << "This Rectangle's base is " << this->base << std::endl;
    std::cout << "This Rectangle's height is " << this->height << std::endl;
    std::cout << "This Rectangle's perimeter is " << this->getPerimeter() << "." << std::endl;
    std::cout << "This Rectangle's area is " << this->getArea() << "." << std::endl;
    if(this->isSquare()) {
        std::cout << "This Rectangle is a square." << std::endl;
    }
    else {
        std::cout << "This Rectangle is not a square." << std::endl;
    }
    std::cout << std::endl;
}