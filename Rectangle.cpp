#include "Rectangle.h"
Rectangle::Rectangle(int base, int height) {
    this->base = base;
    this->height = height;
}

Rectangle::~Rectangle() {

}

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

int Rectangle::getBase() { return this->base; }
int Rectangle::getHeight() {return this->height; }