#define _USE_MATH_DEFINES // для C++
#include <cmath>

#include <iostream>
#include "Figure.h"
#include "Rectangle.h"
#include "Triangle.h"

int main()
{
    
    Figure* figure = new Rectangle(2, 3);
    Figure* figure1 = new Triangle(2, 2, 4, 2);

    /*
    std::cout << figure->GetPerimetr() << std::endl;
    std::cout << figure->GetSquare() << std::endl;
     */

    std::cout << figure1->GetPerimetr() << std::endl;
    std::cout << figure1->GetSquare() << std::endl;
}
