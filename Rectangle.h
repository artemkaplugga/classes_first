//
// Created by Student on 21.03.2025.
//
#include "Figure.h"
#include <iostream>
;
#ifndef RECTANGLE_H
#define RECTANGLE_H
using namespace std;


class Rectangle : public Figure {
private:
    int width, height;
public:
    Rectangle(int w, int h) : width(w), height(h) {}

    int area() override {
        return width * height;
    }

    int perimeter() override {
        return 2 * (width + height);
    }

    void display() override {
        cout << "Rectangle: width = " << width << ", height = " << height
     << ", area = " << area() << ", perimeter = " << perimeter() << endl;

    }

};



#endif //RECTANGLE_H
