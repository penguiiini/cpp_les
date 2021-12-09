#include "Triangle.h"

Triangle::Triangle(double a, double b, double c, double h) {
    this->a = a;
    this->b = b;
    this->c = c;
    this->h = h;
}

double Triangle::GetPerimetr() {
    return (this->a + this->b + this->c);
};

double Triangle::GetSquare() {
    return ((0.5 * this->h) * this->a);
};

