#ifndef LINE_H
#define LINE_H
#include <iostream>
#include <string>
#include "point.cpp"

class Line{
    private:
        Point a;
        Point b;

    public:
        Line(Point a, Point b);
        Line(Point &other);
        bool equals (Point &other);
        void flip();
        void move(double x, double y);
        std::string toString();
}


#endif