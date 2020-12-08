#include <iostream>
#include <vector>
#include "Rectangle.h"
#include "Circle.h"
using namespace std;

// Prototypes
void rectangleVector(int);

int main() {
    rectangleVector(5);
    return 0;
}

void rectangleVector(int nIterations) {
    vector<Rectangle> rVector;
    for(int i = 0; i < nIterations; i++) {
        Rectangle newRectangle(i+1, i+1);
        rVector.push_back(newRectangle);
    }

    for(auto i = rVector.begin(); i != rVector.end(); i++) {
        (*i).printInfo();
    }
}