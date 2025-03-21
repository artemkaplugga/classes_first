//
// Created by Student on 21.03.2025.
//

#ifndef FIGURE_H
#define FIGURE_H



class Figure {
public:
    virtual int area() = 0;
    virtual int perimeter() = 0;
    virtual void display() = 0;
    virtual ~Figure() = default;

};



#endif //FIGURE_H
