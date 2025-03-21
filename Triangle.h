//
// Created by Student on 21.03.2025.
//
#include <iostream>
#include "Figure.h"
#include <cmath>
#ifndef TRIANGLE_H
#define TRIANGLE_H
using namespace std;



class Triangle : public Figure{
private:
    int a, b, c;
public:
    Triangle(int side1, int side2, int side3) : a(side1), b(side2), c(side3) {}

    int area() override {
        int s = (a + b + c) / 2;
        return sqrt(s * (s-a) * (s - b) * (s - c));
    }

    int perimeter() override {
        return a + b + c;
    }

    void display() override {
        cout <<  "sides of Triangle = " << a << ", " << b << ", " << c << ", area = " << area() << ", perimeter = " << perimeter() << endl;
    }
};





#endif //TRIANGLE_H
