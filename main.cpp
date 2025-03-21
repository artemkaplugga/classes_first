#include <iostream>
#include <vector>
using namespace std;
#include "Rectangle.h"
#include "Circle.h"
#include "Triangle.h"

int main() {
   int n;
    cout << "Enter number of figures: ";

   cin >> n;

    vector<Figure*> figures;

for (int i = 0; i < n; i++) {
    int type;
    cout << "Choose Figure, 1 - Rectangle, 2 - Circle, 3 - Triangle: ";
    cin >>  type;

    if (type == 1) {
        int a, b;
        cout << "Enter width and height: ";
        cin >> a >> b;
        figures.push_back(new Rectangle(a, b));
    } else if (type == 2) {
        int r;
        cout << "Enter r of Circle ";
        cin >> r;
        figures.push_back(new Circle(r));
    } else if (type == 3) {
        int a, b, c;
        cout << "Enter three sides of Triangle: ";
        cin >> a >> b >> c;
        figures.push_back(new Triangle(a, b, c));


    }
}
    cout << "\nFigures Information:\n";
    for (Figure* fig : figures) {
        if (fig) {
            fig->display();
        }
    }





    return 0;


}
