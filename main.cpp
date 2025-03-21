#include <iostream>
using namespace std;
#include "Rectangle.h"
#include "Circle.h"
#include "Triangle.h"

int main() {
    int one, two, three;
    cout << "Enter sides of Rectangle (width and height): ";
    cin >> one >> two;
    cout << "Enter three sides of Triangle: ";
    cin >> three;

    Rectangle rectangle(one, two);
    Circle circle(one);
    Triangle triangle(one, two, three);

    rectangle.display();
    circle.display();
    triangle.display();

    rectangle.area();
    circle.area();
    triangle.area();

    rectangle.perimeter();
    circle.perimeter();
    triangle.perimeter();




    return 0;


}
