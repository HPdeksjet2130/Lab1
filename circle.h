#ifndef CIRCLE_H
#define CIRCLE_H


#include <iostream>
#include <cmath>

using namespace std;


void circle(float rad, float alpha)
{
    float pi = 3.1415926535;
    cout << "Длина окружности: " << 2.0 * pi * rad << endl;
    cout << "Площадь окружности: " << pi * rad * rad << endl;
    cout << "Площадь сектора окружности: " << pi * rad * rad * (alpha / 360.0);
}


#endif