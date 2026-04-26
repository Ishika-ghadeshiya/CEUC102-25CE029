#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
using namespace std;


class Shape
{
protected:
    double radius;

public:
    void setRadius(double r);
    double getRadius();
};


class Circle : public Shape
{
public:
    double area();
};

#endif
