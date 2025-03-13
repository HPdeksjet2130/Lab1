#ifndef TRIANGLE_H
#define TRIANGLE_H


#include <iostream>
#include <cmath>

using namespace std;


void triangle(float side1, float side2, float side3)
{
    float semiper;
    semiper = (side1 + side2 + side3) / 2.0;
    cout << "Периметр: " << semiper * 2.0 << endl;
    cout << "Площадь по формуле Герона: " << sqrt(semiper * (semiper - side1) * (semiper - side2) * (semiper - side3)) << endl;
    if (side1 == side2 || side1 == side3 || side2 == side3)
    {
        cout << "Равнобедренный";
    }
    else
    {
        cout << "Неравнобедренный";
    }
}


#endif