#ifndef GROUP_H
#define GROUP_H
#include <iostream>
#include <string>
class Point {
    private: 
        double x;
        double y;
    
    public:

        Point(double x, double y);

        bool equals(Point &other);

        double getX();

        double getY();

        void flip();

        void move(double x, double y);

        std::string toString();

};
#endif