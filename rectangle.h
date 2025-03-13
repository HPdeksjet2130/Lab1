#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
#include <cmath>

using namespace std;


void rectangle(float side1, float side2)
{
    cout << "Периметр: " << (side1 + side2) * 2.0 << endl;
    cout << "Площадь: " << side1 * side2 << endl;
    cout << "Диагональ: " << sqrt(side1 * side1 + side2 * side2) << endl;
}


#endif