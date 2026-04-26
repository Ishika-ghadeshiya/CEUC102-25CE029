#include "Shape.h"

void Shape::setRadius(double r)
{
    radius = r;
}

double Shape::getRadius()
{
    return radius;
}
double Circle::area()
{
    return 3.14 * radius * radius;
}
