//
// Created by Student on 21.03.2025.
//

#include <iostream>
#include "Figure.h"
#include <cmath>
using namespace std;

#ifndef CIRCLE_H
#define CIRCLE_H



class Circle : public Figure {
private:
    int r;
public:
    Circle(int r) : r(r) {}
    int area() override {
        return r * r;
    }

    int perimeter() override {
        return 2 * (r * r);
    }
    void display() override {
        cout << "Circle: radius = " << r << ", area = " << area() << ", perimeter = " << perimeter() << endl;
    }

};



#endif //CIRCLE_H
