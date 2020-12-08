#include <iostream>
#include <vector>
#include "Rectangle.h"
#include "Circle.h"
using namespace std;

// Prototypes
void testRectangle(Rectangle);
void rectangleVector(int);

int main() {
    return 0;
}

void testRectangle(Rectangle r) {
    cout << "This Rectangle's base is " << r.getBase() << endl;
    cout << "This Rectangle's height is " << r.getHeight() << endl;
    cout << "This Rectangle's perimeter is " << r.getPerimeter() << "." << endl;
    cout << "This Rectangle's area is " << r.getArea() << "." << endl;
    if(r.isSquare()) {
        cout << "This Rectangle is a square." << endl;
    }
    else {
        cout << "This Rectangle is not a square." << endl;
    }
    cout << endl;
}

void rectangleVector(int nIterations) {
    vector<Rectangle> rVector;
    for(int i = 0; i < nIterations; i++) {
        Rectangle newRectangle(i+1, i+1);
        rVector.push_back(newRectangle);
    }

    for(auto i = rVector.begin(); i != rVector.end(); i++) {
        testRectangle(*i);
    }
}