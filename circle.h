#ifndef CIRCLE_H
#define CIRCLE_H


#include <iostream>
#include <cmath>

using namespace std;


void circle(float rad, float alpha)
{
    float pi = 3.1415926535;
    if (rad <= 0)
    {
        cout << "Радиус меньше или равен 0" << endl;
        return;
    }
    if (alpha <= 0 || alpha > 360)
    {
        cout << "Угол больше 360 градусов или <= 0" << endl;
        return;
    }
    cout << "Длина окружности: " << 2.0 * pi * rad << endl;
    cout << "Площадь окружности: " << pi * rad * rad << endl;
    cout << "Площадь сектора окружности: " << pi * rad * rad * (alpha / 360.0) << endl;
    
}


#endif