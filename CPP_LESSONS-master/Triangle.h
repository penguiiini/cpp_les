#pragma once
#include "Figure.h"

class Triangle :
        public Figure
{

private:
    double a;
    double b;
    double c;
    double h;

public:
    Triangle(double a, double b, double c, double h);

    virtual double GetPerimetr() override;
    virtual double GetSquare() override;
};