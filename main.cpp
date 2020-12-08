#include <iostream>
#include <vector>
#include "Rectangle.h"
#include "Circle.h"
#include "Triangle.h"
using namespace std;

// Prototypes
void rectangleVector(int);
void circleVector(int);
void triangleVector(int);

int main() {
    int iterations = 1;
    rectangleVector(iterations);
    circleVector(iterations);
    triangleVector(iterations);
    return 0;
}

void rectangleVector(int nIterations) {
    vector<Rectangle> rVector;
    for(int i = 0; i < nIterations; i++) {
        Rectangle newRectangle(i + 1, i + 1);
        rVector.push_back(newRectangle);
    }

    for(auto i = rVector.begin(); i != rVector.end(); i++) {
        (*i).printInfo();
    }
}

void circleVector(int nIterations) {
    vector<Circle> cVector;
    for(int i = 0; i < nIterations; i++) {
        Circle newCircle(i + 1);
        cVector.push_back(newCircle);
    }

    for(auto i = cVector.begin(); i != cVector.end(); i++) {
        (*i).printInfo();
    }
}

void triangleVector(int nIterations) {
    vector<Triangle> tVector;
    for(int i = 0; i < nIterations; i++) {
        Triangle newTriangle(i + 1, i + 1);
        tVector.push_back(newTriangle);
    }

    for(auto i = tVector.begin(); i != tVector.end(); i++) {
        (*i).printInfo();
    }
}